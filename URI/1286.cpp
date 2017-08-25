#include <bits/stdc++.h>
using namespace std;

int n, p, t[20], q[20];

int tempo(int i, int remP){
    if(remP == 0) return 0;
    else if(i == n) return 0;
    else if(q[i] > remP) return tempo(i+1,remP);
    return max(tempo(i+1,remP),t[i] + tempo(i+1,remP-q[i]));
}

int main() {
	while(true){
	    cin>>n;
	    if(!n) break;
	    cin>>p;
        for (int i = 0; i < n; i++)
            cin>>t[i]>>q[i];
        cout<<tempo(0,p)<<" min."<<'\n';
	}
	return 0;
}