//
//  main.cpp
//  program-dis-mod1.cpp
//
//  Created by Lori Nitzel on 6/4/16.
//  Copyright © 2016 Lori Nitzel. All rights reserved.
//

#include <iostream>

#include <string>

using namespace std;

int main()
{
    //declaring variables
    double studyHours;
    string name;
    
    //prompting user to input name
    cout << "Enter your name: ";
    cin >> name;
    cout << endl;
    
    //prompting user to input number of study hours
    cout << "Enter in decimal form the number of hours you feel you need to study: ";
    cin >> studyHours;
    cout << endl;
    
    //output the person's name and amount of hours studied in a lovely sentence
    cout << "Hello " << name << "!"
    << " on Saturday you need to study "
    << studyHours << " hours for the exam." << endl;
    
    return 0;
}
