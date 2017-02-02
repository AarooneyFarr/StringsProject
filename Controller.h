//
//  Controller.h
//  StringsProject
//
//  Created by Farr, Aaron on 2/2/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Controller_h
#define Controller_h

#include <string>

using namespace std;

class Controller
{
public:
    void start();
    Controller();
    
private:
    string tryString(string input);
    string derpy;
    string word;
    int stringSize(string input);
};

#endif /* Controller_h */
