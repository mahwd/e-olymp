#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int s, k , a ,b, n, c;
	cin >> s >> k >> a >> b;
	if(s == a * b)
		cout<< s * k << endl;
	else
	{
		n = 1;
		while(n < 1001)
		{
			if(abs(s * a - b) % n == 0)
			c = (b - s * a) / n + s * k;
			if(c >= 0 && a > n * k)
			{
				cout << c <<endl;
				break;	
			} 
			n ++;
		}
		if(n == 1001)
		cout<<"-1"<<endl;
	}

	return 0;
}
