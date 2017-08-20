/*
ID: pedromo1
PROG: beads
LANG: C++11                 
*/

#include <string>
#include <fstream>
#include <iostream>
#define debug(x) cout << #x "=" << (x) << "\n"
using namespace std;

int maxBeads(int index, string beads){
	int count=2;
	bool f = true, b = true;
	int len = beads.length();
	int bIndex = index+len;
	beads += beads;
	index++;
	while(true){
		if(beads[index]==beads[index+1] || beads[index+1]=='w' || beads[index] == 'w'){
			count++;
			if(beads[index+1]!=beads[index]){
				if(beads[index]=='w')
					beads[index] = beads[index+1];
				else
					beads[index+1] = beads[index];
			}
		}
		else
			f = false;
		if(f)
			index++;
		if((bIndex - index == 1))
			break;
		if(beads[bIndex]==beads[bIndex-1] || beads[bIndex-1]=='w' || beads[bIndex] == 'w'){
			count++;
			if(beads[bIndex]!=beads[bIndex-1]){
				if(beads[bIndex-1]=='w')
					beads[bIndex-1] = beads[bIndex];
				else
					beads[bIndex] = beads[bIndex-1];
			}
		}
		else
			b = false;
		if(b)
			bIndex--;
		if(!(f || b))
			break;
		if((bIndex - index == 1))
			break;
	}
	return count;
}

int main(){
	ofstream fout ("beads.out");
    ifstream fin ("beads.in");

    int n;
    fin>>n;
	string beads;
	fin>>beads;

	int max =0, curr=0;
	for(unsigned int i=0; i < beads.length(); i++){
		curr = maxBeads(i, beads);
		if(curr > max){
			max = curr;
			n = i;
		}
	}

	fout<<max<<"\n";
	return 0;
}