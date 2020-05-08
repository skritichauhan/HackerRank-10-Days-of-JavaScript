#include <set>
#include <iostream>
#include<regex>
using namespace std;

int main()
{
    int n;
    cin>>n;
    regex e(".+@gmail\\.com$");
    multiset<string>s;
    for(int i=0;i<n;i++)
    {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if(regex_match(emailID,e))
        {
            s.insert(firstName);
        }
    }
    for(auto &it:s)
        cout<<it<<endl;
    return 0;
}
