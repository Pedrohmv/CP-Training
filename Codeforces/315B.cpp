#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;
int a[(int)1e5+1];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n,m,i,opt,l,k,inc=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) scanf("%d", a+i);
	for(i=0;i<m;i++){
		scanf("%d",&opt);
		if(opt==1){
			scanf("%d %d", &l,&k);
			a[l]=k-inc;
		}else if(opt==2){
			scanf("%d",&k);
			inc+=k;
		}else{
			scanf("%d",&l);
			printf("%d\n", a[l]+inc);
		}

	}
	return 0;
}