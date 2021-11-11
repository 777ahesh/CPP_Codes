// pattern 2 : 

 /*

    1  2  3  4  5 
    2  4  6  8  10  
    3  6  9  12 15
    4  8  12 16 20
    5  10 15 20 25

 */

#include<iostream>
using namespace std;
int main(){
  
  // User Inputs : 
  
  int n;
  cin>>n;
  
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
          cout<<i*j<<"  ";
      }cout<<endl;
  }

 return 0;
}

