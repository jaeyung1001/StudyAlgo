#include <iostream>
using namespace std;
int main(){
    int n = 0,threeNum = 0, fiveNum = 0;
    cin >> n;
    if(n%5 == 0)
        cout << n/5 << endl;
    else {
		threeNum++;
		while (n - 3 * threeNum > 0) {
			if ((n - 3 * threeNum) % 5 == 0) {
				break;
			}
			threeNum++;
		}
		if ((n - 3 * threeNum) % 5 == 0) {
			fiveNum = (n - 3 * threeNum) / 5;
			cout << threeNum + fiveNum << endl;
		}
		else cout << "-1" << endl;
	}
}