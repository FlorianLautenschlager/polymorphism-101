//
//  main.cpp
//  coercion
//
//  Created by Florian Lautenschlager on 4/28/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <iostream>
#include <typeinfo>

void print(int integer){
    std::cout << "Argument is " << integer << " is of type " << typeid(integer).name() << std::endl;
}

int main(int argc, const char * argv[]) {
    
    print(5.3); //Implizit: Verengen (narrowing) double -> int
    print(true); //Implizit: Erweitern (widening) bool -> int
    print((int) false); //Explizit: Erweitern (widening) bool -> int
    
    return 0;
}
