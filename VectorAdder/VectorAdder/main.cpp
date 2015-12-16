//
//  main.cpp
//  VectorAdder
//
//  Created by Anas Saeed on 16/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::vector<int> vectoradder(std::vector<int> one, std::vector<int> two){
    std::vector<int> output;
    for (int i = 0; i < one.size(); i++) {
        int sum = one[i] + two[i];
        if (sum > 10) {
            output.push_back(sum/10);
            output.push_back(sum%10);
        }else{
            output.push_back(sum);
        }
    }
    return output;
}
int main(int argc, const char * argv[])
{
    std::vector<int> one = {4,3,5};
    std::vector<int> two = {3,2,6};
    one = vectoradder(one, two);
    for  (auto x: one){
        std::cout << x << " ";
    }
    return 0;
}

