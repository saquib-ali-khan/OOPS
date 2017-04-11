#include<iostream>

using namespace std;

class friendfunc2 ;

class friendfunc1 {

int n1,n2;

public:

 friendfunc1(){
     
    cin>>n1>>n2;
 
   }

friend void average( friendfunc1  ,friendfunc2 );

};


class friendfunc2{

int n3,n4,n5; 

public:

 friendfunc2(){
 
   cin>>n3>>n4>>n5; 
 
   }

friend void average( friendfunc1 , friendfunc2 );

};


void average( friendfunc1 func1 , friendfunc2 func2 ){

int av;
av = func1.n1 + func1.n2 + func2.n3 + func2.n4 + func2.n5 ;
av /=5;

cout<<"The av. of the numbers passed to class objects is "<<av;

}

int main(){

int out;
friendfunc1 func1;
friendfunc2 func2;

average(func1,func2);


}

