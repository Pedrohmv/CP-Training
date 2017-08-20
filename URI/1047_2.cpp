#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, ans, k = 1;
	while(true){
	    cin>>n>>t;
	    if(n == 0) break;
	    int d[n], p[n];
	    for (int i = 0; i < n; i++) {
	        cin>>d[i]>>p[i];
	    }
	    
	    int dp[t+1];
	    memset(dp, 0, sizeof dp);
	    
	    for (int i = 0; i <= t; i++) 
	        for (int j = 0; j < n; j++) 
	            if(d[j]<=i)
	                dp[i] = max(dp[i],dp[i-d[j]]+p[j]);
	    ans = dp[t];
	    cout<<"Instancia "<<k++<<"\n";
	    cout<<ans<<"\n\n";
	}
	
	return 0;
}