//
//  CaseString.cpp
//  inheritanceLab
//
//  Created by Jacob on 8/7/18.
//  Copyright © 2018 Jacob. All rights reserved.
//


#include "CaseString.h"
#include <fstream>
#include <cstring>
extern ofstream csis;


CaseString::CaseString() : String() {}

CaseString::CaseString(const CaseString& cs) : String(cs){}

CaseString::CaseString(const char* ch) : String(ch){
    lower = new char[int(strlen(ch))];
    upper = new char[int(strlen(ch))];
    
    strcpy(lower,ch);
    strcpy(upper,ch);
}

CaseString& CaseString::operator=(const CaseString& cs){
    if (&cs != this) {
        String::operator=(cs);
    }
    return *this;
}

void CaseString::print(){
    cout << lower << " " << upper << endl;
    csis << lower << " " << upper << endl;
}

CaseString::~CaseString(){
  //  delete []lower;
  //  delete []upper;
}
