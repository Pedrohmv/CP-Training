#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int format;
	string hour;
	cin>>format>>hour;
	if(format==24){
		int h = stoi(hour.substr(0,2));
		int m = stoi(hour.substr(3,2));
		string res;
		if(h>23){
			if(h%10==0){
				res.push_back('1');
				res.push_back('0');
			}else{
				h = h%10;
				res.push_back('0');
				res.push_back(char(h+48));
			}
		}else{
			res.push_back(hour[0]);
			res.push_back(hour[1]);
		}
		res.push_back(':');
		if(m>59){
			if(m%10==0){
				res.push_back('1');
				res.push_back('0');
			}else{
				m = m%10;
				res.push_back('0');
				res.push_back(char(m+48));
			}
		}else{
			res.push_back(hour[3]);
			res.push_back(hour[4]);
		}
		cout<<res;
	}else{
		int h = stoi(hour.substr(0,2));
		int m = stoi(hour.substr(3,2));
		string res;
		if(h>12){
			if(h%10==0){
				res.push_back('1');
				res.push_back('0');
			}else{
				h = h%10;
				res.push_back('0');
				res.push_back(char(h+48));
			}}
		else if(h==0){
			res.push_back('0');
			res.push_back(char(49));
		}
		else{
			res.push_back(hour[0]);
			res.push_back(hour[1]);
		}
		res.push_back(':');
		if(m>59){
			if(m%10==0){
				res.push_back('1');
				res.push_back('0');
			}else{
				m = m%10;
				res.push_back('0');
				res.push_back(char(m+48));
			}
		}else{
			res.push_back(hour[3]);
			res.push_back(hour[4]);
		}
		cout<<res;
	}
}