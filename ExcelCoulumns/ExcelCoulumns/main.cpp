//
//  main.cpp
//  ExcelCoulumns
//
//  Created by Anas Saeed on 10/12/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
std::string reverser(std::string input){
    std::string output;
    for ( int i = input.length()-1; i >=0; i--) {
        output = output + input[i];
    }
    return output;
}
std::string excelCoulumnNumber(int input){
    std::string output;
    while (input>0) {
        int temp = input%26;
        if (temp == 0) {
            output = output + "Z";
        } else {
            char ch = 'A' + temp -1;
            output = output +ch;
        }
        input = input/26;
        if (temp == 0) {
            input--;
        }
    }
    return reverser(output);
}
int main(int argc, const char * argv[])
{
    std::cout <<excelCoulumnNumber(705);
    // insert code here...
    return 0;
}

