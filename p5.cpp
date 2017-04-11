#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class POINTER_OBJECT
{
     public:
         int ROLL_CALL_NUM;
         char name[100];
         void set_data()
             {
                  scanf("%d %s",&ROLL_CALL_NUM,&name);
             }  
         void print()
             {
                  printf("%s\n",this->name);
             }       
};


int main()
{
    POINTER_OBJECT a1,a2,a3;
    a1.set_data();
    a2.set_data();
    a3.set_data();
    a1.print();
    a3.print();
    a2.print();
    a3.print();
    
}
