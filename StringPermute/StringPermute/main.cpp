//
//  main.cpp
//  StringPermute
//
//  Created by Anas Saeed on 17/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
    int j;
    if (i == n){
        printf("%s\n", a);
        return;
    }
    else
    {
        for (j = i; j <= n; j++)
        {
            swap((a+i), (a+j));
            permute(a, i+1, n);
            swap((a+i), (a+j)); //backtrack
        }
    }
} 

#include <vector>
std::string swap1(std::string  input, int one, int two){
    char temp = input[two];
    input[two] = input[one];
    input[one] = temp;
    return input;
}

void permute1(std::string input, int one, int two){
   
    if (one == two) {
        std::cout << input << std::endl;
        return;
    }
    for (int i = one; one <= two; i++) {
        std::string temp  = swap1(input, one, i);
        permute1(temp, one+1, two);
        input = swap1(temp, one, i);
    }
}
int main(int argc, const char * argv[])
{

//    std::cout << swap("12345",0 , 4);
//    permute("ABC", 0, 2);
    char a[] = "ABC";
    permute(a, 0, 2);
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

