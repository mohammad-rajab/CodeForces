#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int n;
    n=name.length();
    sort(name.begin(), name.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (name[i] != name[i-1]) {
            count++;
        }
    }
        if(count%2==0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }
}
