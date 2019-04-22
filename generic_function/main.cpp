//
//  main.cpp
//  generic_function
//
//  Created by Florian Lautenschlager on 4/22/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <iostream>
using std::cout;

template <typename T>
T larger(T first, T second){
    return (first > second)? first: second;
}
template <typename T>
void print(T result){
    cout << result << "\n";
}

int main(){
    print(larger<int>(3, 7)); //int -> 7
    print(larger<double>(4.2, 9.1)); // double -> 9.1
    print(larger<char>('a', 'x')); // char -> x
    return 0;
}
