//
//  main.cpp
//  assignment4
//
//  Created by Farida Sherif on 28/10/2022.
//

#include <iostream>
#include "employee.h"
#include "Hash_array.h"
#include "Hash_LL.h"
using namespace std;


int main()
{
    employee e1;
    e1.setname("Mina");
    e1.setage(30);
    e1.setsalary(10000);
    e1.setexp(4);
    employee e2;
    e2.setname("Fawzy");
    e2.setage(45);
    e2.setsalary(5000);
    e2.setexp(8);
    employee e3;
    e3.setname("Yara");
    e3.setage(19);
    e3.setsalary(2000);
    e3.setexp(0);
    employee e4;
    e4.setname("Mariam");
    e4.setage(32);
    e4.setsalary(8000);
    e4.setexp(2);
    employee e5;
    e5.setname("Ayman");
    e5.setage(33);
    e5.setsalary(4000);
    e5.setexp(8);
    employee e6;
    e6.setname("Roshdy");
    e6.setage(28);
    e6.setsalary(9000);
    e6.setexp(3);
    employee e7;
    e7.setname("Aya");
    e7.setage(26);
    e7.setsalary(6000);
    e7.setexp(3);
    employee e8;
    e8.setname("Abdallah");
    e8.setage(29);
    e8.setsalary(7000);
    e8.setexp(4);
    employee e9;
    e9.setname("Fatma");
    e9.setage(21);
    e9.setsalary(3000);
    e9.setexp(1);
    
    Table1 t1;
    Table2 t2;

    t1.insert((e1.getsalary()), e1);
    t2.insert((e1.getsalary()), e1);
    
    t1.insert((e2.getsalary()), e2);
    t2.insert((e2.getsalary()), e2);
    
    t1.insert((e3.getsalary()), e3);
    t2.insert((e3.getsalary()), e3);
    
    t1.insert((e4.getsalary()), e4);
    t2.insert((e4.getsalary()), e4);
    
    t1.insert((e5.getsalary()), e5);
    t2.insert((e5.getsalary()), e5);
    
    t1.insert((e6.getsalary()), e6);
    t2.insert((e6.getsalary()), e6);
    
    t1.insert((e7.getsalary()), e7);
    t2.insert((e7.getsalary()), e7);
    
    t1.insert((e8.getsalary()), e8);
    t2.insert((e8.getsalary()), e8);
    
    t1.insert((e9.getsalary()), e9);
    t2.insert((e9.getsalary()), e9);
    
    cout << "Table1: " << endl << endl;
    t1.print();
    cout << "Table2: " << endl << endl;
    t2.print();
    
    cout << "Table1 collisions: " << t1.calculate()<< endl;
    cout << "Table2 collisions: " << t2.calculate()<< endl;

    


 
    
    return 0;
}
