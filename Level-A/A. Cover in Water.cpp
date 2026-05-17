#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
void solve()
{
    int x;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int count1 = 0;
        bool a = false;
        string s;
        int n;
        cin >> n;
        cin >> s;
        for (int z = 0; z < n; z++)
        {
            if (s[z] == '#')
            {
                continue;
            }
            else if (s[z] == '.' && s[z + 1] == '.' && s[z + 2] == '.')
            {
                a = true;
                break;
            }

            else if (s[z] == '.')
            {
                count1++;
            }
        }
        if (a)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count1 << endl;
        }
    }
}
int main()
{
    solve();
}