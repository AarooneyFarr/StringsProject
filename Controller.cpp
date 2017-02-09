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
    char test[] = "PLEASE";
    int foo[7] = {1,2,3,4,5,6,7};
    
}

void Controller :: start()
{
    cout << tryString(derpy) << endl;
    cout << stringSize(word) << endl;
    cout << stringEmpty(derpy)   << endl;
    cout << subString(derpy,1,3)   << endl;
    cout << subString(derpy,3)   << endl;
    cout << stringsEqual(derpy, word)   << endl;
   
  
    
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

bool Controller :: stringEmpty(string input)
{
    if(input.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

string Controller :: subString(string input, int start, int end)
{
    return input.substr(start, end);
}

string Controller :: subString(string input, int start)
{
    return input.substr(start);
}

bool Controller :: stringsEqual(string inputOne, string inputTwo)
{
    if(inputOne.compare(inputTwo))
    {
        return true;
    }
    else
    {
        
        return false;
    }
}









