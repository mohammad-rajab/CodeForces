#include <bits/stdc++.h>
using namespace std;
long long removezero(long long x)
{
    long long res = 0 , factor = 1;
    while (x > 0)
        {
            int digit = x % 10;
            if (digit != 0)
        {
                res += digit * factor;
                factor *= 10;
        }
        x = x / 10;
    }
    return res;
}
void solve()
{
    long long a , b;
    cin >> a >> b;
    long long sum = a + b;
    long long a_without_zeros = removezero(a);
    long long b_without_zeros = removezero(b);
    long long sum_without_zeros = removezero(sum);
    if (a_without_zeros + b_without_zeros == sum_without_zeros)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
}