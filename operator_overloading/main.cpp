//
//  main.cpp
//  operator_overloading
//
//  Created by Florian Lautenschlager on 4/22/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include  <iostream>
using std::vector;

class TimeSeries {
private:
    vector<int> t; vector<int> v;
public:
    // This is automatically called when '+' is used with
    // between two TimeSeries objects
    TimeSeries operator + (TimeSeries const &other) {
        TimeSeries result;
        
        vector<int> allT;
        allT.reserve(t.size() + other.t.size());
        allT.insert(t.end(), other.t.begin(), other.t.end());
        result.t = allT;
        
        vector<int> allV;
        allV.reserve(v.size() + other.v.size());
        allT.insert(v.end(), other.v.begin(), other.v.end());
        result.v = allV;
        
        //.. do also for v
        
        return result;
    }
    void print() {
        for (int t : t) std::cout << t << " ";
        for (int v : v) std::cout << v << " ";
    }
};

int main(int argc, const char * argv[]) {
    std::cout << "Nice operator overloading \n";
    TimeSeries first, second, third;
    third = first + second;
    third.print();
    return 0;
}
