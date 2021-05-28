
#ifndef team_h
#define team_h
#include <iostream>
#include "movements.h"
using namespace std ;


class team // each team in the game
{
    friend istream &operator >> (istream &inputt , team &player_team ) ;// to enter the team that the player tends to make ( the team 's name and its authority )
    friend class movements ; // movements of the game including pass , dribble , tackle , shoot and save
    friend void selecting_team (team player_team) ;
    friend bool pass_and_tackle (team player[2],int first, int second); // used for pass and tackle
    friend bool dribble_and_tackle (team player[2],int first, int second); // used for dribble and tackle
    friend bool shoot_and_save (team player[2],int first, int second) ; // used for shoot and save
    public :
    
    team ();// constructor
    
    void complete (int ); // sets each team with its attributes' accuracy
    
    void add_gems(int ); // adding gems in the rounds
    
    string name_getter(){return name;} // shows the team name
    
    int goal_getter(){return goals;} // shows the goals that each team has scored
    
    int GEM_getter(){return GEMS;} // shows the gems that each team has 
    
    void goal_setter(){goals++;} // setting the goal that is being scored
    
    private :
    
    string name  ;
    movements move ; // movements of each team
    int GEMS = 0 ; 
    int goals = 0 ;
    
};

#endif /* team_h */
