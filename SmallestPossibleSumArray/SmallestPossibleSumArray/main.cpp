//
//  main.cpp
//  SmallestPossibleSumArray
//
//  Created by Anas Saeed on 10/13/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
int calculate(std::vector<int> input){
    int output = 1;
    for (int i = 0; i < input.size(); i++) {
        if (output < input[i]) {
            return output;
        }
        output = output + input[i];
    }
    return output;
}
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int> tester = {1, 3, 6, 10, 11, 15};
    std::cout <<calculate(tester);
    
    std::cout << std::endl;
    return 0;
}

