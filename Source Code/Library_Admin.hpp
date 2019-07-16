//
//  Library_Admin.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Library_Admin_h
#define Library_Admin_h
#include "BookFactory.hpp"
#include "Student.hpp"
#include "Faculty.hpp"
#include "DataBase.hpp"
#include <string>
#include <vector>
using namespace std;

/* Facade design pattern . Library admin handles all the functionality of library system including adding members, adding books, Issuing books , Seraching books etc*/

class Library_Admin{
    vector<Book*> books;
    vector<Student*> stud;
    vector<Faculty*> faculty;
    int book_id;
    int stud_id;
    string book_type;
    
public:
    void add(Book* ptr){                       /* add books to vector */
        books.push_back(ptr);
    }
    void addStudent(Student* str){             /* add student member to vector */
        stud.push_back(str);
    }
    void addFaculty(Faculty* str){             /* add Faculty member to vector */
        faculty.push_back(str);
    }
    void memberDetails();                      /* Display member details */
    void bookDetails();                        /* Display record details */
    void issueBook();                          /* Librarian will assign book to members */
    bool searchBookByID(int book_id);          /* search book availibilty based on id */
    void searchBookByType();                   /* search book base on book type */
};
#endif /* Library_Admin_h */
