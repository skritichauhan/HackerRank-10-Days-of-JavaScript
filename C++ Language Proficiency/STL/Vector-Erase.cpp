#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,pos,a,b;
    std::vector <int> v;
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int data;
        std::cin >> data;
        v.push_back(data);
    } 

    std::cin >> pos;
    v.erase(v.begin()+pos-1);
    std::cin >> a >> b;
    
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    std::cout << v.size() << "\n";
    for(auto i: v)
    {
        cout << i << " ";
    }
    cout << "\n";
    //return 0; Modern compilers don't need a return type.
}
