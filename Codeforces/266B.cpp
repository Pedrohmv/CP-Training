#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int n, t;
	string queue;
	char aux;
	bool swap = false;
	cin>>n>>t;
	cin>>queue;
	while(t!=0){
		for (int i = 0; i < queue.length()-1; ++i){
			if(queue[i+1]=='G' && queue[i]=='B'){
				aux = queue[i];
				queue[i] = queue[i+1];
				queue[i+1] = aux;
				swap = true;
			}
			if(swap)
				++i;
			swap = false;
		}
		--t;
	}
	for (int i = 0; i < queue.length(); ++i){
		cout<<queue[i];
	}
}