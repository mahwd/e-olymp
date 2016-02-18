#include <iostream>
#include <cmath>
#include <cstdio>
typedef unsigned long long ull;

double s(double a ,double b, double c, double d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}


using namespace std;
int main()
{
    double a,b,c,x1,y1,x2,y2,z2,r;
    cin>>a>>b>>c>>x1>>y1>>x2>>y2>>z2;
    if (z2==0)
        r=s(x1, y1, x2, y2);
        else
    if (x2==0){
         if (x1+y1<b && y2==b)  r=s(x1, y1, -z2, y2);
         else
                      r=s(x1, y1, -z2, y2);}
     else
    if (x2==a)
        r=s(x1, y1, a+z2, y2);
        else
    if (x2==b)
        r=s(x1, y1, b+z2, y2);
        else
    if (y2==0)
        r=s(x1, y1, x2, -z2);
        else
    if (y2==b && x2!=0)  r=s(x1, y1, x2, b+z2);
    else
    if (y2==a) r=s(x1, y1, x2, a+z2);
    printf("%.2lf\n",r);
return 0;
}
