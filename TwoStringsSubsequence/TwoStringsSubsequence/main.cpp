//
//  main.cpp
//  TwoStringsSubsequence
//
//  Created by Anas Saeed on 10/12/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    std::string one,two;
    std::cout <<"Please enter the first string\n";
    std::cin >> one;
    std::cout <<"Now enter the other string\n";
    std::cin >> two;
    
    unsigned int index = 0;
    int charactersTrue = 0;
    for  (auto x :two){
        for (int i = index; index < one.length(); index++) {
            if (x == one[index]) {
                charactersTrue++;
                break;
            }
        }
    }
    if (charactersTrue == two.length()) {
        std::cout << "Yes\n";
    } else {
        std::cout <<"NO\n";
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

