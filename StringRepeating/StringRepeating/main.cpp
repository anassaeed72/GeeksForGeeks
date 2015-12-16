//
//  main.cpp
//  StringRepeating
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
std::string convert(std::string input){
    std::string output;
    char appender = 'a';
//    int times = 0;
    std::string timesString;
    bool first = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >57) {
            if (first == false) {
                 appender = input[i];
                first = true;
                continue;
            }
            int times = atoi(timesString.c_str());
            for ( int i = 0; i < times;i++){
                output = output + appender;
            }
            timesString = "";
             appender = input[i];
        }
        else {
            timesString = timesString+ input[i];
        }
    }
    int times = atoi(timesString.c_str());
    for ( int i = 0; i < times;i++){
        output = output + appender;
    }

    return output;
}
int main(int argc, const char * argv[])
{
    std::string input = "b3c6d15";
//    std::cin >> input;
    input = convert(input);
    std::cout << input;
      return 0;
}

