
/*class invalid_argument
{
string str;
public:
invalid_argument(string s)
{
    str=s;
}
string what()
{
    return str;
}
};*/
void process_input(int n) {
    try{
    int d = largest_proper_divisor(n);
     cout << "result=" << d << endl;
    }
    catch(invalid_argument i)
    {
cout<<i.what()<<endl;
    }
        cout<<"returning control flow to caller\n";
    
   
}

