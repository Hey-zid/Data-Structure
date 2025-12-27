#include<bits/stdc++.h>
using namespace std;

//Global Structure
struct variable
{
    int real;
    float imaginary;
};

void Addition()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 3.5;

    variable2.real = 3;
    variable2.imaginary = 5.5;

    variable3.real = variable1.real + variable2.real;
    variable3.imaginary =variable1.imaginary +variable2.imaginary ;

    cout<<variable3.real<<" "<<variable3.imaginary;

}

void Substruction()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 3.5;

    variable2.real = 3;
    variable2.imaginary = 5.5;

    variable3.real = variable1.real - variable2.real;
    variable3.imaginary =variable1.imaginary - variable2.imaginary ;

    cout<<variable3.real<<" "<<variable3.imaginary;

}


void multiplication()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 3.5;

    variable2.real = 3;
    variable2.imaginary = 5.5;

    variable3.real = variable1.real * variable2.real;
    variable3.imaginary =variable1.imaginary *variable2.imaginary ;

    cout<<variable3.real<<" "<<variable3.imaginary;

}

void division()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 3.5;

    variable2.real = 3;
    variable2.imaginary = 5.5;

    variable3.real = variable1.real / variable2.real;
    variable3.imaginary =variable1.imaginary / variable2.imaginary ;

    cout<<variable3.real<<" "<<variable3.imaginary;

}



int main()
{
    cout<<"Addition : ";
    Addition();
    cout<<endl<<endl;
    cout<<"Substruction : ";
    Substruction();
    cout<<endl<<endl;
    cout<<"multiplication : ";
    multiplication();
    cout<<endl<<endl;
    cout<<"division : ";
    division();
    cout<<endl<<endl;
}


