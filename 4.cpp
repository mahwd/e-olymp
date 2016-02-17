#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    double x1, y1, r1, x2, y2, r2, d ,a;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    a=fabs(r1-r2);
    if(d>r1+r2 || d<a)
        cout<<"0"<<endl;
    else if(d==0 && r1==r2)
        cout<<"-1"<<endl;
    else if(d==r1+r2 || d==a)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;
    return 0;
}
