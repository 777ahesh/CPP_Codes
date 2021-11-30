#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int i=0,cnt = 0;
    while(arr[i] != 0){
        cnt ++;
    }
    for(int i=0;i<cnt;i++){
        int temp = (arr[i]/2 )+(arr[i]/3) +(arr[i]/4);
        cout<<temp<<endl;
    }
}
