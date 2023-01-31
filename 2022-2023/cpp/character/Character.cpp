#include "Character.h"
#include <string>

// Constructors
///default
Character::Character(){
    speed_ = 0.0;
    max_speed_ = 10.0;
}
///yoshi
Yoshi::Yoshi(int number_of_crests):Character(), number_of_crests_(number_of_crests = 3){
}


// Accessors
float Character::max_speed() const{
    return max_speed_;
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
