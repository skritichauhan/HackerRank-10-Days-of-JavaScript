#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q,t,y;
    map<string,int>m;
    map<string,int>::iterator it;
    string x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>q;
    while(q--)  
    {
        cin>>t;
        switch (t)
        {
            case 1:cin>>x>>y;
                    m[x]+=y;
            break;
            case 2:cin>>x;m.erase(x);
            break;
            case 3:cin>>x;
                it=m.find(x);
                if (m.find(x)==m.end())
                    cout<<0<<endl;
                else
                    cout<<it->second<<endl;
            break;
        }
    }
    return 0;
}



