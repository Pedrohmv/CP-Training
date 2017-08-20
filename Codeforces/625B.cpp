#include <string>
#include <iostream>
using namespace std;

int main(){
	string go, pin;
	cin>>go>>pin;
	int replace = 0;
	for (int i = 0, j=0; i < go.length(); ++i)
	{
		if(go[i]!=pin[j])
			continue;
		int k = i;
		while(j < pin.length() && go[k] == pin[j]){
			k++;
			j++;
		}
		if(j==pin.length()){
			replace++;
			i = k - 1;
		}
		j = 0;
	}

	cout<<replace;
	return 0;
}