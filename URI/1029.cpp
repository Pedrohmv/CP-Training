#include <bits/stdc++.h>
using namespace std;

int num_calls[40], calls[40], x, p;

void fib(int n){
    for (int i = p; i <= n; i++) {
        calls[i] = calls[i-1]+calls[i-2];
        num_calls[i] = num_calls[i-1]+num_calls[i-2]+2;
    }
}

int main() {
	int t;
	cin>>t;
	
	memset(calls, -1, sizeof(calls));
	memset(num_calls, 0, sizeof(num_calls));
	calls[0] = 0;
	calls[1] = 1;
	p = 2;
	
	for (int i = 0; i < t; i++) {
	    cin>>x; 
	    if(calls[x] == -1) 
	        fib(x);
	    p = (x > p) ? x : p;
	    printf("fib(%d) = %d calls = %d\n", x, num_calls[x], calls[x]);
	}
	return 0;
}