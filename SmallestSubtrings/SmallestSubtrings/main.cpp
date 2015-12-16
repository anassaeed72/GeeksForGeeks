//
//  main.cpp
//  SmallestSubtrings
//
//  Created by Anas Saeed on 10/20/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
std::string string;
bool checkForSubstring(std::string one, std::string two);
std::string smallestSubstring(std::string one, std::string two){
    std::vector<std::string> output;
    for (int i = 0; i <= one.length()-two.length(); i++) {
        std::string temp;
        string = "";
        for (int j = i; j < one.length(); j++) {
            temp = temp + one[j];
        }
        if (checkForSubstring(temp, two)) {
            output.push_back(string);
        }
    }
    std::string outputString = output[0];
    int len = output[0].length();
    for (auto x:output){
        if (x.length() < len) {
            outputString = x;
            len = x.length();
        }
    }
    return outputString;
}
bool checkForSubstring(std::string one,std::string two){
    int counter = 0;
    string = "";
    std::vector<int> done;
    for (int i = 0; i < two.length(); i++) {
        
    }
     return false;
}
int main(int argc, const char * argv[])
{
    std::cout << smallestSubstring("This is a test string", "is ");//tist
    return 0;
}

