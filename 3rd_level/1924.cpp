#include <iostream>
using namespace std;
int main(){
    int x,y, cnt=0;
    int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31};
    cin >> x >> y;
    for(int i=1;i<x;i++)
        cnt += date[i-1];
    cnt += y;
    switch (cnt % 7)
    {
    case 0:
        cout << "SUN\n" << endl;
        break;
    case 1:
        cout << "MON\n" << endl;
        break;
    case 2:
        cout << "TUE\n" << endl;
        break;
    case 3:
        cout << "WED\n" << endl;
        break;
    case 4:
        cout << "THU\n" << endl;
        break;
    case 5:
        cout << "FRI\n" << endl;
        break;
    case 6:
        cout << "SAT\n" << endl;
        break;
    }
}