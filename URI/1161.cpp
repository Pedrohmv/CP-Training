#include <bits/stdc++.h>
using namespace std;

long long int dp[21];

void fat(){
    dp[0] = 1;
    for (int i = 1; i < 21; i++) dp[i] = i*dp[i-1];
}

int main() {
    int m, n;
    fat();
	while(cin>>m>>n){
	    cout<<dp[m]+dp[n]<<'\n';
	}
	
	return 0;
}