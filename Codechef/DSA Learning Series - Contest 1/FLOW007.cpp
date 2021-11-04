#include <iostream>
using namespace std;

void Test(){
    long long N;
    cin>>N;
    int sum = 0;
    while(N>0){
        int ld = N%10;
        sum = sum*10 + ld;
        N/=10;
    }
    cout<<sum<<endl;
}


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        Test();
    }
	return 0;
}
