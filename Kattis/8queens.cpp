#include <string>
#include <vector>
#include <iostream>
#define pb push_back
using namespace std;

struct point{
	int x, y;
};

bool conflict(point a, point b){
	if(a.x == b.x || a.y == b.y || (a.x+a.y)==(b.x+b.y) || (a.x - a.y)==(b.x - b.y))
		return true;
	return false;
}

int main(){
	vector<point> vp;
	for(int i =0; i<8;i++){
		string s;
		cin>>s;
		for(int j=0; j < (int)s.length();j++){
			if(s.substr(j,1)== "*"){
				point temp;
				temp.x = i;
				temp.y = j;
				vp.pb(temp);
			}
		}
	}
	
	bool flag = false;
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i!=j){
				if(conflict(vp[i],vp[j]))
					flag = true;
			}
		}
	}
	
	if(flag)
		cout<<"invalid";
	else
		cout<<"valid";
	
	return 0;
}
