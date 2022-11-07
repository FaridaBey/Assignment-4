//
//  Hash_array.cpp
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#include <iostream>
#include "employee.h"
#include "Hash_array.h"
using namespace std;

int Table1::count = 0;
Table1::Table1()
{
    size = 11;
    arr = new employee *[size];
    for(int i=0; i<size; i++)
        arr[i]=NULL;
}
void Table1::insert(int key, employee &e)
{
    employee *temp = new employee(e);
    int index;
    index = hashf(key);
    while(arr[index] != NULL)
    {
        index = (index+1) % size; //linear probing
        count ++;
    }
    if(arr[index] == NULL)
        arr[index] = temp;
}
int Table1::hashf(int key)
{
    return (key/1000);
}
void Table1::remove(int key,string n)
{
    int index;
    index = hashf(key);
    while(arr[index]!= NULL)
    {
        if((arr[index])->getname() == n)
        {
            arr[index] = NULL;
        }
        else
        {
            index = (index+1) % size;
            if(index == hashf(key))
                return;
        }
    }
    
}
void Table1::print()
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != NULL)
            arr[i]->printemp();
    }
}
int Table1::calculate()
{
    return count;
}
