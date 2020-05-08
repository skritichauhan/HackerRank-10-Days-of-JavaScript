#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.length();i+=2)
        {
            cout<<s[i];

        }
        cout<<" ";
        for(int i=1;i<s.length();i+=2)
        {
            cout<<s[i];

        }
        cout<<endl;

         
    }  
    return 0;
}
