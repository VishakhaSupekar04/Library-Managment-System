//
//  DataBase.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef DataBase_h
#define DataBase_h
#include "Book.hpp"
#include "ReferenceBook.hpp"
#include <vector>
#include <iostream>

using namespace std;

// Singleton DB object . Implementation of Singleton Design Pattern.

class DataBase {
    static DataBase *db;
public:
    static DataBase* getInstance();
private:
    DataBase() {}
};



#endif /* DataBase_h */
