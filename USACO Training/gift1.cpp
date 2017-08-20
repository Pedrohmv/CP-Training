/*
ID: pedromo1
PROG: gift1
LANG: C++11                 
*/
#include <iostream>
#include <fstream>
#include <string>
#define debug(x) cout << #x "=" << (x) << "\n"

using namespace std;

int find(string a[], string b, int length){
	for (int i = 0; i < length; ++i)
	{
		if(a[i]==b)
			return i;
	}
	return -1;
}

int main() {
	ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int n;
    fin>>n;
	string group[n];
    int money[n];
    for (int i = 0; i < n; ++i){
    	fin>>group[i];
    	money[i]=0;
    }
    string giver, receiver;
    int amount, m, index, index2;
    for(int i = 0; i<n;++i){
    	fin>>giver;
    	fin>>amount>>m;
    	if(m==0)
    		continue;
    	index = find(group,giver,n);
    	money[index] += (amount%m)-amount;
    	for (int j = 0; j < m; ++j)
    	{
    		fin>>receiver;
    		index2 = find(group, receiver, n);
    		money[index2] += (amount/m); 
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	fout<<group[i]<<" "<<money[i]<<"\n";
    }

}