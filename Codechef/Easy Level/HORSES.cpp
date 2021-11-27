#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void test(){
  int n;
  cin>>n;
  int temp=INT_MAX,currmin=INT_MAX;
  long long s[n];
  for(int i=0;i<n;i++){
      cin>>s[i];
  }
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          temp = abs(s[i]-s[j]);
          currmin = min(temp,currmin);
      }
  }  
    cout<<currmin<<endl;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    test();
	}
	
	return 0;
}
