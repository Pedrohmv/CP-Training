#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
#define MAX 13
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int p,m,q,f,b, k, sum=0;
	int lp[MAX]={0}, lm[MAX]={0}, lq[MAX]={0}, lf[MAX]={0}, lb[MAX]={0};
	vector<int> v;

	scanf("%d", &p);
	for (int i = 0; i < p; ++i) scanf("%d", lp+i);
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) scanf("%d", lm+i);
	scanf("%d", &q);
	for (int i = 0; i < q; ++i) scanf("%d", lq+i);
	scanf("%d", &f);
	for (int i = 0; i < f; ++i) scanf("%d", lf+i);
	scanf("%d", &b);
	for (int i = 0; i < b; ++i) scanf("%d", lb+i);

	scanf("%d", &k);

	for (int i = 0; i < p; ++i)
		for (int j = 0; j < m; ++j)
			for (int w = 0; w < q; ++w)
				for (int l = 0; l < f; ++l)
					for (int z = 0; z < b; ++z)
						v.push_back(lp[i]+lm[j]+lq[w]+lf[l]+lb[z]);

	sort(v.begin(), v.end());

	for(int i=0;i<k;i++){
		sum += *(v.end()-1-i);
	}
	printf("%d\n", sum);
}