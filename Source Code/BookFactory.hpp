//
//  BookFactory.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef BookFactory_h
#define BookFactory_h
#include "ReferenceBook.hpp"
#include "Novels.hpp"
#include "DataBase.hpp"

using namespace std;
/* Abstract Factory class BookFactory creates book */
class BookFactory{
public:
    
    Book* createBook(string name,string author, int id , string type){
        if (type == "Novel"){
            return new Novels(name,author,id,type);
        }
        if (type == "Reference_Book"){
            return new ReferenceBook(name,author,id,type);
        }
        return NULL;
    }
   
};

#endif /* BookFactory_h */
