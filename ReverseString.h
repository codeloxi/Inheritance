//
//  ReverseString.h
//  inheritanceLab
//
//  Created by Jacob on 8/7/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef ReverseString_h
#define ReverseString_h

#include <iostream>
#include "String.h"

class ReverseString: public String {
    
public:
    
    ReverseString();
    ReverseString(const ReverseString&);
    ReverseString(const char*);
    ReverseString& operator=(const ReverseString&);
    ReverseString operator~();
private:
    char* rstring;
};
#endif /* ReverseString_h */
