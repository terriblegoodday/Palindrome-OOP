//
//  palindromlib.cpp
//  Dynamic Array
//
//  Created by Eduard Dzhumagaliev on 11/23/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include "palindromlib.hpp"

bool palindrome::isPalindrome(std::string str) {
    int i = 0;
    int p = 0;
    while (p == 0) {
        if (str[i] == '\0') p = i;
        i++;
    }
    
    i = 0;
    int j = p - 1;
    bool flag = true;
    while (i < j) {
        while (str[i] == ' ' || str[i] == ',') i++;
        while (str[j] == ' ' || str[j] == ',') j--;
        if (str[i] != str[j]) {
            flag = false;
        }
        i++;
        j--;
    }
    
    
    return (flag ? true : false);
}
