#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n , k , l;
	    cin>>n>>k>>l;

	    int a[n];

	    for(int i = 0 ; i < n;  i++){
	        cin>>a[i];
	    }

        int max0 = a[0] , loc0 = -1;
        for(int i = 0 ; i < n ;i++){
            if(max0<a[i]){
                max0 = a[i];
                loc0 == i;
            }
        }
        
        int x = 0;
        for(int i = 0 ; i < n ; i++){
            if(max0 == a[i]){
                x++;
            }
        }

        if(max0 == a[n-1] && x == 1 ){
            cout<<"Yes"<<endl;
        }

        else{
            int max = a[0] , loc = -1 , y = 0;
    
            a[n-1] += k*(l-1);
            for(int i = 0 ; i < n; i++){
                if(max < a[i]){
                    max = a[i];
                    loc = i;
                }
            }
            
            for(int i = 0 ; i < n ; i++){
                if(max == a[i]){
                    y++;
                }
            }
    
            if(max == a[n-1] && y == 1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
	}
	return 0;
}
