
class Matrix
{
    public:
vector<vector <int> >a;
 Matrix& operator+ (Matrix& m1)
{   Matrix res;
//result.a = vector<vector<int>>(param.a.size());
    for(int i=0;i<a.size();i++)
    {   
        for(int j=0;j<a[0].size();j++)
            {
                this->a[i][j]=(m1.a[i][j]+this->a[i][j]);
            }
            
    }
    return *this;
}
};
