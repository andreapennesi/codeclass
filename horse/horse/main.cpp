//
//  main.cpp
//  horse
//
//  Created by Andrea Pennesi on 16/11/2016.
//  Copyright © 2016 Andrea Pennesi. All rights reserved.
//

#include <iostream>
using namespace std;

class Animal
{
public:
    void setnumlegs (int x) {Numlegs = x;};
    int getNumlegs(){return Numlegs;};
    void setColor (string x) {Color = x;};
    string getColor () {return Color;};
    virtual void doaNoise()
    
    {
        cout << "Animal Noise!!!!!\n";
    }
    

private:
    int Numlegs;
    string Color;

};

class horse : public Animal
{
public:
    horse(){};
    ~horse(){};
    
    void doaNoise() override
    {
        cout << "neigh\n";
    }
};
        
class cat : public Animal
{
public:
    cat(){};
    ~cat(){};
            
void doaNoise() override
{
    cout << "meww\n";
}
};
int main(int argc, const char * argv[]){

    horse caden;
    cat lucy;
    caden.setnumlegs(4);
    caden.setColor("brown");
    lucy.setColor("orange and white");
    lucy.setnumlegs(4);
    
    cout << "The Cat goes ";
    lucy.doaNoise();
    cout << "The Horse says ";
    caden.doaNoise();
    
    
    
    return 0;
}
