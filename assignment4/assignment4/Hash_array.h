//
//  Hash_array.h
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#ifndef Hash_array_h
#define Hash_array_h
#include <iostream>
#include "employee.h"
using namespace std;

class Table1
{
private:
    int size;
    employee **arr;
    int hashf(int key);
    static int count; 
public:
    Table1();
    void insert(int key, employee &e);
    void remove(int key, string n);
    void print();
    int calculate(); // calculate the collision rate 
};

#endif /* Hash_array_h */
