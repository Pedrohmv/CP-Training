#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define maxV 10000
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int mus[maxV];
	while(true){
		int n;
		scanf("%d",&n);
		int peek = 0;
		if(n==0)
			return 0;
		
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&mus[i]);
		}
		mus[n] = mus[0];
		mus[n+1] = mus[1];
		if(n<=2){
			printf("%d\n", n);
		}else{
			for (int i = 0; i < n; ++i)
			{
				if (mus[i+1]-mus[i]<0 && mus[i+2]-mus[i+1]>0)
					++peek;
				else if(mus[i+1]-mus[i]>0 && mus[i+2]-mus[i+1]<0)
					++peek;
			}
			printf("%d\n", peek);
		}
	}
}