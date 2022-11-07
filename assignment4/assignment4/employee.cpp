//
//  employee.cpp
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#include "employee.h"
#include <iostream>
using namespace std;

employee::employee()
{
    age = 0;
    salary = 0;
    experience = 0;
    name = " ";
}
void employee::setage(int a)
{
    age = a;
}
void employee::setsalary(int s)
{
    salary = s;
}
void employee::setexp(int e)
{
    experience = e;
}
void employee::setname(string n)
{
    name = n;
}
int employee::getage()
{
    return age;
}
int employee::getsalary()
{
    return salary;
}
int employee::getexp()
{
    return experience;
}
string employee::getname()
{
    return name;
}
void employee::printemp()
{
    cout << "Employee's info:" << endl <<"Name: " << this->getname() << endl
    << "Age: " << this->getage() << endl
    << "Years of experience: " << this->getexp() << endl
    <<"Salary: " << this->getsalary() << endl;
    cout << "........................."<<endl;
}

