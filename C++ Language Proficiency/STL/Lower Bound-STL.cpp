#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,y,temp;
    vector<int>v;
    vector<int>::iterator lower;
    cin>>n;
    for (int i=0;i<n;i++)
        {cin>>temp;
        v.push_back(temp);}
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>y;
                   lower=lower_bound(v.begin(),v.end(),y); 
                   cout << (*lower==y?"Yes ":"No ") << lower-v.begin()+1<<endl;
                   
                }
        
    
    return 0;
}
