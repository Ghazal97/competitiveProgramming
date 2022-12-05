#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string value; cin >> value;
    int len = value.size();
    sort( value.begin(), value.end() );
    for(int i = 0; i < len; i++){
        if(value[i] != value[i+1])
            cout << value[i] << " " << count(value.begin(), value.end(),value[i]) << endl;
    }
    return 0;

}
