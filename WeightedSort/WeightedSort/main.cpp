//
//  main.cpp
//  WeightedSort
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <vector>
class Weight{
public:
    int weight;
    int object;
    Weight(int a, int b){
        object = a;
        weight = b;
    }
    bool operator<(Weight a){
        if (weight < a.weight ) {
            return false;
        }
        return true;
    }
};
bool is_perfect_square(int n) {
    if (n < 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}
bool compare(Weight a, Weight b){
    if (a.weight > b.weight) {
        return true;
    }
    return false;
}
std::vector<int> weightedSort(std::vector<int> input){
    std::vector<Weight> weight;
    for (int i = 0; i < input.size(); i++) {
        int currentWeight = 0;
        if (input[i]%2 == 0) {
            currentWeight+=3;
        }
        if (input[i]%6 == 0 && input[i]%4 == 0) {
            currentWeight+=4;
        }
        if (is_perfect_square(input[i])) {
            currentWeight+=5;
        }
        Weight temp(input[i], currentWeight);
        weight.push_back(temp);
        std::cout << input[i] << " " << currentWeight << std::endl;
    }
    std::sort(weight.begin(), weight.end(), compare);
    std::vector<int> output;
    for ( auto x: weight){
        output.push_back(x.object);
    }
    return output;
}
int main(int argc, const char * argv[])
{
    std::vector<int> input = {10, 36, 54,89,12};
    input  = weightedSort(input);
    for ( auto x: input){
        std::cout << x << " ";
    }
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

