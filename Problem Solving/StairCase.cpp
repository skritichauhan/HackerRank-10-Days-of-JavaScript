#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    n-=1;
    for(int i=n;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<" ";
        }
        //k=n-i+1;
        for(int k=n-i;k>=0;k--)
            cout<<"#";
        cout<<"\n";
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
