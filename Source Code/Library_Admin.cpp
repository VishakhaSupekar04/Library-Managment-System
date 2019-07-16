//
//  Library_Admin.cpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#include "Library_Admin.hpp"
#include <string>

void Library_Admin::issueBook()
{
    cout<<"Enter book id to be issued :"<<endl;
    cin>>book_id;
    bool n = searchBookByID(book_id);  /*search if the book is available beforing issuing*/
    if(n==1)
    {
        cout<<"****    Book is issued   ****"<<endl;
    }
    else
        cout<<"****    Book not available    ****"<<endl;
}

bool Library_Admin::searchBookByID(int book_id)
{
    for(int i = 0; i < books.size(); i++)
    {
        if(books[i]->b_id == book_id)
            return 1;
    }
    return 0;
}

void Library_Admin::searchBookByType()   /* Members or librarian can search book based on book type */
{
    
    cout<<"Enter type of book to be searched(Novel  or Reference_Book)"<<endl;
    cout<<"NOTE: Book type is case sensitive so enter appropriatly"<<endl;
    cin>>book_type;
    for(int i = 0; i < books.size(); i++)
    {
        if(strcmp(books[i]->b_type.c_str(),book_type.c_str())==0)
        {
            books[i]->displayDetails();
            cout<<"----------------------------------------------------------"<<endl;
        }
    }
}

void Library_Admin::bookDetails()
{
    for(int i = 0; i < books.size(); i++)   //Display available books
    {
        books[i]->displayDetails();
        cout<<"----------------------------------------------------------"<<endl;
    }
}

void Library_Admin::memberDetails()
{
    for(int i = 0; i < stud.size(); i++)  /*Display student details*/
    {
        stud[i]->displayDetails();
        cout<<"----------------------------------------------------------"<<endl;
    }
    for(int i = 0; i < faculty.size(); i++)  /*Display Faculty details*/
    {
        faculty[i]->displayDetails();
        cout<<"----------------------------------------------------------"<<endl;
    }
}
