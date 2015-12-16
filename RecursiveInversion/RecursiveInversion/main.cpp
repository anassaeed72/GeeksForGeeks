//
//  main.cpp
//  RecursiveInversion
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
int counter = 0;
std::string recursiveInversion(std::string input){
    counter++;
    if (counter > 4) {
        return input;
    }
//    std::cout << input << std::endl << std::endl << std::endl;
    std::string output ="";
    std::string word = "";
    std::string remainder = "";
    bool switchW  = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ' && switchW == false) {
            switchW = true;
            continue;
        }
        if (switchW) {
            remainder = remainder + input[i];
        } else {
             word = word + input[i];
        }
    }
//    std::cout << remainder;
    std::string result;
    if (input.length() >= word.length()) {
        result = recursiveInversion(remainder);
        output  = result+ " "+ word;
    } else {
        return  remainder;
    }
    return output;
}
int main(int argc, const char * argv[])
{
    std::string input = "one two three four";
    input =recursiveInversion(input);
    std::cout << input;
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

