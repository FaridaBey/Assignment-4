//
//  Hash_LL.h
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#ifndef Hash_LL_h
#define Hash_LL_h
#include <iostream>
#include "employee.h"
using namespace std;

struct Node
{
    employee info;
    Node* next;
    Node(){
        this->next = NULL;
    }
};
class Table2
{
private:
    int size;
    Node **table;
    int hashf(int key);
    static int count;
public:
    Table2();
    void insert(int key, employee &e);
    void remove(int key, string n);
    void print();
    int calculate(); // calculate the collision rate 
};

#endif /* Hash_LL_h */
