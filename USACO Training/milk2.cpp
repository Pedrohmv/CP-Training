/*
ID: pedromo1
PROG: milk2
LANG: C++11                 
*/

#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#define debug(x) cout << #x "=" << (x) << "\n"
using namespace std;

int main(){
	ifstream fin ("milk2.in");
	ofstream fout ("milk2.out");

	int n,s,e,max =0, maxW=0, maxWO=0, aux=0, aux2=0;
	vector< pair<int,int> > t;
	string result = "";
	fin>>n;

	for(int i =0;i<n;i++){
		fin>>s>>e;
		t.push_back(make_pair(s,e));
	}

	sort(t.begin(),t.end());
	/*for(int i =0;i<n;i++){
		fout<<t[i].first<<" "<<t[i].second<<"\n";
	}*/

	for(int i =0;i<n;i++){
		s = t[i].first;
		e = t[i].second;
		if(i==0){
			aux += e - s;
			maxW = aux;
		}
		if(s<=max && e > max && i != 0){
			aux += e - max;
			if(aux>maxW)
				maxW=aux;
		}
		if(s > max && i != 0){
			if(aux>maxW){
				maxW = aux;
			}
			aux = e - s;
		}
		if(s > max  && i != 0){
			aux2 = s - max; 
			if(aux2>maxWO)
				maxWO = aux2;
		}
		if(e>max){
			max = e;
		}
	}
	fout<<maxW<<" "<<maxWO<<"\n";
	return 0;
}
