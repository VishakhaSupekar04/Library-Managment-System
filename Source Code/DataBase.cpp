//
//  DataBase.cpp
//  Project1
//
//  Created by Vishakha Supekar on 5/18/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#include "DataBase.hpp"

DataBase *DataBase::getInstance(){
    if(!db)
        db = new DataBase();
    return db;
}

DataBase *DataBase::db = 0;
