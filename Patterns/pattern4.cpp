// pattern 4 : 

//         1
//       2 3
//     4 5 6
//   7 8 9 10   


#include<iostream>
using namespace std;
int main(){
  // User Inputs : 
  int n;
  cin>>n;
  int k=1;

  for(int i=1; i<=n; i++){
      for(int j=1; j<=n-i; j++){
          cout<<" ";
      }
      for(int j=1; j<=i; j++){
          cout<<k;
           k++;
      }
     
      cout<<endl;
  }

 return 0;
}