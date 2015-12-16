//
//  main.cpp
//  RepeatElemetsInArray
//
//  Created by Anas Saeed on 10/13/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
int number(std::vector<int> input){
    std::sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == input[i+1]) {
            return input[i];
        }
    }
    return 0;
}
int main(int argc, const char * argv[])
{
    std::vector<int> tester = {1,2,4,11,11};
    std::cout << number(tester);
    return 0;
}

