#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,num_swap=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                {swap(a[j],a[j+1]);
                num_swap++;
                }
        }
    }
    cout<<"Array is sorted in "<<num_swap<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
    // Write Your Code Here
    return 0;
}

