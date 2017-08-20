/*
ID: pedromo1
PROG: dualpal
LANG: C++11                 
*/

#include <bits/stdc++.h>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

list<long> number;
long b =2, n, s, c;

void convert(long x){
	while(true){
		number.push_front(x%b);
		x /= b;
		if(x==0) break;
	}
}

bool isPalin(long x){
	bool flag;
	b = 2;
	int cnt = 0;
	list<long>::iterator first, last;
	while(b<11){
		convert(x);
		flag = true;
		first = number.begin();
		last = number.end();
		last--;
		while(first != last && number.size() != 1){
			if(*first != *(last)){
				flag = false;
				break;
			} 
			first++;
			last--;
		}
		if(flag) cnt++;
		if(cnt==2){
			return true;
		}
		number.clear();
		b++;
	}
	return false;
}

int main(){
	ifstream cin ("dualpal.in");
	ofstream cout ("dualpal.out");


	cin>>n>>s;
	c=0;
	s++;
	while(c<n){
		if(isPalin(s)){
			c++;
			cout<<s<<"\n";
		}
		s++;
		number.clear();
	}
	return 0;
}