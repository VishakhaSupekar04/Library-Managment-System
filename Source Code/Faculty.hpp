//
//  Faculty.hpp
//  Project1
//
//  Created by Vishakha Supekar on 5/17/18.
//  Copyright © 2018 Vishakha Supekar. All rights reserved.
//

#ifndef Faculty_h
#define Faculty_h
#include "Library_Member.hpp"

using namespace std;

class Faculty:public Library_Member{
public:

    Faculty(int id,string name,int fee):Library_Member(id,name,fee)    // calling constructor of base class
    {
        mem_type ="Faculty";
    }
   
};

#endif /* Faculty_h */
