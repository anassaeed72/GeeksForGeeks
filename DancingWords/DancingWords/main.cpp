//
//  main.cpp
//  DancingWords
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
void dance(std::string input){
    int leftIndex = 0;
    int rightIndex = input.length() - 1;
    bool even  = false;
    if (input.length()%2 == 0) {
        even = true;
    }
    for (int i = 0; i <= input.length()/2; i++) {
        if (even) {
            if (i == input.length()/2) {
                break;
            }
        }
        for (int j = 0; j < leftIndex; j++) {
            std::cout << " ";
        }
        std::cout << input[leftIndex];
        if (leftIndex == rightIndex && even == false) {
            break;
        }
        for (int j = 0; j < rightIndex-leftIndex; j++) {
            std::cout << " ";
        }
        std::cout << input[rightIndex] << std::endl;
//        std::
        leftIndex++;
        rightIndex--;
    }
    std::cout << std::endl;
    leftIndex--;
    rightIndex++;
    for (int i = 0; i <= input.length()/2; i++) {
        if (even) {
            if (i == input.length()/2) {
                break;
            }
        }
        for (int j = 0; j < leftIndex; j++) {
            std::cout << " ";
        }
        std::cout << input[leftIndex];
        if (leftIndex == rightIndex && even == false) {
            break;
        }
        for (int j = 0; j < rightIndex-leftIndex; j++) {
            std::cout << " ";
        }
        std::cout << input[rightIndex] << std::endl;
        //        std::
        leftIndex--;
        rightIndex++;
    }

    
}
int main(int argc, const char * argv[])
{

    // insert code here...
//    std::cout << "Hello, World!\n";
    dance("12345");
    return 0;
}

