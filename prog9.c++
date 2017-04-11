#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Matrix{

public:

 int arr[2][2];
 int i,j;

void get_data(){
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
cin>>arr[i][j];
}
}

void display(){
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
cout<<arr[i][j];
cout<<"\n";
}
}

Matrix operator+ ( Matrix A)
{
Matrix C;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
C.arr[i][j] = this->arr[i][j] + A.arr[i][j];

return C;
}

};

int main()
{
cout<<"Enter first matrix";
Matrix A;
A.get_data();
cout<<"Enter the second matrix";
Matrix B;
B.get_data();
Matrix C;
C = A+B;

cout<<"The sum matrix of input matrices is :";
C.display();


}
