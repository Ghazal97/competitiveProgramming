#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, l, r, num;
    cin >> n >> q;
    vector<int> v(n);
    string token;
    for(int i = 0; i < n; i++) cin>>v[i];
    while(q--){
        cin >> token;
        if(token == "sort" || token == "reverse")
            cin >> l >> r;
        if (token == "print" || token == "push_back")
            cin >> num;

        //test cases;
        int mi=min(r,l);
        int ma=max(r,l);
        if(token == "sort"){
         sort(v.begin()+mi-1,v.begin()+ma);
       }
       else if(token == "reverse"){
         reverse(v.begin()+mi-1,v.begin()+ma);
       }
       else if(token == "push_back"){
         v.push_back(num);
       }
       else if(token == "print"){
         cout << v[num-1] << endl;
       }
       else if(token  == "back") cout << v.back() << endl;
       else if(token == "front") cout << v.front() << endl;
       else
            v.pop_back();
       //cout << endl;
    }
    return 0;
}
