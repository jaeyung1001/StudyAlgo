#include <iostream>
using namespace std;

int main() {
	int i, j, testcase;
	int arr[50];
	int tmp[50] = {0, };

	scanf("%d", &testcase);

	for (i = 0; i<testcase; i++) {
		scanf("%d", &arr[i]);
		for (j = 0; j<i; j++) {
			if (arr[j] > arr[i]) {
				tmp[j]++;
			}
			else if (arr[j] <= arr[i]) {
				tmp[i]++;
			}
		}
	}
	
	for (i = 0; i<testcase; i++) {
		cout<<tmp[i]<<" ";
	}
	return 0;
}
