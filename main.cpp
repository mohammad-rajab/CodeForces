#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string word;
        cin >> word;
        bool isNumber = true;

        for (char c : word) {
            if (!isdigit(c)) {
                isNumber = false;
                break;
            }
        }
        if (!isNumber) {
            if (word.length() >= 11) {
                char N = word.back();
                cout << word[0];
                cout << (word.length() - 2);
                cout << N << endl;
            }
            else {
                cout << word << endl;
            }
        }
    }
}
