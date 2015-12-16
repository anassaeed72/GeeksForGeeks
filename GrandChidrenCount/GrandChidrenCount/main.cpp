//
//  main.cpp
//  GrandChidrenCount
//
//  Created by Anas Saeed on 11/11/2014.
//  Copyright (c) 2014 Anas Saeed. All rights reserved.
//

#include <iostream>
#include <vector>
class Progeny{
public:
    std::string parent;
    std::string child;
    Progeny(std::string _child, std::string _parent){
        child = _child;
        parent = _parent;
    }
};
int countGrandChildren(std::vector<Progeny> input,std::string grandFather){
    int count = 0;
    std::vector<std::string> children;
    for( auto x: input){
        if (x.parent == grandFather) {
            children.push_back(x.child);
        }
    }
    for (auto x: input){
        for ( auto y :children){
            if (x.parent == y) {
                count++;
            }
        }
    }
    return count;
}
//<”luke”, “shaw”>
//<”wayne”, “rooney”>
//<”rooney”, “ronaldo”>
//<”shaw”, “rooney”>
int main(int argc, const char * argv[])
{
    Progeny one("luke","shaw");
    Progeny two("wayne","rooney");
    Progeny three("rooney","ronaldo");
    Progeny four("shaw","rooney");
    std::vector<Progeny> vec;
    vec.push_back(one);
    vec.push_back(two);
    vec.push_back(three);
    vec.push_back(four);
    std::cout << countGrandChildren(vec, "ronaldo");
    // insert code here...
//    std::cout << "Hello, World!\n";
    return 0;
}

