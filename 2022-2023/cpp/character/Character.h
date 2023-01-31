#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character{
    public:
    // Constructors
    Character(); ///default


    // Function members
    void Accelerate();
    void Break();
    virtual std::string WhatAmI() const = 0;

    // Inline getter
    float speed() const;

    // Destructor
    ~Character();

    protected:
    float speed_;
    float max_speed_;
};

class Mario : public Character{
    public:

    std::string WhatAmI() const{
    return "Mario";
};
};

class Yoshi : public Character{
    public:

    void Accelerate(){
    if(speed_<max_speed_){
        speed_+=2;
    }
};
    std::string WhatAmI() const{
    return "Yoshi";
};
};


inline float Character::speed() const{
    return speed_;
};

#endif