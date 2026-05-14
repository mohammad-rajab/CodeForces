#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
void solve()
{
    long long y, b;
    cin >> y;
    int a;
    a = 0;
    for (int i = 0; i < y; i++)
    {
        long long n;
        long long x;
        cin >> n;
        vector<long long> vec1(n);
        cin >> x;
        for (int j = 0; j < n; j++)
        {
            cin >> vec1[j];
        }
        int max1 = vec1[0];
        for (int z = 1; z < n; z++)
        {
            a = (vec1[z] - vec1[z - 1]);
            max1 = max({max1, a});
        }
        int lastmax = ((x - vec1[n - 1]) + (x - vec1[n - 1]));
        b = max({lastmax, max1});
        cout << b << endl;
        vec1.clear();
    }
}
int main()
{
    solve();
}