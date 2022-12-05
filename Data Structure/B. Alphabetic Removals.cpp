#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size1, removesize;
    cin >> size1 >> removesize;
    string value; cin >> value;
    int start = 'a';
    int endd = 'z';
    for(int i = start; i <= endd; i++){
        for(int x = 0; x < size1; x++){
           if(removesize == 0){
             break;
           }
            if(value[x] == i){
                value[x] = ' ';
                removesize--;
            }
        }
    }

    for(int t= 0; t < size1; t++){
        if(value[t] != ' '){
            cout << value[t] ;
        }
    }
    return 0;
}
