
/*Write the class AddElements here*/
template<class T>
class AddElements
{
    T arg;
    public:
    AddElements(T el)
    {
        arg=el;
    }
    T add(T arg1)
    {
        return arg1+arg;
    }
};
template<>
class AddElements<string>  {
string element;
public:
AddElements (string arg) {element=arg;}
string concatenate (string s1)
{
return element+s1;
}
};
