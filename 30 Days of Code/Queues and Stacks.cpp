#include <iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;
//Write your code here
class Solution {
    stack<int>st;
    queue<int>q;
    public:
        void pushCharacter(char a )
        {
            st.push(a);
        }
        char popCharacter()
        {
            char item= st.top();
            st.pop();
            return item;
        }
        void enqueueCharacter( char a)
        {
            q.push(a);
        }
        char dequeueCharacter()
        {
           char item= q.front();
           q.pop();
           return item;
        }
};

