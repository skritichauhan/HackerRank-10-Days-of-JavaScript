#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        int max=0,ans;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {   
                ans=i&j;
                if(ans>max && ans<k)
                    max=ans;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
