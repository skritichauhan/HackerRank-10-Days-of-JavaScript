#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    map<string,string>m;
    map<string,string>::iterator it;
    string name,ph,nm;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nm;
        cin>>ph;
        m[nm]=ph;
    }  
    while(cin >> name) {
    if (m.find(name) !=m.end()) {
        cout << name << "=" << m.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
//cout<<m.find("sam ")->second;
return 0;
}
