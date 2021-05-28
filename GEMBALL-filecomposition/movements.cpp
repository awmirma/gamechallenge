
#include "movements.h"
#include <iostream>
using namespace std;

void movements::default_accuracy (int option)
{
    switch (option)
    {
        case 1 :// exellent at attack
            shoot_accuracy = 86 ;
            pass_accuracy = 62 ;
            tackle_accuracy = 79 ;
            dribble_accuracy = 89 ;
            save_accuracy = 87 ;
            
            break;
            
        case 2 :// exellent at defend
            shoot_accuracy = 89 ;
            pass_accuracy = 66 ;
            tackle_accuracy = 90 ;
            dribble_accuracy = 80 ;
            save_accuracy = 91 ;
            break;
            
        case 3 :// good at both
            shoot_accuracy = 88 ;
            pass_accuracy = 64 ;
            tackle_accuracy = 85 ;
            dribble_accuracy = 84 ;
            save_accuracy = 89 ;
            break;
            
        default:
            break;
    }
}
