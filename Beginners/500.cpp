#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a[1001],l,w,h,n,c,i;
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    scanf("%d %d %d",&l,&w,&h);
    c=(l*h+w*h)*2/16;
    
    if((l*h+w*h)*2%16!=0)
    c=c+1;
    printf("%d\n",c);
    }
    
return 0;
}
