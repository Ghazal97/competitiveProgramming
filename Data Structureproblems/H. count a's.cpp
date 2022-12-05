#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int counta(int l, int r, string s){
 int c = 0;
    for(int i = l-1; i <= r-1; i++){
        if(s[i] == 'a') c++;
    }
    return c;
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int l, r, q;
    cin >> s >> q;
    while(q--){
        cin >> l >> r;
        cout << counta(l,r,s);
        cout << endl;
    }
    return 0;
}
