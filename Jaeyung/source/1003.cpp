#include <iostream>
using namespace std;
int count_0 = 0;
int count_1 = 0;
int fibonacci(int n) {
    if (n==0) {
        count_0++;
        return 0;
    } else if (n==1) {
        count_1++;
        return 1;
    } else {
		return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        fibonacci(a[i]);
        cout<<count_0<<" "<<count_1<<endl;
        count_0=0,count_1=0;
    }
}
