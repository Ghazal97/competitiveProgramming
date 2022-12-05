#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x1, x2, x3, x4;
ll a[4];
map<int,string> values;
int main()
{
    int t; cin >> t;
    while(t--){
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        values[a[0]] = "Hussien";
        values[a[1]] = "Atef";
        values[a[2]] = "Karemo";
        values[a[3]] = "Ezzat";
        sort(a,a+4);
        cout << values[a[3]] << " " << values[a[2]]<< endl;
    }
    return 0;
}
