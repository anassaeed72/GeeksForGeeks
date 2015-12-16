//
//  main.cpp
//  RecursiveAddition
//
//  Created by Anas Saeed on 13/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
int recursiveAddition(int a, int b){
    if (b == 0) {
        return a;
    }
    a = a+1;
    return recursiveAddition(a,b-1);
}
int recursiveSubtraction(int a, int b){
    if (b == 0) {
        return a;
    }
    --a;
    return recursiveSubtraction(a,b-1);
}
int recursiveMultipication(int a, int b, int result){
    if (b == 0) {
        return  result;
    }
    result = recursiveAddition(result, a);
    return recursiveMultipication(a, b-1, result);
}
int recursiveDivision(int a, int b, int result){
    if (recursiveSubtraction(a, b)<0) {
        return result;
    }
    result = recursiveAddition(result, 1);
    a = recursiveSubtraction(a, b);
    return recursiveDivision(a,b,result);
}
int main(int argc, const char * argv[])
{
    std::cout << recursiveDivision(10, 2, 0);
//    std::cout << recursiveSubtraction(1000, 10);
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

