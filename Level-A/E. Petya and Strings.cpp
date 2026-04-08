#include <bits/stdc++.h>
using namespace std;
int main()
{
   string one;
   cin>>one;

   string two;
   cin>>two;

   int n;
   n=one.length();
   for(int i=0; i<n ;i++){

   if(isupper(one[i])){
    one[i]=tolower(one[i]);
}
   if (isupper(two[i])){
    two[i]=tolower(two[i]);
}
   }
    if(one==two){
        cout<<"0"<<endl;
    }
    else if(one>two){
        cout<<"1"<<endl;
        }
    else if(one<two){
        cout<<"-1"<<endl;
    }

}
