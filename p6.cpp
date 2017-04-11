#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class c_polygon
{ 

    public: 
        int x,y;
        void set_data(int m,int n)
           {
               x=m;
               y=n;
           }
        virtual int area()
          {
               return 1;
          }
          
};
class c_rectangle:public c_polygon
{
    public:
       int area()
          {
              return x*y;
          }
}; 
class c_triangle:public c_polygon
{    
     public:
        int area()
            {
                return x*y*(0.5);
            }
};


int main()
{ 
   c_rectangle r1;
   r1.set_data(2,5);
   cout<<"The RECTANGLE area="<<r1.area()<<"\n";
   c_triangle t1;
   t1.set_data(2,5);
   cout<<"The TRIANGLE area="<<t1.area()<<"\n";
   return 0;
}




