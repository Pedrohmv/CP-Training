#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, res;
	while(true){
		cin>>n;
		res = 0;
		if(n == 0) break;
		while(n>0){
			res += n*n;
			n--;
		}
		cout<<res<<"\n";
	}
	return 0;
}