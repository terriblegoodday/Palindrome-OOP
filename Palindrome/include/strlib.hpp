//
//  strlib.hpp
//  Dynamic Array
//
//  Created by Eduard Dzhumagaliev on 11/23/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#ifndef strlib_hpp
#define strlib_hpp

#include <stdio.h>
#include <string>
//  [Does #include affect program size?](https://stackoverflow.com/questions/1539619/does-include-affect-program-size)
#include <algorithm>

namespace strlib {
    std::string inverse(std::string str);
}

#endif /* strlib_hpp */
