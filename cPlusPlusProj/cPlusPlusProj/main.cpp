//
//  main.cpp
//  cPlusPlusProj
//
//  Created by Byrdann Fox on 9/8/14.
//  Copyright (c) 2014 ExcepApps, Inc. All rights reserved.
//

// #include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// ...
char end1;

int main(int argc, const char * argv[]) {
    // insert code here...
    // std::cout << "Hello, World!\n";
    // << === writes to the console...
    cout << "What is your name?" << end1;
    string name {};
    // cin === stop the program and wait for something to happen...
    cin >> name;
    cout << "You said your name is: " << name << end1;
    return 0;
}