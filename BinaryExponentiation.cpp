#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll pow(ll x, ll a)
{
	if(a == 0)
		return 1;
	if(a == 1)
		return x;
	if(a%2 == 0)
		return pow(x*x, a/2);
	else
		return x*pow(x*x, a/2);
}

int main()
{
	ll x, a, ans;
	cin>>x>>a;
	ans = pow(x, a);
	cout<<ans;
}
