#include <bits/stdc++.h>
#include<string.h>
#include<math.h>

using namespace std;
string catAndMouse(int a,int b,int c)
{
    if ((abs(a-c))!=(abs(b-c)))
    {
    if ((abs(a-c))<(abs(b-c)))
       return "Cat A";
        else return "Cat B";
    }
    else return "Mouse C";
}

int main()
{
    int q,x,y,z;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        cout<<catAndMouse(x,y,z)<<"\n";
    }
    return 0;
}
