#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, small = INT_MAX, second_small = INT_MAX;
	cout<<"Enter no of elements:";
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] < small)
		{
			second_small = small;
			small = a[i];
		}
		else if(a[i] < second_small && a[i] != small)
			second_small = a[i];
	}

	cout<<"Smallest:"<<small<<"\n";
	cout<<"Second Smallest:"<<second_small;
}
