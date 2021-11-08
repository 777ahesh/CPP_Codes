#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {



	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t ;

	cin >> t;

	while(t--){

		ll k;int d0,d1;
		cin >> k >> d0 >> d1;
		int s = d0+d1;

		int c = (2*s)%10 + (4*s)%10 +(6*s)%10 +(8*s)%10;
		ll cycles = (k-3)/4;
		ll ans = 0;
		if(k==2){
			ans = s;
		} 
		else{
			ans = s+(s%10) + (c *1LL *cycles);
		
		int left = (k-3)-(cycles*4);
		int p=2;
		for(int i=1;i<=left;i++){
			ans += (p*s)%10;
			p=(p*2)%10;
		}
	}

	
		if(ans%3==0) cout << "YES\n";

		else      cout << "NO\n";
	}
	return 0;
}