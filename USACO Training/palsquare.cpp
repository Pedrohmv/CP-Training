/*
ID: pedromo1
PROG: palsquare
LANG: C++11                 
*/

#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

int n, b, s;
char res[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I'};
list<int> square, number;

void convert(int x){
	while(true){
		square.push_front(x%b);
		x /= b;
		if(x==0) break;
	}
}

void convertN(int x){
	while(true){
		number.push_front(x%b);
		x /= b;
		if(x==0) break;
	}
}

bool isPalin(){
	bool flag = true;
	list<int>::iterator first, last;
	first = square.begin();
	last = square.end();
	last--;
	while(first != last && square.size() != 1){
		if(*first != *(last)){
			flag = false;
			break;
		} 
		first++;
		last--;
	}
	return flag;
}

int main(){
	ifstream cin ("palsquare.in");
	ofstream cout ("palsquare.out");
	cin>>b;
	for(int i=1; i<=300; i++){
		n = i;
		s = n*n;
		convert(s);
		if(isPalin()){
			convertN(n);
			for(auto it : number) cout<<res[it];
			cout<<' ';
			for(auto it : square) cout<<res[it];
			cout<<'\n';
		}
		square.clear();
		number.clear();
	}
	return 0;
}