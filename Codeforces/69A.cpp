#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n, x, y, z;
	int sx=0, sy=0, sz=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d %d", &x, &y, &z);
		sx += x;
		sy += y;
		sz += z;	
	}
	if(sx==sy && sx==sz && sx==0){
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}
