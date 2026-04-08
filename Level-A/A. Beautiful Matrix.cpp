#include <bits/stdc++.h>
using namespace std;

int main() {
 int arr[5][5];
 int rowpos, colpos;
for(int i =0;i<5;i++){
    for(int j =0;j<5;j++){
        cin>>arr[i][j];
        if (arr[i][j] == 1) {
                rowpos = i;
                colpos = j;
    }
}

}
  int moves_count= abs(rowpos-2)+abs(colpos-2);
  cout<<moves_count<<endl;
}
