#include <iostream>
#include <cmath>
#include <cstdio>
typedef unsigned long long ull;


using namespace std;
int main()
{
	ull x,dig,a,b,c;
	cin>>a>>b>>c;
	
	x = a / b;
	cout<<x;
	for(int i = 0; i < c+1 ; i ++)
	{
	if(i == 0)
	cout<<".";
	else
	{
	a=(a-b*x)*10;
       x= a / b;
   cout<<x;
   }
	}
	cout<<endl;
	 
return 0;
}
