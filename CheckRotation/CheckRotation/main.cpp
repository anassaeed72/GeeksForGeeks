//
//  main.cpp
//  CheckRotation
//
//  Created by Anas Saeed on 10/12/14.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
bool checkRotationMethodOne(std::string one,std::string two){
    one = one + one;
    for (int i = 0; i < one.length(); i++) {
        if (one[i] == two[0]) {
            unsigned int index =i;
            int check = 0;
            for (int j =0; j < two.length(); j++) {
                if (one[index] == two[j]) {
                    check++;
                }
                index++;
            }
            if (check == two.length()) {
                return true;
            }
        }
    }
    return false;
}
bool checkRotationMethodTwo(std::string one, std::string two){
    for (int i = 0; i < one.length(); i++) {
        if (one[i] == two[0]) {
            unsigned int index = i;
            int check = 0;
            for (int j = 0; j < two.length(); j++) {
                if (one[index++%one.length()] == two[j]) {
                    check++;
                }
            }
            if (check == two.length()) {
                return true;
            }
        }
    }
    return false;
}
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << checkRotationMethodTwo("anas","asxan");
    return 0;
}

