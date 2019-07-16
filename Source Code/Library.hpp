//
//  Library.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Library_h
#define Library_h
#include "Book.hpp"

using namespace std;

class Library{
    //vector<Books*> books;
public:
    virtual Book* addBook()=0;
};

#endif /* Library_h */
