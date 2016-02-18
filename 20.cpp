#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i,say,sum;
 scanf("%d",&n);
 say=0;
 while(n>0)
 {
    i=n;
    sum=0;
    while(i>0)
    {
    sum=sum+i%10;
    i=i/10;
    }
    n=n-sum;
    say=say+1;
    }
        printf("%d\n",say);

return 0;
}
