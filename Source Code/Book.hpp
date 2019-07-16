//
//  Book.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Book_h
#define Book_h
#include <iostream>

using namespace std;

/* Abstract class book which is base class for Novels and ReferenceBook classes */

class Book{
public:
    string b_name;
    string b_author;
    int b_id;
    string b_type;
    Book(string name,string author,int id)
    {
        b_name =  name;
        b_author = author;
        b_id = id;
    }
    virtual void displayDetails()=0;
    
};

#endif /* Book_h */
