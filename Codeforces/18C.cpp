#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;
int a[(int)1e5+1];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n,i,c=0,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d", &x);
		a[i]=a[i-1]+x;
	}
	for(i=1;i<n;i++){
		if(a[i]==a[n]-a[i]) c++;
	}

	cout<<c<<"\n";
}