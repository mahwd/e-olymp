#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
   double n,a=0,m,i=0;
   scanf("%lf",&n);
   m=n;
   while(a <= 0.5)
   {
       a=a+1/(n-i);
       i++;
   }

   cout<<n-i+1<<endl;

}
