#include<iostream>
#include<climits>

using namespace std;

void minidigit(){
        int n,l,r,ans;
        cin>>n>>l>>r;
        if(r>n){
          ans=r;
        }
        if(l<n && n<r){
           ans=n;
        }
        else{
            int min = INT_MAX;
            for(int i=r;i>=l;i--)
            {
                int sum=0;
                int temp=n;
                while(temp>0)
                {
                    sum+=temp%i;
                    temp/=i;
                    if(sum>min)
                    break;
            }
             if(min>sum)
             {
                 min=sum;
                 ans=i;
             }
            if(min==1)
            break;
            }
        cout<<ans<<endl;
       
        }
  
   }


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
      minidigit();
      cout<<endl;
    }
    return 0;
}