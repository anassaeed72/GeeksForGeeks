//
//  main.cpp
//  StringModder
//
//  Created by Anas Saeed on 17/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
std::string stringModder(std::string string, int number){
    std::string output;
    int count  = 0;
    char current = string[0];
    for (int i = 0; i < string.length(); i++) {
        if (string[i] != current) {
            if (count> number) {
                count = count%number;
                if (count == 0) {
                    count  = 1;
                }
            }
            for (int j = 0; j < count; j++) {
                output = output + current;
            }
            count  = 0;
            current = string[i];
        }
        count++;
    }
    if (count> number) {
        count = count%number;
        if (count == 0) {
            count  = 1;
        }
    }
    for (int j = 0; j < count; j++) {
        output = output + current;
    }

    return output;
}
int main(int argc, const char * argv[])
{
    std::cout << stringModder("aabbccc", 2);

    return 0;
}

