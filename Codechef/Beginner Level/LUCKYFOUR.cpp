#include <iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;


void test(){
  string str;
  cin>>str;
  int cnt=0;
  int size = str.length();
  for(int i=0;i<size;i++){
      if(str.at(i)=='4'){
          cnt++;
      }
  }
  cout<<cnt<<endl;

}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    test();
	}
	
	return 0;
}
