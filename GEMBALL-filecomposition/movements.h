


#ifndef movements_h
#define movements_h
#include <iostream>
using namespace std ;

class team ; // each team in the game
class movements // movements of the game including pass , dribble , tackle , shoot and save
{
    friend class team ;
    friend istream &operator >> (istream &input , team &player_team ) ; // to enter the team that the player tends to make ( the team 's name and its authority )
    friend bool pass_and_tackle (team player[2],int first, int second); // used for pass and tackle
    friend bool dribble_and_tackle (team player[2],int first, int second); // used for dribble and tackle
    friend bool shoot_and_save (team player[2],int first, int second) ; // used for shoot and save
    public :
    
    void default_accuracy (int ); // the accuracy of the team made by player
    
    private :
    
    // accuracy    // probability of the movements veracity ( per 100 )
    int shoot_accuracy ;
    int pass_accuracy ;
    int tackle_accuracy ;
    int dribble_accuracy ;
    int save_accuracy ;
    
    // GEM     // the score that is substracted by the each movement
    int shoot_GEM = 3 ;
    int pass_GEM = 1 ;
    int tackle_GEM = 2 ;
    int dribble_GEM = 2 ;
    int save_GEM = 3 ;
    
};


#endif /* movements_h */
