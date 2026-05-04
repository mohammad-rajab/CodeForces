#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count1 = 0;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string y;
        cin >> y;
            if (y == "X--")
            {
                count1--;
            }
            else if (y == "--X")
            {
                --count1;
            }
            else if (y == "X++")
            {
                count1++;
            }
            else if (y == "++X")
            {
                ++count1;
            }
    }
    cout << count1;
}
