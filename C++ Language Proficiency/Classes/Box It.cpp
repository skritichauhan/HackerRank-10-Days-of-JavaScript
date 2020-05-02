
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box
{
    int l,b,h;
    public:
    Box()
    {
        l=b=h=0;
    }
    Box(int length,int breadth,int height)
    {
        l=length;
        b=breadth;
        h=height;
    }
    Box(Box &B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long vol=l;
        vol*=b;
        vol*=h;
        return vol;
    }
    friend bool operator<(Box& A,Box& B)
    {
if ((A.l<B.l)||(A.l==B.l && A.b<B.b)||(A.l==B.l && A.b==B.b && A.h<B.h))
            return true;
            else 
            return false;
    }
friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;

}
};
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

