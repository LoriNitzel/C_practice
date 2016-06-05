//
//  main.cpp
//  program1assignmentmod1
//
//  Created by Lori Nitzel on 6/4/16.
//  Copyright © 2016 Lori Nitzel. All rights reserved.
//

#include <iostream>

using namespace std;


int main()
{
    //declaring the program variables
    int num1, num2, num3, average;
    
    //assigning values to the variables
    num1 = 125;
    num2 = 28;
    num3 = -25;
    
    //getting the average of the num variables
    average = (num1 + num2 + num3)/3;
    
    //outputting the values of all variables
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "average = " << average << endl;
    cout << "Press any key to continue..." << endl;

    return 0;
}
