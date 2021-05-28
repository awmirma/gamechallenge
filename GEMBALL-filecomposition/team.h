
#ifndef team_h
#define team_h
#include <iostream>
#include "movements.h"
using namespace std ;


class team
{
    friend istream &operator >> (istream &inputt , team &player_team ) ;
    friend class movements ;
    friend void selecting_team (team player_team) ;
    friend bool pass (team player[2],int first, int second);
    friend bool dribble (team player[2],int first, int second);
    friend bool shoot (team player[2],int first, int second) ;
    public :
    
    team ();// constructor
    
    void complete (int );
    
    void add_gems(int );
    
    string name_getter(){return name;}
    
    int goal_getter(){return goals;}
    
    int GEM_getter(){return GEMS;}
    
    void goal_setter(){goals++;}
    
    private :
    
    string name  ;
    movements move ;
    int GEMS = 0 ;
    int goals = 0 ;
    
};

#endif /* team_h */
