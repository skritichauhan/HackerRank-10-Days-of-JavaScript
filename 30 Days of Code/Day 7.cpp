#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,data;
vector<int>arr;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>data;
    arr.push_back(data);
}
for(int i=arr.size()-1;i>-1;i--)
    cout<<arr[i]<<" ";
return 0;

}
