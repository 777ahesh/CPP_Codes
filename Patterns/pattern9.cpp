// // pattern 9 : 

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 
// 1 2
// 1


#include<iostream>
using namespace std;
int main(){
  // User Inputs : 
  int n;
  cin>>n;
  int r=n;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
          cout<<j<<" ";
      }
      cout<<endl;
  }
  for(int i=1; i<n; i++){
 
      for(int j=1; j<r; j++){
          cout<<j<<" ";
      }
      r--;
      cout<<endl;
  }
 return 0;
}