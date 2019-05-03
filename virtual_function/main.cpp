////  main.cpp//  virtual_function////  Created by Florian Lautenschlager on 4/22/19.//  Copyright � 2019 Florian Lautenschlager. All rights reserved.//#include <iostream>using std::cout;using std::endl;//TODO: First we need to define the animal interface (type)class Animal {public:    virtual void makeSomeNoise() = 0;};//TODO: Second lets define a subtype for that type.class DoggyDog : public Animal {public:    void makeSomeNoise(){        cout << "Doggy makes bau wau" << endl;    }};//TODO: Second lets create another a subtypeclass CattyCat : public Animal {public:    void makeSomeNoise() {        cout << "Catty makes miau miau" << endl;    }};int main(int argc, const char *argv[]) {    Animal *animal;    DoggyDog dog;    CattyCat cat;    animal = &dog;    animal->makeSomeNoise(); //Doggy makes bau wau    animal = &cat;    animal->makeSomeNoise(); //Catty makes miau miau    return 0;}