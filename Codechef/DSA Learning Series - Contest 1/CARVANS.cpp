#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int answer=1;
        int n;
        cin>>n;
        int first,second;
        cin>>first;
        n--;
        while(n--)
        {
            cin>>second;
            if(first>=second)
            {
                answer++;

            first=second;

            }
        }

        cout<<answer<<endl;
    }


}
