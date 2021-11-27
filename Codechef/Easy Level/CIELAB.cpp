#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
    cin>>a>>b;
    int correct_answer = a-b;
    int lastdigit =correct_answer%10;
    if(lastdigit == 9){
        correct_answer -= 1;
    }else{
        correct_answer += 1;
    }
    cout<<correct_answer<<endl;
	return 0;
}
