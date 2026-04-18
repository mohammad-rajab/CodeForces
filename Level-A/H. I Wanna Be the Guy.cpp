#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
 cin >> n;
 set<int>lily;
 int y;
 int q;
 cin >> q;
 int r;
 for (int i = 0; i < q; i++) {
     cin >> y;
     lily.insert(y);
 }
 cin >> r;
 for (int i = 0; i < r; i++) {
     cin >> y;
     lily.insert(y);
 }
 if ((lily.size()) == n) {
     cout << "I become the guy." << endl;
 }
 else
 {
     cout << "Oh, my keyboard!" << endl;
 }
}
