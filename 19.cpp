#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int n;
int l=0,i,j;
char a[15];
gets(a);
n=strlen(a);

for(i=0,j=n-1; i<n,j>=0; i++,j--)
 {
     if(a[i]==a[j])
        l++;
 }
if(n%2==0)
    printf("%d\n",l/2);
else
    printf("%d\n",l/2+1);

return 0;
}
