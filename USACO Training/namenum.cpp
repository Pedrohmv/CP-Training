/*
ID: pedromo1
PROG: namenum
LANG: C++11                 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream cin ("namenum.in");
	ifstream cin2("dict.txt");
	ofstream cout("namenum.out");

	bool flag = false;
	string serial, input, result;
	cin>>serial;

	while(cin2>>input){
		if(input.length() == serial.length()){
			result = "";
			for(auto it : input){
				if(it == 'A' || it == 'B' || it == 'C') result += "2";
				else if(it == 'D' || it == 'E' || it == 'F') result += "3";
				else if(it == 'G' || it == 'H' || it == 'I') result += "4";
				else if(it == 'J' || it == 'K' || it == 'L') result += "5";
				else if(it == 'M' || it == 'N' || it == 'O') result += "6";
				else if(it == 'P' || it == 'R' || it == 'S') result += "7";
				else if(it == 'T' || it == 'U' || it == 'V') result += "8";
				else if(it == 'W' || it == 'X' || it == 'Z') result += "9";
			}
			if(result == serial) flag = true , cout<<input<<"\n";
		}
	}

	if(!flag) cout<<"NONE\n";

	return 0;
}