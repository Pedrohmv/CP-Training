#include <iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	//freopen("output.out", "w", stdout);
	#endif

	int k, n, m,x,y;
	while(true){
		cin>>k;
		if(k==0)
			return 0;
		cin>>n>>m;
		for (int i = 0; i < k; ++i){
			cin>>x>>y;
			if(x==n || y==m)
				cout<<"divisa\n";
			else if(x>n && y>m)
				cout<<"NE\n";
			else if(x>n && y<m)
				cout<<"SE\n";
			else if(x<n && y>m)
				cout<<"NO\n";
			else if(x<n && y<m)
				cout<<"SO\n";
		}

	}
}