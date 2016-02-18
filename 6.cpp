#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#define MAX 201
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
int n;
int a[20] , b[20];
int used_day[20];
int rec(int index, int day)
{
    int flag = 0,t;
    if(day > n)
    return 0;
    used_day[index] = 1;
    for(int i = 0; i < n; i ++)
    {
        if(!used_day[i] && a[i] - day >= 0){
              t = rec(i , day + 1);
              if(t > flag) flag = t;}
    }
    used_day[index] = 0;
    return flag + b[index] * (a[index] - day);
}
using namespace std;
int main()
{
    int ans = 0;
  cin >> n;
  for(int i = 0; i < n; i ++)
  {
      cin >> a[i] >> b[i];
  }
  for(int i = 0; i < n; i ++)
  {
      ans = max(ans , rec(i , 0));
  }
  cout<<ans<<endl;


}
