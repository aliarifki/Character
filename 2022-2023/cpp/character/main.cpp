#include <iostream>
#include <string>
#include <vector>
#include "Character.h"

using std::cout;
using std::endl;

int main(){

    //Creation du container (sous forme de tableau dynamique)
    std::vector<Character*> course;
    course.push_back(new Mario);
    course.push_back(new Yoshi);
    
    //On simule une course de vitesse ou le premier qui atteint la vitesse maximale a gagne
    Character* gagnant;
    bool finDeLaCourse(false);
    int tour(1);

    //Deroulement de la course
    while(finDeLaCourse==false){
        cout<<"Tour "<<tour<<endl;
        for(Character* n : course){
            float vitesse = n->speed();
            std::string nom = n->WhatAmI();
            cout<<"Vitesse de "<< nom <<": "<<vitesse<<endl;
            if(vitesse==n->max_speed()){
                finDeLaCourse=true;
                gagnant = n;
            }
            n->Accelerate();
        }
        tour++;
    }

    //Destruction des pointeurs
    for(Character* n : course){
    delete n;
    }

    return 0;
}