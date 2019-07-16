//
//  main.cpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#include <iostream>
#include "BookFactory.hpp"
#include "ReferenceBook.hpp"
#include "Novels.hpp"
#include "Library_Admin.hpp"
#include "Student.hpp"
#include "Faculty.hpp"
#include "DataBase.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int ch;
    BookFactory *BF;
    Book *ptr;
    Library_Admin L1;
    DataBase *ptr3 = DataBase::getInstance();
    cout<<" Welcome to CSUSM Library "<<endl;
    do{
        cout<<"1. Add a book"<<endl;
        cout<<"2. Display books"<<endl;
        cout<<"3. Add a member"<<endl;
        cout<<"4. Display member details"<<endl;
        cout<<"5. Issue Book"<<endl;
        cout<<"6. Search for Books as per category(Novel/Reference book)"<<endl;
        cout<<"10. Quit"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:{
                ptr= BF->createBook("Computer Networks","Ross and Kuross",1002,"Reference_Book");
                L1.add(ptr);
                ptr= BF->createBook("Harry potter","J.K.Rowling",1004,"Novel");
                L1.add(ptr);
                ptr= BF->createBook("Harry potter part 2","J.K.Rowling",1005,"Novel");
                L1.add(ptr);
                cout<<"**** Books added successfully to the database ****"<<endl;
            }
                break;
            case 2: L1.bookDetails();
                break;
            case 3:{
                Student s(2201,"Vishakha",10);
                L1.addStudent(&s);
                Faculty f(4001,"Prof Rahul",15);
                L1.addFaculty(&f);
                cout<<"**** Members added successfully to the database ****"<<endl;
            }
                break;
            case 4: L1.memberDetails();
                break;
            case 5: L1.issueBook();
                break;
            case 6: L1.searchBookByType();
                break;
            case 10: exit(0);
            default: cout <<"Invalid choice"<<endl;
                break;
        }
    }while(ch!=10);
    return 0;
        
}
