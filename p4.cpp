#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class obj_cre_des
{
    static int c;
 public:
    obj_cre_des()
       {
           c++;
           cout<<c<<"object create"<<"\n";
       }
    ~obj_cre_des()
       {     
           c--;
           cout<<c<<" object destroy"<<"\n";

       }

};

int obj_cre_des::c=0;
int main()
{ 
    obj_cre_des a1;
    obj_cre_des a2;
    obj_cre_des a3;
    obj_cre_des a4;
    obj_cre_des a5;
    return 0;
}
