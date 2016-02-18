#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std; 
int main(int argc, char *argv[])
{
    char a[500];
    cin>>a;
    int n,i;
    n=strlen(a);
    int l=0;
    for(i=1; i<n; i++)
    {
        if(a[i]=='-' || a[i]=='*' || a[i]=='+')
        l++;
        
        }
    cout<<l<<"\n";
        
    cin.get();
    return EXIT_SUCCESS;
}
