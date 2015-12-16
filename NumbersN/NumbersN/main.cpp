//
//  main.cpp
//  NumbersN
//
//  Created by Anas Saeed on 10/3/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
std::vector<std::string> nth(int input ){
    std::vector<std::string> output;
    output.push_back("3");
    output.push_back("4");
    std::queue<std::string> temp1;
    std::queue<std::string> temp2;
    temp1.push("3");
    temp1.push("4");
    int counter = 2;
    while (counter < input)
    {
        while (temp1.empty() == false && counter<input) {
            counter++;
            std::string t = temp1.front();
            temp1.pop();
            std::string t1 = "3" + t;
            std::string t2 = "4" + t;
            output.push_back(t1);
            temp2.push(t1);
            counter++;
            if (counter >= input) {
                break;
            }
            output.push_back(t2);
            temp2.push(t2);
        }
        while (temp2.empty()==false) {
            temp1.push(temp2.front());
            temp2.pop();
        }
        
    }
    return output;
}
int main(int argc, const char * argv[])
{
    int limit = 3;
    std::vector<std::string> out = nth(limit);
    for ( auto x: out) {
        std::cout << x << " ";
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

