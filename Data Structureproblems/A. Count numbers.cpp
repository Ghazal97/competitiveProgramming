#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arrfreq[1000002]= {0};
    int n, q, num1, num2;
    cin >> n >> q;
    while (q--){
         cin>> num1 >> num2;
         if(num1 == 1){
            arrfreq[num2] = ++arrfreq[num2];
         } else {
            cout << arrfreq[num2] << endl;
         }
    }
}
