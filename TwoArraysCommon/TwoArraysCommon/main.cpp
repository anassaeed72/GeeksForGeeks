//
//  main.cpp
//  TwoArraysCommon
//
//  Created by Anas Saeed on 10/13/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
int common(std::vector<int> one,std::vector<int> two){
    int iterations = std::min (one.size(),two.size());
    unsigned int oneIndex = 0;
    unsigned int twoIndex = 0;
    for (int i = 0; i < iterations; i++) {
        if (one[oneIndex] == two[twoIndex]) {
            return one[oneIndex];
        }
        if (one[oneIndex] < two[twoIndex]) {
            oneIndex++;
        }
        if (two[twoIndex] < one[oneIndex]) {
            twoIndex++;
        }
    }
    std::cout << "None\n";
    return 0;
}
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int > one = {1, 5, 10, 80, 80, 80};
    std::vector<int> two  = {6, 7, 70, 80, 100};
    std::cout << common(one, two);
    return 0;
}

