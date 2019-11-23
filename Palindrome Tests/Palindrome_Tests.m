//
//  Palindrome_Tests.m
//  Palindrome Tests
//
//  Created by Eduard Dzhumagaliev on 11/23/19.
//  Copyright © 2019 Eduard Dzhumagaliev. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "palindromlib.hpp"

@interface Palindrome_Tests : XCTestCase

@end

@implementation Palindrome_Tests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testPalindrome {
    XCTAssertTrue(palindrome::isPalindrome(""));
    XCTAssertFalse(palindrome::isPalindrome("hello"));
    XCTAssertTrue(palindrome::isPalindrome("heh"));
    XCTAssertTrue(palindrome::isPalindrome("h e h"));
    XCTAssertTrue(palindrome::isPalindrome("a"));
    XCTAssertTrue(palindrome::isPalindrome("step on no pets"));
    // You can also add tests with other punctuation marks, of course...
    // But I've implemented the function so that it only recognizes comma marks :(
    // I think it's enough to say that any other sophistication is overengineering.
    XCTAssertTrue(palindrome::isPalindrome("red rum, sir, is murder"));
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
