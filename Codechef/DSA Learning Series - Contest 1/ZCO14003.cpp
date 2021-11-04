#include <bits/stdc++.h>
using namespace std;

void test(){
    long long n;
    long long max_profit = 0; 
    cin>>n;
    long long arr[n]={0};
    for(long long  i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        max_profit = max(max_profit, (n-i)*arr[i]);
    }
    
    cout<<max_profit<<endl;
}

int main() {
	test();
	return 0;
}
