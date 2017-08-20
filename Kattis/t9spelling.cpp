#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#define pb push_back
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();

	string keys[12] = {" ","abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	for(int i=0;i<n;i++){
		string msg;
		getline(cin, msg);
		vector<string> presses;
		int flag = -1;
		for(int j=0;j<(int)msg.length();j++){
			if(msg[j] == ' '){
				if(flag == 0)
					presses.pb(" ");
				presses.pb("0");
				flag = 0;
			}
			else
				for(int w=1;w<12;w++){
					if(keys[w].find(msg[j]) != string::npos){
						if(w == flag)
							presses.pb(" ");
						for(int k=0;k<(int)keys[w].length();k++){
							if(msg[j]!=keys[w][k]){
								string s = to_string(w+1);
								presses.pb(s);
							}
							else{
								flag = w;
								string s = to_string(w+1);
								presses.pb(s);
								w = 12;
								break;
							}
						}
					}
				}
		}
		cout<<"Case #"<<i+1<<": ";
		for (vector<string>::const_iterator i = presses.begin(); i != presses.end(); ++i)
			cout <<*i;
		cout<<"\n";
	}
}
