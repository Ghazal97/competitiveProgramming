#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;
int y, x, z;
int c, hc;

int main()
{
    cin >> c >> hc;
    ll a[c];
    for(int i = 1; i <= c; i++){
        cin >> a[i];
    }
    int ans =0, flag = 0;
    while(hc --){
        cin >> y >> x >> z;
        a[x] += z;
        a[y] -= z;
    }
    for(int i = 1; i <= c; i++){
        if(a[i] < 0 ){
             cout << "NO" ;return 0;
        }
    }
        cout << "YES" << endl;
        return 0;
}
