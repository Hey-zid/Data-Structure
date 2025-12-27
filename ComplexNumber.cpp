#include<bits/stdc++.h>
using namespace std;

//Global Structure
struct variable
{
    float real;
    float imaginary;
};

void Addition()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 6;

    variable2.real = 7;
    variable2.imaginary = 5;

    variable3.real = variable1.real + variable2.real;
    variable3.imaginary =variable1.imaginary +variable2.imaginary ;

    cout<<variable3.real<<" + "<<variable3.imaginary<<"i";

}

void Substruction()
{
    struct variable variable1,variable2,variable3;

    variable1.real = 5;
    variable1.imaginary = 6;

    variable2.real = 7;
    variable2.imaginary = 5;

    variable3.real = variable1.real - variable2.real;
    variable3.imaginary =variable1.imaginary - variable2.imaginary ;

    cout<<variable3.real<<" + "<<variable3.imaginary<<"i";

}


void multiplication()
{
    struct variable variable1,variable2,variable3,variable4,variable5;

    variable1.real = 5;
    variable1.imaginary = 6;

    variable2.real = 7;
    variable2.imaginary = -5;

    variable3.real = variable1.real * variable2.real;
    variable3.imaginary =variable1.imaginary *variable2.imaginary ;

    variable4.real = variable1.real * variable2.imaginary ;
    variable4.imaginary = variable1.imaginary * variable2.real ;

    variable5.real = variable3.real + (variable3.imaginary* -1);
    variable5.imaginary =  variable4.real + variable4.imaginary;



    cout<<variable5.real<<" + "<<variable5.imaginary<<"i";

}

void division()
{
    struct variable variable1,variable2,variable3,variable4,variable5,variable6,variable7,variable8,variable9;

    variable1.real = 5;
    variable1.imaginary = 6;

    variable2.real = 7;
    variable2.imaginary = 5;

    variable3.real = variable1.real * variable2.real;
    variable3.imaginary =variable1.real * (variable2.imaginary*-1) ;

    variable4.real = variable1.imaginary * variable2.real;
    variable4.imaginary =variable1.imaginary * (variable2.imaginary*-1) ;

    variable5.real = variable3.real - variable4.imaginary;
    variable5.imaginary =variable3.imaginary + variable4.real ;

    variable6.real = variable2.real * variable2.real;
    variable6.imaginary =variable2.real * (variable2.imaginary*-1) ;

    variable7.real = variable2.imaginary * variable2.real;
    variable7.imaginary =variable2.imaginary * (variable2.imaginary*-1) ;

    variable8.real =variable6.real + (variable7.imaginary*-1) ;

    variable9.real = variable5.real/variable8.real ;
    variable9.imaginary = variable5.imaginary/variable8.real;

    cout<<variable9.real<<" + "<<variable9.imaginary<<"i";

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


