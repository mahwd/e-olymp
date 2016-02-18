#include <stdio.h>

int main(int argc, char *argv[])
{
 int n;

 scanf("%d", &n); 
 if(n>=1 && n<=3)
puts("Initial");
else
if(n>=4 && n<=6)
puts("Average");
else
if(n>=7 && n<=9)
puts("Sufficient");
else
if(n>=10 && n<=12)
puts("High");
     
 return 0;
}
