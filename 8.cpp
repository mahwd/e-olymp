#include <iostream>
#include <cmath>
int cavab(int  n)
{
    int s = sqrt((double)n);
    int k = n - s * s;
    int p = (k == 0) ? 0 : (k - 1)/s + 1;
    return 2*s*(s+1) + p*3 + (k-p)*2;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<cavab(n)<<std::endl;
}
