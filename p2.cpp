#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class REV
{ 
    public:
          int a;
          void init()
             {
                printf("Please Enter a number to reverse\n");
                scanf("%d",&a);
             }
          void REV1()
             {
                    int num,rev=0;
                    num=a;
                    while (num > 0)
                       {
                           int remainder = num % 10;
                           rev = rev * 10 + remainder;
                           num /= 10;
                       }  
                    printf("%d\n",rev);    
             }
          int REV2()
             {
                    int num,rev=0;
                    num=a;
                    while (num > 0)
                       {
                           int remainder = num % 10;
                           rev = rev * 10 + remainder;
                           num /= 10;
                       }  
                    return rev;
             }
            
};



int main()
{
    int a;
    REV r;
    r.init();
    r.REV1();
    a=r.REV2();
    printf("%d\n",a);
    return 0;
}
