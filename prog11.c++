#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student_detail{

  char name[10];
  int mark1,mark2,mark3;
  friend class av_class;
 public:
         
void get_data()
{
cout<<"Enter the name of student\n";
gets(name);
cout<<"\nEnter the mark1 , mark 2 , mark 3\n";
cin>>mark1>>mark2>>mark3;
}

void display()
{
cout<<"The name of the student is "<<name;
cout<<"/nThe marks are :"<<mark1<<","<<mark2<<","<<mark3;

}

};

class av_class{

public:

void mark_average(student_detail student){

cout<<"The student name is :"<<student.name<<"\n";
cout<<"The av. marks of this student is "<<(student.mark1 + student.mark2 + student.mark3)/3;

}

};

int main()
{

student_detail student1;
av_class obj1;
student1.get_data();
obj1.mark_average(student1);



}
