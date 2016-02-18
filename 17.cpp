#include <stdio.h>
#include <stdlib.h>

long long n, i, a;

int main(int argc, char *argv[])
{
 scanf("%lld", &n);
 
 a=3;
 
 for(i=1; i<=n-1; i++)
 a=a*2;
 
 printf("%lld\n", a);
 

 return 0;
}
