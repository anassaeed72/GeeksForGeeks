//
//  main.cpp
//  DecimalValue
//
//  Created by Anas Saeed on 25/08/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
int returnCode(char input){
    if (input =='a') {
        return 2;
    }
    if (input =='b') {
        return 2;
    }
    if (input =='c') {
        return 2;
    }if (input =='d') {
        return 3;
    }if (input =='e') {
        return 3;
    }if (input =='f') {
        return 3;
    }
    if (input =='g') {
        return 4;
    }
    if (input =='h') {
        return 4;
    }
    if (input =='i') {
        return 4;
    }
    if (input =='j') {
        return 5;
    }
    if (input =='k') {
        return 5;
    }
    if (input =='l') {
        return 5;
    }
    if (input =='m') {
        return 6;
    }
    
    if (input =='n') {
        return 6;
    }
    if (input =='o') {
        return 6;
    }
    if (input =='p') {
        return 7;
    }if (input =='q') {
        return 7;
    }if (input =='r') {
        return 7;
    }
    if (input =='s') {
        return 7;
    }
    if (input =='t') {
        return 8;
    }
    if (input =='u') {
        return 8;
    }
    if (input =='v') {
        return 8;
    }
    if (input =='w') {
        return 9;
    }
    if (input =='x') {
        return 9;
    }
    if (input =='y') {
        return 9;
    }
        return 9;
    
}
std::string lowerCaseOutput ( std::string input ) {
    std::string output;
    for ( auto x: input){
        if ( x >=65 && x<=90){
            char temp = x+32;
            output = output +temp;
        }else{
            output = output +x;
        }
    }
    return output;
}
int main(int argc, const char * argv[])
{

    int num;
    std::cin >> num;
    std::vector<std::string> todo;
    for (int i = 0; i < num; i++) {
        std::string temp;
        std::cin >> temp;
        todo.push_back(temp);
    }
    for ( auto x: todo){
        std::string temp = lowerCaseOutput(x);
        for ( auto y:temp){
            std::cout << returnCode(y);
        }
        std::cout << "  " << x << std::endl;
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

