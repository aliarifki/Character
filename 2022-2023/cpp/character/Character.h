#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character{
    public:
    // Constructors
    Character(); ///default

    // Accessors
    float max_speed() const;

    // Function members
    virtual void Accelerate();
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
    // Function members
    std::string WhatAmI() const{
    return "Mario";
    };
};



class Yoshi : public Character{
    public:
    // Constructor
    Yoshi(int number_of_crests=3);

    // Function members
    void Accelerate(){
    if(speed_<max_speed_){
        speed_+=2;
    }
    };
    
    std::string WhatAmI() const{
    std::string nb = std::to_string(number_of_crests_) ;
    return nb + " crested Yoshi";
    };

    protected:
    int number_of_crests_;

};


inline float Character::speed() const{
    return speed_;
};

#endif