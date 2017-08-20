#include <iostream>
#include <string>

using namespace std;


int seatUp(char prev){
	return prev == 'U' ? 0 : 2;
}

int seatDown(char prev){
	return prev == 'D' ? 0 : 2;
}

int seatPref(char prev, char now){
	return prev == now? 0 : 1;
}

int main(){
	string uD;
	int up=0, down=0, pref=0;
	
	cin>>uD;
	if(uD[0] == 'U' && uD[1] == 'D'){
		up = 2;
		down = 1;
		pref = 1;
	}
	else if(uD[0] == 'D' && uD[1] == 'U'){
		up = 1;
		down = 2;
		pref = 1;
	}
	else if(uD[0] == uD[1]){
		uD[0] == 'D'? up++ : down++;
	}
	
	for(int i=2;i<(int)uD.length();i++){
		up += seatUp(uD[i]);
		down += seatDown(uD[i]);
		pref += seatPref(uD[i-1],uD[i]);
	}
	cout<<up<<"\n"<<down<<"\n"<<pref;	 

	return 0;
}
