#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cts[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>cts[i];
	}

	cout<<cts[1]-cts[0]<<" "<<cts[n-1]-cts[0]<<"\n";
	for (int i = 1; i < n-1; ++i)
	{
		cout<<min(cts[i]-cts[i-1],cts[i+1]-cts[i])<<" "<<max(cts[n-1]-cts[i],cts[i]-cts[0])<<"\n";
	}
	cout<<cts[n-1]-cts[n-2]<<" "<<cts[n-1]-cts[0]<<"\n";

}