#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

long long n,a,b,c,r=0;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	cin>>n>>a>>b>>c;
	if(a < (b - c) or n < b)
    	cout<<(n / a)<<"\n";
	else
		cout<<max(n/a, (n-b)/(b-c) + 1 + (c + (n-b)%(b-c)) / a)<<"\n";
	return 0;
}