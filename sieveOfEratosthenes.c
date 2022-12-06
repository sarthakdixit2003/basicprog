#include <bits/stdc++.h>
#define n 10001
using namespace std;

int main() {
	int prime[n];
	prime[1] = 0;
	for(int i = 2; i < n; i++)
		prime[i] = 1;
	int i = 2;
	while(i < n)
	{
		if(prime[i] == 1)
		{	
			int j = i+i; 
			while(j < n)
			{
				prime[j] = 0;
				j += i;
			}
		}
		i++;
	}
	for(int i = 1; i < n; i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}
	return 0;
}
