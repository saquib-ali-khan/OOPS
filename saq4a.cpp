
//program to print the no. of objects currently alive in different scopes.

#include<iostream>
using namespace std;

 //num_created;
 //int num_destroyed; 

class C 
{ 
    
  public:  static int num_created;
          static int num_destroyed;
		   
    C(){
    	++num_created;
    	
	}
    ~C(){
    	--num_created;
	}
	void show()
	{
		cout<<"The no. of objects created :"<<num_created<<endl;
		//cout<<"The no. of objects destroyed:"<<num_destroyed<<endl;
	}
		
};
int C::num_created=0;
int C::num_destroyed=0;
void showw()
{
C C1;	
C1.show();	
	
}
  
int main()
{
	C o1;
   	
	o1.show();
	{
		
		C o2,o3;
		o2.show();
		
	}
	o1.show();
	C o4,o5;
	o4.show();
	showw();
	
	return 0;
	
}

