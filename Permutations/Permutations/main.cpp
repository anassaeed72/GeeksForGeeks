//
//  main.cpp
//  Permutations
//
//  Created by Anas Saeed on 25/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
void printPermutations(std::string input){
    
}
int main(int argc, const char * argv[])
{
    int number;
    std::cin >> number;
    std::vector<std::string> todo;
    for (int i = 0; i < number; i++) {
        std::string temp;
        std::cin >> temp;
        todo.push_back(temp);
    }
    for ( auto x: todo){
        
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

