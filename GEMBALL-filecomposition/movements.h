

#ifndef movements_h
#define movements_h
#include <iostream>
using namespace std ;

class team ;
class movements
{
    friend class team ;
    friend istream &operator >> (istream &input , team &player_team ) ;
    friend bool pass (team player[2],int first, int second);
    friend bool dribble (team player[2],int first, int second);
    friend bool shoot (team player[2],int first, int second) ;
    public :
    
    void default_accuracy (int );
    
    private :
    
    // accuracy
    int shoot_accuracy ;
    int pass_accuracy ;
    int tackle_accuracy ;
    int dribble_accuracy ;
    int save_accuracy ;
    
    // GEM
    int shoot_GEM = 3 ;
    int pass_GEM = 1 ;
    int tackle_GEM = 2 ;
    int dribble_GEM = 2 ;
    int save_GEM = 3 ;
    
};


#endif /* movements_h */
