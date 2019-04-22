//
//  main.cpp
//  virtual_function
//
//  Created by Florian Lautenschlager on 4/22/19.
//  Copyright © 2019 Florian Lautenschlager. All rights reserved.
//

#include <iostream>

class Animal{
    
public:
    virtual void makeSomeNoise(){
        std::cout << "Animals make different noises" << "\n";
    }
};

class DoggyDog: public Animal{
public:
    void makeSomeNoise(){
        std::cout << "Doggy makes bau wau" << "\n";
    }
};

class CattyCat: public Animal{
public:
    void makeSomeNoise(){
        std::cout << "Catty makes miau miau" << "\n";
    }
};

int main(int argc, const char * argv[]) {
    Animal *animal = new Animal;
    animal -> makeSomeNoise(); //Animals make different noises
    
    DoggyDog dog;
    CattyCat cat;
    
    animal = &dog;
    animal -> makeSomeNoise(); //Doggy makes bau wau
    
    animal = &cat;
    animal -> makeSomeNoise(); //Catty makes miau miau
    
    return 0;
}
