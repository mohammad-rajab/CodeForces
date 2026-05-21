#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
void solve()
{
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        bool a = true;
        vector<long long> vec1(n);
        for (long long j = 0; j < n; j++)
        {
            cin >> vec1[j];
        }
        for (long long z = 0; z < n; z++)
        {
            if (vec1[z] == vec1[z + 1])
            {
                cout << "NO" << endl;
                a = false;
                break;
            }
        }
        for (long long d = 0; d < n; d++)
        {
            for (long long l = 1; l < n - 1; l++)
            {
                if (vec1[l - 1] < vec1[l] && vec1[l] > vec1[l + 1])
                {
                    swap(vec1[l], vec1[l + 1]);
                }
            }
        }
        if (is_sorted(vec1.begin(), vec1.end()) && a)
        {
            cout << "YES" << endl;
        }
        else if (a)
        {
            cout << "NO" << endl;
        }
        vec1.clear();
    }
}
int main()
{
    solve();
}