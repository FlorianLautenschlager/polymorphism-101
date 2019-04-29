//
//  main.cpp
//  operator_overloading
//
//  Created by Florian Lautenschlager on 4/22/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using std::vector;

class TimeSeries {
private:
    vector<int> t; vector<int> v;
public:
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
};

int main(int argc, const char * argv[]) {
    TimeSeries first, second, third;
    third = first + second; //add first to second using '+'
    return 0;
}
