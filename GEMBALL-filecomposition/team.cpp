

#include "team.h"

#include <iostream>
using namespace  std;


team::team () // constructor
{
<<<<<<< HEAD
    // initializing the attribute of each team
=======
	// initializing the attribute of each team
>>>>>>> f059ccb569008727654452fe11a239c4c2d4bc97
    GEMS = 0 ;
    goals  = 0;
    move.shoot_accuracy = 0 ;
    move.pass_accuracy = 0 ;
    move.tackle_accuracy = 0 ;
    move.dribble_accuracy = 0 ;
    move.save_accuracy = 0 ;
}


void team::complete (int team_number) // sets each team with its attributes' accuracy
{
    switch ( team_number )
    {
        case 1 : //team 1 (REAL MADRID)
            name = "REAL MADRID" ;
            move.shoot_accuracy = 88 ;
            move.pass_accuracy = 65 ;
            move.tackle_accuracy = 93 ;
            move.dribble_accuracy = 80 ;
            move.save_accuracy = 89 ;
            break;
        case 2 : //team 2 (FC BARCELONA)
            name = "FC BARCELONA" ;
            move.shoot_accuracy = 82 ;
            move.pass_accuracy = 66 ;
            move.tackle_accuracy = 72 ;
            move.dribble_accuracy = 85 ;
            move.save_accuracy = 90 ;
            break;
        case 3 : //team 3 (juventus)
            name = "juventus" ;
            move.shoot_accuracy = 85 ;
            move.pass_accuracy = 60 ;
            move.tackle_accuracy = 87 ;
            move.dribble_accuracy = 75 ;
            move.save_accuracy = 90 ;
            break;
        case 4 : //team 4 (bayern munchen)
            name = "bayern munchen" ;
            move.shoot_accuracy = 95 ;
            move.pass_accuracy = 70 ;
            move.tackle_accuracy = 90 ;
            move.dribble_accuracy = 87 ;
            move.save_accuracy = 95 ;
            break;
        case 5 : //team 5 (PARIS SAINT-GERMAIN)
            name = "PARIS SAINT-GERMAIN" ;
            move.shoot_accuracy = 90 ;
            move.pass_accuracy = 63 ;
            move.tackle_accuracy = 86 ;
            move.dribble_accuracy = 93 ;
            move.save_accuracy = 85 ;
            break;
        default:
            break;

    }
}



void team::add_gems(int round) // adding gems in the rounds
{
    if ( round <= 2 )
        GEMS+=10;
    else
        GEMS+=5;
}
