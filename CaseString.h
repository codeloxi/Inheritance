//
//  CaseString.h
//  inheritanceLab
//
//  Created by Jacob on 8/7/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef CaseString_h
#define CaseString_h

#include <iostream>

#include "String.h"

class CaseString: public String {
    
public:
    
    CaseString();
    CaseString(const CaseString&);
    CaseString(const char*);
    CaseString& operator=(const CaseString&);
    void print();
    ~CaseString();
private:
    char* upper;
    char* lower;
};

#endif /* CaseString_h */
