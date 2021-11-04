#include<bits/stdc++.h>
using namespace std;

void test(){
    string s;
    cin>>s;

    int n = s.size() , mid =n/2;
    int hash[26]={0};
    
    bool flag=true;
    for (int i=0;i<mid;i++){
        int x = s[i] - 'a';
        hash[x]++;
    }


    if(n%2!=0){
        mid+=1;
        for (int i=mid;i<n;i++){
        int x = s[i] - 'a';
        hash[x]--;
    }
  }else{
      for (int i=mid;i<n;i++){
        int x = s[i] - 'a';
        hash[x]--;
  }}
  for(int i=0;i<26;i++){
      if(hash[i]!=0){
          flag = false;
          break;
      }
  }
  if(flag){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
}

int main(){

    long long t;
    cin >> t;
    for (int i=0;i<t;i++){
        test();
    }    
    return 0;
}