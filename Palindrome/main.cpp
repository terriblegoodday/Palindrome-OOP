//
//  main.cpp
//  Dynamic Array
//
//  Created by Eduard Dzhumagaliev on 11/9/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "palindromlib.hpp"
#include "strlib.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    
    fstream file;
    file.open("file.txt", ios::in);
    
    if (file.fail()) {
        throw invalid_argument( "Failed to read file" );
    }
    
    string inputString;
    file >> inputString;
    
    if (palindrome::isPalindrome(inputString)) {
        cout << "String is a palindrome" << endl;
        cout << inputString << endl;
    } else {
        cout << "String isn't a palindrome" << endl;
        cout << strlib::inverse(inputString) << endl;
    }
    
    file.close();
    
    return 0;
}

