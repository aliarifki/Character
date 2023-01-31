#include "Character.h"
#include <string>

// Constructors
///default
Character::Character(){
    speed_ = 0.0;
    max_speed_ = 10.0;
}


// Function members character
void Character::Accelerate(){
    if(speed_<max_speed_){
        speed_++;
    }
}

void Character::Break(){
    if(speed_>0){
        speed_--;
    }
}



// Destructor
Character::~Character(){

}
