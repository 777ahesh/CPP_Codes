#include <iostream>
#include<cmath>
using namespace std;

void test(){
    long long n;
    cin>>n;
    
    int zeroes =0;
    int c =5;
    while((n/c)>0){
        zeroes += (n/c);
        c*=5;
    }
    cout<<zeroes<<endl;
}

int main() {
	// your code goes here

    int t ;
    cin >>t;
    for(int i=0;i<t;i++){
        test();
    }
	return 0;
}
