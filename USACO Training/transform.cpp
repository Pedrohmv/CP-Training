/*
ID: pedromo1
PROG: transform
LANG: C++11                 
*/

#include <cstdio>
#include <iostream>
#include <cstring>
#define debug(x) cout << #x << " = " << x << "\n"
using namespace std;

int n;
char pattern[11][11], after[11][11];

bool option1(){
	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(pattern[i][j]!=after[j][n-i+1])
				return false;
	return true;
}

bool option2(){
	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(pattern[i][j]!=after[n+1-i][n-j+1])
				return false;
	return true;
}

bool option3(){
	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(pattern[i][j]==after[n+1-j][i])
				return false;
	return true;
}

bool option4(){
	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(pattern[i][j]!=after[i][n+1-j])
				return false;
	return true;
}

bool option5(){
	char temp[11][11];

	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			temp[i][j]=pattern[i][j];

	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			pattern[i][n+1-j]=temp[i][j];

	return (option1() || option2() || option3());
}

bool option6(){
	for(int i =1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(pattern[i][j]!=after[i][j])
				return false;
	return true;
}

int main(){
	FILE *fin, *fout;
	fin = fopen("transform.in", "r");
    fout = fopen("transform.out", "w");

	int transf;
	fscanf(fin, "%d",&n);
	for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==1)
				fscanf(fin, " %c",&pattern[i][j]);
			else
				fscanf(fin, "%c",&pattern[i][j]);
		}	
	}

	for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==1)
				fscanf(fin, " %c",&after[i][j]);
			else
				fscanf(fin, "%c",&after[i][j]);
		}
	}


	/*for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			fprintf(fout,"%c", pattern[i][j]);
			if(j%2==1 &&= j!=1)
	=			fprintf(fout,"\n");
		}
	}
	fprintf(fout, "\n\n");
	for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			fprintf(fout,"%c", after[i][j]);
			if(j%2==1 &&= j!=1)
	=			fprintf(fout,"\n");
		}
	}

	fprintf(fout, "\n\n");*/

	if(option1()) transf = 1;
	else if(option2()) transf = 2;
	else if(option3()) transf = 3;
	else if(option4()) transf = 4;
	else if(option5()) transf = 5;
	else if(option6()) transf = 6;
	else transf = 7;

	fprintf(fout, "%d\n", transf);
	return 0;
}