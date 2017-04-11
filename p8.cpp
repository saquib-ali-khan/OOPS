#include<iostream>
using namespace std;
class company
{
       int a;
    public:
       void setter_data(int b)
          {
              a=b;
          }
       void operator+(company b)
          {
              a=a+b.a;
          }
       void operator-(company b)
          {
              a= a-b.a;
          }
       int get_data()
         {
            return a;
         }
};

int main()
{
   company c1;
   c1.setter_data(10);
   company c2;
   c2.setter_data(15);
   cout<<c1.get_data()<<"\n";
   cout<<c2.get_data()<<"\n";
   c1+c2;
   cout<<c1.get_data()<<"\n";
   c1-c2;
   cout<<c1.get_data()<<"\n";
   return 0;  
}




