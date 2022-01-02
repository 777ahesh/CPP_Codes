#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> v){
    cout<<"Curr Size"<<v.size()<<" :";
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;
    
}

int main(){
  vector <int> v;
  int n;
  cin>>n;
  for(int i=0;i<n;++i){
    int x;
    cin>>x;
    printVector(v);
    v.push_back(x);
  } 
  return 0;
}