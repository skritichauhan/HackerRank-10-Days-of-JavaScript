#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n,k,sum=0,charged;
    vector<int> bill;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        bill.push_back(b);
    }
    cin>>charged;
      
    for(int j=0;j<n;j++)
    {
        if (j!=k)
            sum=sum+bill[j];
    }
    (charged==(sum/2))?cout<<"Bon Appetit" :cout<<charged-(sum/2);
    
    
    return 0;
}
