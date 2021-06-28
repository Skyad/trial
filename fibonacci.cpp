#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a=0,b=1,c;
	cin>>n;
	int x;
	
	for(int i=0;i<=n;i++)
	{
		cout<<a<<" ";
		c = a+b;
		a=b;
		b=c;			
	}
	
}
