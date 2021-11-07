#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void test(){
  int g;
  cin>>g;
  for(int j=0;j<g;j++){
      int i,n,q;
      cin>>i>>n>>q;
      if(n%2==0){
				cout<<n/2<<endl;
			}else{
				if(i==q){
					cout<<n/2;
				}else{
					cout<<(n/2)+1;
				}
			cout<<endl;
			}
  }
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    test();
	}
	
	return 0;
}
