#include <iostream>
using namespace std;
int main(){
    int n = 0,n1 = 0, n2 = 0;
    cin >> n;
    if(n%5 == 0)
        cout << n/5 << endl;
    else {
		n1++;
		while (n - 3 * n1 > 0) {
			if ((n - 3 * n1) % 5 == 0) {
				break;
			}
			n1++;
		}
		if ((n - 3 * n1) % 5 == 0) {
			n2 = (n - 3 * n1) / 5;
			cout << n1 + n2 << endl;
		}
		else cout << "-1" << endl;
	}
}