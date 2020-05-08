#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int da,ma,ya,de,me,ye,fine;
    cin>>da>>ma>>ya;
    cin>>de>>me>>ye;
    if(ya>ye)
        fine=10000;
    else if (ma>me && ya==ye)
        fine=500*(ma-me);
    else if(da>de && ma==me)
     {
         fine=15*(da-de);
    }
    else
        fine=0;
    cout<<fine;
    return 0;
}
