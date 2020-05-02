#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>vect;
    stringstream ss(str);
    char ch;int temp;
    while (ss>>temp)
    {
        vect.push_back(temp);
        ss>>ch;
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

