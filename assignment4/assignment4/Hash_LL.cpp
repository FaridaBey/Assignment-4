//
//  Hash_LL.cpp
//  assignment4
//
//  Created by Farida Sherif on 05/11/2022.
//
#include <iostream>
#include "employee.h"
#include "Hash_LL.h"
using namespace std;

int Table2::count = 0;
Table2::Table2()
{
    size = 11;
    table = new Node *[size];
    for(int i=0; i < size; i++)
       table[i] = NULL;
}
void Table2::insert(int key, employee &e)
{
    Node* emp = new Node;
    emp->info = e;
    emp->next = NULL;
    int index;
    index = hashf(key);
    while(table[index] != NULL)
        {
            table[index]= table[index]->next; //chaining
            count ++;
        }
    if(table[index] == NULL)
        table[index] = emp;
    }
int Table2::hashf(int key)
{
    return (key/1000);
}
void Table2::remove(int key,string n)
{
    int index;
    index = hashf(key);
    while(table[index]!= NULL)
    {
        if(((table[index])->info.getname()) == n)
        {
            table[index] = NULL;
        }
        else
        {
            while(table[index]->next != NULL)
                table[index]= table[index]->next;
            if(index == hashf(key))
                return;
        }
    }
}
void Table2::print()
{
    for(int i = 0; i < size; i++)
    {
        if(table[i] != NULL)
        {
            cout << i << ": ";
            while(table[i] !=NULL)
            {
                (table[i]->info).printemp();
                table[i]= table[i]->next;
            }
        }
    }
}
int Table2::calculate()
{
    return count;
}
