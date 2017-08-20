#include <bits/stdc++.h>
using namespace std;

int g, p, w, enf[100], wt[100];

int value(int i, int remWt){
    if(remWt == 0) return 0;
    else if(i == p) return 0;
    else if(wt[i] > remWt) return value(i+1, remWt);
    return max(value(i+1,remWt), enf[i] + value(i+1,remWt-wt[i]));
}

int main() {
	cin>>g;
	for (int i = 0; i < g; i++) {
	    cin>>p>>w;
	    for (int j = 0; j < p; j++)
	        cin>>enf[j]>>wt[j];
	    cout<<"Galho "<<i+1<<":\n";
	    cout<<"Numero total de enfeites: "<<value(0,w)<<"\n\n";
	}
	return 0;
}