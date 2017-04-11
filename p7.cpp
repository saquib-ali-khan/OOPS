#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Bank
{


       static int c;
   public:
        Bank operator++(int)
           {
               c++;
           }
        Bank operator--(int)
           {
               c--;
           }
           
           
        int customer()
           {
               return c;
           }
  
};


int Bank::c=0;
int main()
{
    Bank B;
    B++;
    B++;
    cout<<"no of customer present in the bank="<<B.customer()<<"\n";
    B--;
    B--;
    cout<<"no of customer present in the bank="<<B.customer()<<"\n";
    return 0;
}



