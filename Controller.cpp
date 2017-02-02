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

Controller :: Controller()
{
    derpy = "Heloo";
    word = "world";
}

void Controller :: start()
{
    cout << tryString(derpy) << endl;
    cout << stringSize(word) << endl;
    
    
}

string Controller :: tryString(string input)
{
    string str = &input.at(2);
    return str;
}

int Controller :: stringSize(string input)
{
    return input.size();
}
