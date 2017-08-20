#include <bits/stdc++.h>
#define debug(x) cout << #x " = " << (x) << endl
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	char s1[60], s2[60];
	string number1, number2, cpf;
	int cnt = 0, c= 0, d=0, n1=0,n2=0;
	double r1=0, r2=0;

	cin.getline(s1, 60);
	cin.getline(s2, 60);

	for(auto it : s1) {
		if(isdigit(it) || it == '.'){
			if(c>=3) break;
			if(it == '.' || c > 0) c++;
			if(cnt>10) number1 += it;
			else cpf += it;
			cnt++;
		}
	}	
	for(auto it : s2) if(isdigit(it) || it == '.'){
		if(d>=3) break;
		if(it == '.' || d > 0) d++;
		number2 += it; 
	}
	if(!c) n1 = atoi(number1.c_str());
	else r1 = atof(number1.c_str());
	if(!d) n2 = atoi(number2.c_str());
	else r2 = atof(number2.c_str());
	cout<<"cpf "<<cpf<<"\n";
	cout<<fixed<<setprecision(2)<<n1+n2+r1+r2<<"\n";

	return 0;
}
