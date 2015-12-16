//
//  main.cpp
//  RotationPalindrome
//
//  Created by Anas Saeed on 10/12/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
bool palindromeCheck(std::string input){
    for (int i = 0; i < input.length()/2; i++) {
        if (input[i] != input[input.length()-i-1]) {
            return false;
        }
    }
    return true;
}
std::string rotate(std::string input){
    std::string output;
    output = input[input.length()-1];
    for (int i = 0; i  <input.length()-1; i++) {
        output = output + input[i];
    }
    return output;
}
bool checkRotationPalindrome(std::string input){
    for (int i = 0; i < input.length(); i++) {
        if (palindromeCheck(input)) {
            return true;
        }
        input = rotate(input);
    }
    return false;
}
int main(int argc, const char * argv[])
{
    std::cout << checkRotationPalindrome("mmaha");
    return 0;
}

