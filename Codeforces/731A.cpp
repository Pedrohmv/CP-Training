#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	string name;
	int passos = 0;
  	cin>>name;
  	char f , l;
  	f = 'a';
  	l = name[0];
  	passos += min((26-abs(f-l)),abs(f-l));
  	for (int i = 0; i < name.length()-1; ++i)
  	{	
  		f = name[i];
  		l = name[i+1];
  		passos += min((26-abs(f-l)),abs(f-l));
  	}
  	cout<<passos;
}
