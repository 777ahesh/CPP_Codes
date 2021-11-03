#include<iostream>
using namespace std;


int main(){
 
  int n,k,s=0;
  cin>>n>>k;

  int a[n];
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
    for(int i=0; i<n; i++){
        if(a[i]==k){
            s=1;
        }
    }
    if(s==1){
        cout<<1;
    }else{
        cout<<-1;
    }
 
  return 0;
}