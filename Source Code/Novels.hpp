//
//  Novels.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Novels_h
#define Novels_h
#include "Book.hpp"

using namespace std;

class Novels:public Book{
public:
    //string b_type;
    Novels(string name,string author,int id, string type):Book(name,author,id) // calling constructor of base class
    {
        b_type = type;
    }
    void displayDetails(){
        cout<<"Novel Id        :"<<b_id<<endl;
        cout<<"Name of Novel   :"<<b_name<<endl;
        cout<<"Author of Novel :"<<b_author<<endl;
        cout<<"Category        :"<<b_type<<endl;
    }
};

#endif /* Novels_h */
