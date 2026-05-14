#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, n, k;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        vector<int> vec1;
        cin >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> b;
            vec1.push_back(b);
        }
        if (k > 1)
        {
            cout << "YES" << endl;
        }
        else if (vec1.size() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k == 1 && vec1[0] == vec1[1] && vec1[1] == vec1[2])
            {
                cout << "YES" << endl;
            }
            else if (is_sorted(vec1.begin(), vec1.end()))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}