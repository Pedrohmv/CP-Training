#include <bits/stdc++.h>
using namespace std;

struct Bq{
    int d, p;
};

bool comp(const Bq& a, const Bq& b){
    return ((double)a.p/a.d) > ((double)b.p/b.d);
}

int main() {
	int n, t, j;
	j = 1;
	Bq bq;
	while(true){
	    cin>>n>>t;
	    if(n == 0) break;
	    vector<Bq> bnq;
	    for (int i = 0; i < n; i++){
	        cin>>bq.d>>bq.p;
	        bnq.push_back(bq);
	    }
	    sort(bnq.begin(),bnq.end(), comp);
	    int auxt, tt, i, p;
	    auxt = 0;
	    tt = 0;
	    i = 0;
	    p = 0;
	    while(i<n){
	        auxt = bnq[i].d;
	        if(auxt+tt <= t){
	            tt += auxt;
	            p += bnq[i].p;
	        }else{
	            i++;
	        }
	    }
	    cout<<"Instancia "<<j++<<"\n";
	    cout<<p<<"\n\n";
	}
	return 0;
}