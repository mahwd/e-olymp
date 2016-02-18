#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
int a[1001],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
if(a[i]%3==1)
puts("VGC");
else
if(a[i]%3==2)
puts("CVG");
else
if(a[i]%3==0)
puts("GCV");
}
  
return 0;

}
