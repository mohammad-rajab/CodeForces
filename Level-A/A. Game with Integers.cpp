#include <iostream>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else if (n % 3 == 1)
        {
            cout << "First" << endl;
        }
        else if (n % 3 == 2)
        {
            cout << "First" << endl;
        }
    }
}
int main()
{
    solve();
}