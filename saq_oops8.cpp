// Q.8 , OOPS LAB ( TO BE COMPLETED )
// PROBLEM STATEMENT : WRITE A CLASS TO ADD THE ATTRIBUTES OF DIFFERENT COMPANIES USING BINARY OPERATOR OVERLOADING


#include<iostream>

using namespace std;

class company {
	static int company_num;
	public: int company_number,num_workers;
	         int num_executives;
	         
	         company()
	         {
	         	company_num++;
	         	this->company_number = company_num;
	         	
			 }
	         
	         void get_data()
	         {
	         	printf("Enter the data num_workers for company %d",company_number);
	         	scanf("%d",&this->num_workers);
	         	
	         	
			 }
	         void print_data()
	         {
	         	
	         	printf("The num of workers in company %d is %d",company_number,this->num_workers);
	         	
	         	
			 }
	
	
};
int company::company_num=0;

int main()
{
	
	company c1,c2;
	
	c1.get_data();
	c1.print_data();
	
	
}
