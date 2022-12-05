#include <iostream>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
   int n; cin >> n;
   long long a[2 * n];
   set<long long> values;
   for(int i= 0; i < 2 * n; i++){
     cin >> a[i];
     //values.insert(a[i]);
   }
   int ans=0,res=0;

   for(int i=0; i < 2 * n; i++){
     if( values.find(a[i]) == values.end()){
        values.insert(a[i]);
        res++;

     }
     else {
        res --;
        values.erase(a[i]);
     }
     ans = max(res,ans);
   }
   cout << ans << endl;
}







