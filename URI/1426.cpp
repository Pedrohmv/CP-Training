#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		int a[45]={0}, l = 8, ip = 4, p = 8, k = 43, w=0,j=2,aux;
		int index[15]={0,3,5,10,12,14,21,23,25,27,36,38,40,42,44};

		for(auto it: index) scanf("%d", a+it);

		while(l>0){
			if(l==8){
				for (int i = 0; i < ip; ++i){
					a[k] = (a[k-l*2]-a[k+1]-a[k-1])/2;
					k -= 2;
				}
				ip--;
			}else{
				if(l%2==1){
					for (int i = 0; i < p; ++i)
					{
						a[k] = a[k+l+1] + a[k+l+2];
						k--;
					}
					k--;
					p-=2;
				}else{
					for (int i = 0; i < ip; ++i)
					{
						a[k] = a[k+l+1] + a[k+l+2];
						k-=2;
					}
					ip--;
				}
			}
			l--;
		}
		for (int i = 0; i < 45; ++i){
			if(i==0){
				printf("%d\n",a[i]);
			}
			else if(i==j){
				printf("%d\n",a[i]);
				aux=j;
				j += j+ 1 -w;
				w=aux;
			}
			else
				printf("%d ",a[i]);
				;
		}
	}
	return 0;
}