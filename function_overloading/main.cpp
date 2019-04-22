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
    cout << "int: " << i << "\n";
}
void print(std::string s){
    cout << "string: " << s << "\n";
}
int main(int argc, const char * argv[]) {
    cout << "Nice function overloading \n";
    print(5);
    print("5");
    return 0;
}
