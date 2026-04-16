#include <bits/stdc++.h>
using namespace std;
int main()
{
 int sum=0,width =0;
int n=0,limt=0;
cin >> n>> limt;
for (int i = 1; i <= n; i++)
{
    int z;
    cin >> z;
    if (z > limt)
    {
        width = 2;
        sum += width;
    }
    else
    {
        width = 1;
        sum += width;
    }
}
cout << sum ;
}
