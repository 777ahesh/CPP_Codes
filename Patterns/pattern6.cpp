// pattern 6 : 

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

#include<iostream>
using namespace std;
int main(){
  // User Inputs : 
  int n;
  cin>>n;
  int k=0;
  int m=n;
  for(int i=1; i<=n; i++){
      for(int j =1 ; j<=k; j++){
          cout<<" ";
      }
      k++;
      for(int j=1; j<=m; j++){
          cout<<j;
      }
      m--;
      cout<<endl;
  }
 return 0;
}