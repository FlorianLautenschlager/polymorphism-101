//
//  main.cpp
//  function_overloading
//
//  Created by Florian Lautenschlager on 4/22/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <iostream>
using std::cout;

void print(int  i){
    cout << "int: " << i << std::endl;
}
void print(std::string s){
    cout << "string: " << s << std::endl;
}
int main(int argc, const char * argv[]) {
    print(5); // int: 5
    print("5"); //string: 5
    return 0;
}
