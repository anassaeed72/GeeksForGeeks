//
//  main.cpp
//  UniqueSorting
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::vector<int> mysort(std::vector<int> one, std::vector<int> two)
{
    std::vector<int> output;
    int index1 = 0;
    int index2 = 0;
    while (index1 < one.size() && index2 < two.size()) {
        if (one[index1]<= two[index2]) {
            if (output.size() > 0) {
                if (output[output.size()-1] == one[index1]) {
                    index1++;
                    continue;
                }
            }
            output.push_back(one[index1]);
            index1++;
        } else {
            if (output.size() > 0) {
                if (output[output.size()-1] == two[index2]) {
                    index2++;
                    continue;
                }
            }
            output.push_back(two[index2]);
            index2++;
        }
    }
    while (index1 < one.size()) {
        if (output.size() > 0) {
            if (output[output.size()-1] == one[index1]) {
                index1++;
                continue;
            }
        }        output.push_back(one[index1]);
        index1++;
    }
    while (index2 <two.size()) {
        if (output.size() > 0) {
            if (output[output.size()-1] == two[index2]) {
                index2++;
                continue;
            }
        }        output.push_back(two[index2]);
        index2++;
    }
    return output;
}int main(int argc, const char * argv[])
{
    std::vector<int> one = {1,3,4,5,7,9};
    std::vector<int> two = {1,2,4,6,8,10};
    std::vector<int> sorted = mysort(one, two);
    for ( auto x: sorted){
        std::cout << x << " ";
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

