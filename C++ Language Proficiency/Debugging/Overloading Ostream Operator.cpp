
// Enter your code here.
ostream& operator<<(ostream& out,Person& P)
{
 out<<"first_name="<<P.get_first_name()<<","<<"last_name="<<P.get_last_name();
 return out;

}
ostream& operator<<(ostream& out, const Person& p){
    out<<"first_name="<<p.get_first_name()<<",last_name="<<p.get_last_name();
    return out;
}
