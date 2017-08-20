#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	int x,y, matrix[5][5];
	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			cin>>matrix[i][j];
			if(matrix[i][j] == 1){
				x = i;
				y = j;
			}
		}
	}

	cout<<abs(x-2)+abs(y-2);
	return 0;
}