#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class VOW
{ 
    public:
          char a[100];
          void init()
             {
                 gets(a);
             }
          void print()
             {
                  
                    char *ptr;
                    int  count;

                    ptr=a;
                     
                    while(*ptr!='\0')
                    {
                        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i'||*ptr=='o'||*ptr=='u')
                            count++;
   
                        ptr++;
                    }
                     
                    printf("Number of Vowels present: %d\n",count);        
             }
            
};
int main()
{
    VOW v;
    v.init();
    v.print();
    return 0;
}
