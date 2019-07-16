//
//  Student.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Student_h
#define Student_h
#include <iostream>
#include "Library_Member.hpp"

using namespace std;

class Student:public Library_Member{
public:
    Student(int id,string name,int fee):Library_Member(id,name,fee)  // calling constructor of base class
    {
        mem_type ="Student";
    }
};

#endif /* Student_h */
