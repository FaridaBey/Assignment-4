//
//  employee.h
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#ifndef employee_h
#define employee_h
#include <iostream>
using namespace std;

class employee
{
private:
    int age;
    int salary;
    int experience;
    string name;
public:
    employee();
    void set_NULL();
    void setage(int a);
    void setsalary(int s);
    void setexp(int e);
    void setname(string n);
    int getage();
    int getsalary();
    int getexp();
    string getname();
    void printemp();
};

#endif /* employee_h */
