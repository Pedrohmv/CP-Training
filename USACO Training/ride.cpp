/*
ID: pedromo1
PROG: ride
LANG: C++11                 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string group, comet;
    int g=1, c=1;
    fin>>group>>comet;
    for(int i =0;i<group.length();++i){
    	g *= group[i] - 'A' + 1;
    }
    for(int i =0;i<comet.length();++i){
    	c *= comet[i] - 'A' + 1;
    }

    if(g%47 == c%47)
    	fout<<"GO\n";
    else
    	fout<<"STAY\n";
    return 0;
}