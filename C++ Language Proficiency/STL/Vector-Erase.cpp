#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,pos,a,b;
    vector <int> v;
    cin >> n;
    int data;
    for(int i = 0; i < n; ++i)
    {
        cin >> data;
        v.push_back(data);
    } 

    cin >> pos;
    v.erase(v.begin()+pos-1);
    cin >> a;
    cin >> b;
    
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout<<v.size()<<endl;
    for(int i: v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
