#include<iostream>

using namespace std;
   int main()
   {
       int i,n,grades;
       cin>>n;
       for(int j=0;j<n;j++)
{

    cin>>grades;
if (((40-grades)<3)&&((40-grades)>0))
    grades=40;
if (40-grades>3)
    grades=grades;
else
    {
        for(i=grades;(i%5)!=0;i++);

        if((i-grades)<3)
            grades=i;
        else
            grades=grades;
    }
           cout<<grades<<"\n";
       }
return 0;
   }
