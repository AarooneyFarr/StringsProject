//
//  Controller.cpp
//  StringsProject
//
//  Created by Farr, Aaron on 2/2/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include <iostream>
#include "Controller.h"
#include <string>

using namespace std;

void Controller :: start()
{
    cout << tryString("Hello") << endl;
    cout << stringSize("world") << endl;
    
    
}

char Controller :: tryString(char input[20])
{
    char str[1] = input.at(0);
   return str;
}

int Controller :: stringSize(char input[20])
{
    return &input.size();
}
