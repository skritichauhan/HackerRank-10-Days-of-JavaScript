            #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s; 
    set<int>::iterator it;
    int q,x,y;
    cin>>q;
    while(q--)
    {
        cin>>y>>x;
     
    switch(y)
    {
        case 1: s.insert(x);
        break;
        case 2: s.erase(x);
        break;
        case 3: 
                if(s.find(x)==s.end()){
                    cout<<"No\n";
                }
                else
                cout<<"Yes\n";
        break;
    }
    
}
return 0;
}



