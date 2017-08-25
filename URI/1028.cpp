#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f1, f2;
    cin>>n;
	while(n){
	    cin>>f1>>f2;
	    cout<<__gcd(f1,f2)<<'\n';
	    --n;
	}
	return 0;
}