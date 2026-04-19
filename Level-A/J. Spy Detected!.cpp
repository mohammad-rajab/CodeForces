#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++)
        {
                cin >> a[i];
        }
            int com;
            if (a[0] == a[1])
            {
                    com = a[0];
            }
            else if (a[0] == a[2])
            {
                     com = a[0];
            }
            else
            {
                com = a[1];
            }
            for (int i = 0; i < n; i++)
        {
            if (a[i] != com)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
