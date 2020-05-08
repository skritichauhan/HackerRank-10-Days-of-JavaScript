#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,item,max=0,count=0;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
    int rem=n%2;
    n=n/2;
    if(rem==1)
    {
        count++;
        if (count>=max)
            max=count;
    }
    else
        count=0; 
    }
    cout<<max;
   

   


    return 0;
}
