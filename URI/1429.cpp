#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int dp[6], num[5];

void fat(int x){
    for (int i = 1; i < x+1; i++) {
        dp[i] = dp[i-1]*i;
    }
}

int main() {
	int n, res, k;
	dp[0]=1;
	fat(5);
	while(true){
	    cin>>n;
	    if(!n) break;
	    res = 0;
	    k = 1;
	    for (int i = 0; i < 5; i++) {
	        num[i] = n % (int)pow(10,k) / (int)pow(10,k-1);
	        k++;
	    }
	    for (int i = 0; i < 5; i++)
	        res += dp[i+1]*num[i];
	    cout<<res<<"\n";
	}
	return 0;
}