//
//  main.cpp
//  MinSumArrayDifference
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> minDifferenceNSquared(std::vector<int> vector,int sum){
    std::vector<int> output;
    int differnce = 1000000;
    int a = 0;
    int b = 0;
    for ( auto x : vector){
        for( auto y: vector ){
            if (abs(x +y) -sum < differnce){
                a = x;
                b = y;
                differnce = abs(x + y) -sum;
            }
        }
    }
    output.push_back(a);
    output.push_back(b);
    return output;
}
std::vector<int> minDifferenceEffiecient(std::vector<int> vector,int sum){
    std::vector<int> output;
    int leftIndex = 0;
    int rightIndex = vector.size() - 1;
    int difference = 1000000;
    
    Loop while l < r.
        (a) If  abs(arr[l] + arr[r] - sum) > diff  then
        update diff and result
        (b) Else if(arr[l] + arr[r] <  sum )  then l++
            (c) Else r--
            
            
    while (leftIndex < rightIndex) {
        if (abs(vector[leftIndex] + vector[rightIndex] - sum)>difference) {
            difference = 
        }
    }
    return output;
}
int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::vector<int> myvec = {10, 22, 28, 3, 30, 40};
    myvec = minDifferenceNSquared(myvec,0);
    for ( auto x: myvec){
        std::cout <<x << " ";
    }

    
    return 0;
}

