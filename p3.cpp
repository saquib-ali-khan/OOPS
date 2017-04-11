#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class ARITH
{
  public:
    int a,b;
    void init()
       {
            printf("Enter a and b\n");
            scanf("%d %d",&a,&b);
       }
    inline void addition()
       {   printf("Hello I am in addition");
           printf("addition=%d\n",a+b);
       } 
    inline void subtract()
       {   printf("Hello I am in subtract");
           printf("subtract=%d\n",a-b);
       }
    inline void multiply()
       {   printf("Hello I am in multiply");
           printf("multiply=%d\n",a*b);
       }
    inline void division()
       {   printf("Hello I am in division");
           printf("division=%d\n",a/b);
       }
    inline void modulous()
       {   printf("Hello I am in modulous");
           printf("modulous=%d\n",a%b);
       }    
};
int main()
{
    ARITH a1;
    a1.init();
    a1.addition();
    a1.subtract();
    a1.multiply();
    a1.division();
    a1.modulous();      
}




