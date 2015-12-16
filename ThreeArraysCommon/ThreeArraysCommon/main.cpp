//
//  main.cpp
//  ThreeArraysCommon
//
//  Created by Anas Saeed on 10/13/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
int threeMin(int one,int two, int three){
    int temp = std::min(one, two);
    int index = 0;
    if (temp == one) {
        index = 1;
    } else if ( temp == two){
        index = 2;
    }
    int temp2 = std::min(temp, three);
    if (temp2 == temp) {
        return index;
    }
    return 3;
}
int threeCommons(std::vector<int> one, std::vector<int> two, std::vector<int> three){
    int oneIndex = 0;
    int twoIndex = 0;
    int threeIndex = 0;
    while (oneIndex <one.size() && twoIndex < two.size() && threeIndex < three.size()) {
        if (one[oneIndex] == two[twoIndex] && three[threeIndex]) {
            return one[oneIndex];
        }
        if (threeMin(one[oneIndex], two[twoIndex], three[threeIndex]) == 1) {
            oneIndex++;
        }
        else if (threeMin(one[oneIndex], two[twoIndex], three[threeIndex]) == 2) {
            twoIndex++;
        }
        else if (threeMin(one[oneIndex], two[twoIndex], three[threeIndex]) == 3) {
            threeIndex++;
        }
    }
    return -1;
}
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int> one = {1, 2,7, 10};
    std::vector<int> two = {3, 4, 5, 5, 10};
    std::vector<int> three = {5, 5, 10, 20};
    std::cout << threeCommons(one, two, three);
    return 0;
}

