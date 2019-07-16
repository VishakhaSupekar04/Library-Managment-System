//
//  ReferenceBook.h
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef ReferenceBook_h
#define ReferenceBook_h
#include "Book.hpp"

using namespace std;

class ReferenceBook:public Book{
public:
    //string b_type;
    ReferenceBook(string name,string author,int id, string type):Book(name,author,id)  // calling constructor of base class
    {
        b_type = type;
    }
    void displayDetails(){
        cout<<"Book Id          :"<<b_id<<endl;
        cout<<"Name of Book     :"<<b_name<<endl;
        cout<<"Author of book   :"<<b_author<<endl;
        cout<<"Category of book :"<<b_type<<endl;
    }
};


#endif /* ReferenceBook_h */
