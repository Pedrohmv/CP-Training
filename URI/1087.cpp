#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
#define endl '\n'

using namespace std;

struct Position
{
	int row; int column;

	bool move( Position other){
		if(row+column==other.row+other.column || 
			row - column == other.row - other.column ||
			 row == other.row || column == other.column){
			return true;
		}
		return false;
	}
};

bool operator==(Position a, Position b){
	return (a.row == b.row && a.column == b.column) ? true : false;
}


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	Position ori, dest;
	while(true){
		scanf("%d %d %d %d",&ori.row,&ori.column,&dest.row,&dest.column);
		if(ori.row == 0)
			break;
		if(ori == dest)
			printf("0\n");
		else if(ori.move(dest))
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;

}