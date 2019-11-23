//
//  strlib.cpp
//  Dynamic Array
//
//  Created by Eduard Dzhumagaliev on 11/23/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#include "strlib.hpp"

std::string strlib::inverse(std::string str) {
    // c++ copies values passed as arguments by default
    // so the original string won't be changed (fortunately)
    std::reverse(str.begin(), str.end());
    return str;
}
