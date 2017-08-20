/*
ID: pedromo1
PROG: friday
LANG: C++11                 
*/
#include <iostream>
#include <fstream>
#include <string>
#define debug(x) cout << #x "=" << (x) << "\n"

using namespace std;

int dayOf13th(int index){
	return (index+12)%7;
}

bool isLeapYear(int year){
	return ((year%4==0 && year%100!=0) || (year%400==0)) ? true : false;
}

int main() {
	ofstream fout ("friday.out");
    ifstream fin ("friday.in");

    int years, startY = 1900, month = 1, indexD = 2;
    int daysW[7] = {0,0,0,0,0,0,0};
    fin>>years;

   	while(startY<1900+years){
   		daysW[dayOf13th(indexD)]++;
   		if(isLeapYear(startY) && month == 2){
   			indexD = (indexD+1)%7;
   		}else if(month == 4 || month == 6 || month == 9 || month == 11)
   			indexD = (indexD+2)%7;
   		else if(month == 1 || month == 3|| month == 5 || month == 7 
   						|| month == 8 || month == 10 || month == 12)
   			indexD = (indexD+3)%7;
   		if(month == 12){
   			month = 1;
   			startY++;
   		}
   		else
   			month++;
   	}

   	fout<<daysW[0]<<" "<<daysW[1]<<" "<<daysW[2]<<" "<<daysW[3]
   		<<" "<<daysW[4]<<" "<<daysW[5]<<" "<<daysW[6]<<"\n";
   	return 0;
}