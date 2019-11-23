//
//  main.cpp
//  Dynamic Array
//
//  Created by Eduard Dzhumagaliev on 11/9/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include "palindromlib.hpp"
#include "strlib.hpp"



using namespace std;
int main(int argc, const char * argv[]) {
    
    fstream file;
    file.open("file.txt", ios::in);
    
    if (file.fail()) {
        throw std::invalid_argument( "Failed to read file" );
    }
    
    std::string inputString;
    ;
    
    if (palindrome::isPalindrome(inputString)) {
        std::cout << inputString << std::endl;
    } else {
        std::cout << strlib::inverse(inputString) << std::endl;
    }
    
    
    return 0;
}

