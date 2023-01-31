#include <iostream>
#include <string>
#include "Character.h"

using std::cout;
using std::endl;

int main(){
    Mario aaa;
    Yoshi bbb;
    //cout << "whatami"<< aaa.WhatAmI() << endl;
    
    float vitesseM = aaa.speed();
    cout<< "vitesse initiale de "<<aaa.WhatAmI()<<" "<<vitesseM<<endl;
    aaa.Accelerate();
    vitesseM = aaa.speed();
    cout<< "vitesse finale de "<<aaa.WhatAmI()<<" "<<vitesseM<<endl;

    float vitesseY = bbb.speed();
    cout<< "vitesse initiale de "<<bbb.WhatAmI()<<" "<<vitesseY<<endl;
    aaa.Accelerate();
    vitesseY = bbb.speed();
    cout<< "vitesse finale de "<<bbb.WhatAmI()<<" "<<vitesseY<<endl;



    /*
    std::string nomM = aaa.WhatAmI();
    cout<< "nom de Mario "<<nomM<<endl;
    std::string nomY = bbb.WhatAmI();
    cout<< "nom de Yoshi "<<nomY<<endl;
    */
    return 0;
}