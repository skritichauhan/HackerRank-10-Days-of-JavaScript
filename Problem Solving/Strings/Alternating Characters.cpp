#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s)
 {
     
     char c=s[0];
     int count=0,x,del=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==c)
            x=1;
        else
            x=-1;
        if((x+count==0) || (x+count==1))
            count=x+count;
        else
            del++;
     }
     return del;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
