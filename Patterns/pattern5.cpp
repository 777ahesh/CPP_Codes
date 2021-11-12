//  pattern 5 : 

// 1 2 3 4 5
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
  int k=n;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=k; j++){
          cout<<j<<" ";   
      }
    k--;
    cout<<endl;
  }
 return 0;
}