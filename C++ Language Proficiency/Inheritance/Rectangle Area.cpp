
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle 
{
    public:
    int width,height;
    void display()
    {
        cout<<width<<" "<<height<<'\n';
    }
};
class RectangleArea:public Rectangle
{
    public:
void read_input()
{
    cin>>width>>height;
}
void display()
{
    cout<<width*height;
}
};
