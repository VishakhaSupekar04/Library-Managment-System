//
//  Library_Member.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Library_Member_h
#define Library_Member_h
#include <iostream>

/* Template Method Design pattern. Library_member is a template to create members of class Student and Faculty*/

using namespace std;

class Library_Member{
    int mem_id;
    string mem_name;
    int montly_fee;
    
public:
    
    string mem_type;         // member type(student or Faculty)
    Library_Member(int id,string name,int fee){
        mem_id = id;
        mem_name = name;
        montly_fee = fee;
    }
    void displayDetails(){
        cout<<"Member type :"<<mem_type<<endl;
        cout<<"Student ID  :"<<mem_id<<endl;
        cout<<"Student name:"<<mem_name<<endl;
        cout<<"Fees paid   :$"<<montly_fee<<endl;
    }
};

#endif /* Library_Member_h */
