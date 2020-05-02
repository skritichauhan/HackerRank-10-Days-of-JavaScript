

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator+(Complex &x,Complex &y)
{
    Complex C;
C.a=x.a+y.a;
C.b=x.b+y.b;
return C;
}
ostream& operator<<(ostream &cout ,Complex &c)
{
return cout<<c.a<<"+i"<<c.b;
}
