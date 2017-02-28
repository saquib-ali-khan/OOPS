// LAB Q.7 operator overloading(unary operator)

// NOTE :  FOR OPERATOR OVERLOADING OF UNARY ++ WE HAVE TO DECLARE TWO DIFFERENT OVERLOADING FUNCTIONS IN THE CLASS DEFINITION.
// ONE FOR THE PREFIX AND OTHER FOR THE POSTFIX


#include<iostream>

using namespace std;

class bank{
 static int bank_num;
private:
	  
	   
public:
	    int num_person,bank_number;
         
	   bank(){
	   	 num_person=0;
	   	 bank_num++;
	   	 this->bank_number=bank_num;
	   	 
	   }
	   
	    void print_num_person()
	   {printf("The no. of persons inside the bank = %d",num_person);
			  }	 
	   void operator ++ (){
	   	num_person+=1;
	   }
	   void operator ++(int){     
	   	num_person+=1;
	   	
	   }
	   
	   void operator -- (){
	   	num_person-=1;
	   }
	   void operator --(int){
	   	num_person-=1;
	   }
	   
	   

};
int bank::bank_num=0;

int main()
{

bank b1,b2,b3;

b1.print_num_person();
++b1;
b1.print_num_person();

--b1;
b1.print_num_person();

++b1;
b1.print_num_person();
--b1;
b1.print_num_person();

++b2;
b2.print_num_person();

b1++;
b1.print_num_person();



	
	
	
	
}
