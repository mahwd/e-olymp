#include <iostream>
#include <cmath>
typedef unsigned long long ull;
ull p;
ull quv(ull n, ull k)
{
    p = 1;
    for(int i = 0; i < k ; i ++)
    {
        p = p * n;
    }
    return p;
}

using namespace std;
int main()
{
    unsigned long long n, k=1, i=0,r,r1;
    cin>>n;
    for(; k<n ; ++i)
    {
        k=quv(i+1,3);
    }
    if(!i)i++;

    if ( (i-1)*(i-1)*(i-1) < n && n<= (i-1)*(i-1)*i )
    {
        r=3*(i-1)*quv(i,2);                                       // 3n(n+1)^2
        n-=quv(i-1,3);
    }
    else if ( (i-1)*(i-1)*i < n && n<= (i-1)*i*i )
    {
        r= 3*quv(i-1,3) + 9*quv(i-1,2) + 7*(i-1) + 1; // 3n^3 + 9n^2 + 7n + 1
        n-=quv(i-1,2)*i;
    }
    else if ( (i-1)*i*i < n && n<= i*i*i )
    {
        r= 3*(quv(i,3) + quv(i,2))-i-1;             // 3n^3 + 3n^2 -n-1
        n-=quv(i,2)*(i-1);
    }
    else
    {
        cout << i << "???";
        return 0;
    }
    for( int i1=1 ; n ; i1+=2  )
    {
        for( int i2=0 ; i2<i1 && n ; i2++,n-- )
        {
            if( i1 == 1 )
            {
                r+=8;
            }
            else if( i2 == 0 || i2 == i1/2 )
            {
                r+=5;
            }
            else
            {
                r+=3;
            }
        }

    }
    cout << r << endl;


    return 0;
}
