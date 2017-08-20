#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	string msg, result;
	cin>>msg;
	for(int i = 0;i<msg.length();++i){
		if(msg[i]=='.')
			result.push_back('0');
		else{
			if(msg[i+1]=='.'){
				result.push_back('1');
			}else
				result.push_back('2');
			++i;
		}
	}
	cout<<result;
	return 0;
}