#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
string value;
int main()
{
    cin >> n;
    cin >> value;
    set<char> letters;
    //int c = 0;
    for(int i = 0; i < n; i++) value[i]= tolower(value[i]);
    for(int i = 0; i < n; i++) letters.insert(value[i]);
    if(letters.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
