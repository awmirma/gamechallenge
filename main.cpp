//
//  main.cpp
//  gamechallenge
//
//  Created by amir  on 5/13/21.
//

#include <iostream>

using namespace std ;

class team ;
class movements
{
    friend class team ;
    friend istream &operator >> (istream &input , team &player_team ) ;
    public :
    
    void default_accuracy (int option)
    {
        switch (option)
        {
            case 1 :// exellent at forward
                shoot_accuracy = 00000 ; // change it ...
                pass_accuracy = 00000 ; // change it ...
                tackle_accuracy = 00000 ; // change it ...
                cross_accuracy = 00000 ; // change it ...
                save_accuracy = 00000 ; // change it ...
                break;
                
            case 2 :// exellent at defend
                shoot_accuracy = 00000 ; // change it ...
                pass_accuracy = 00000 ; // change it ...
                tackle_accuracy = 00000 ; // change it ...
                cross_accuracy = 00000 ; // change it ...
                save_accuracy = 00000 ; // change it ...
                break;
                
            case 3 :// good at both
                shoot_accuracy = 00000 ; // change it ...
                pass_accuracy = 00000 ; // change it ...
                tackle_accuracy = 00000 ; // change it ...
                cross_accuracy = 00000 ; // change it ...
                save_accuracy = 00000 ; // change it ...
                break;
                
            default:
                break;
        }
    }
    
    private :
    
    // accuracy
    int shoot_accuracy ;
    int pass_accuracy ;
    int tackle_accuracy ;
    int cross_accuracy ;
    int save_accuracy ;
    
    // score
    int shoot_score = 0000 ; //  change it ...
    int pass_score  = 0000 ;  //  change it ...
    int tackle_score  = 0000 ;  //  change it ...
    int cross_score  = 0000 ; //  change it ...
    int save_score  = 0000 ; //  change it ...
    
};

class team
{
    friend istream &operator >> (istream &inputt , team &player_team ) ;
    friend class movements ;
//    friend void creating_teams ();
    friend void selecting_team (team player_team) ;
    public :
    
    void complete (int team_number)
    {
        switch ( team_number )
        {
            case 1 ://team 1
                move.shoot_accuracy = 00000 ; // change it ...
                move.pass_accuracy = 00000 ; // change it ...
                move.tackle_accuracy = 00000 ; // change it ...
                move.cross_accuracy = 00000 ; // change it ...
                move.save_accuracy = 00000 ; // change it ...
                break;
                
            case 2 ://team 2
                move.shoot_accuracy = 00000 ; // change it ...
                move.pass_accuracy = 00000 ; // change it ...
                move.tackle_accuracy = 00000 ; // change it ...
                move.cross_accuracy = 00000 ; // change it ...
                move.save_accuracy = 00000 ; // change it ...
                break;
            case 3 ://team 3
                move.shoot_accuracy = 00000 ; // change it ...
                move.pass_accuracy = 00000 ; // change it ...
                move.tackle_accuracy = 00000 ; // change it ...
                move.cross_accuracy = 00000 ; // change it ...
                move.save_accuracy = 00000 ; // change it ...
                break;
            case 4 ://team 4
                move.shoot_accuracy = 00000 ; // change it ...
                move.pass_accuracy = 00000 ; // change it ...
                move.tackle_accuracy = 00000 ; // change it ...
                move.cross_accuracy = 00000 ; // change it ...
                move.save_accuracy = 00000 ; // change it ...
                break;
            case 5 ://team 5
                move.shoot_accuracy = 00000 ; // change it ...
                move.pass_accuracy = 00000 ; // change it ...
                move.tackle_accuracy = 00000 ; // change it ...
                move.cross_accuracy = 00000 ; // change it ...
                move.save_accuracy = 00000 ; // change it ...
                break;
            default:
                break;

        }
    }
    
    private :
    
    string name ;
    
    movements move ;
    
    
};


//void creating_teams ()
//{
//
//}


void selecting_team (team player_team)
{
//
//    string default_teams[6]; // default_teams[0] : FC barcelona
    int input ;
    cin >> input ;
    if ( input==6)
        cin >> player_team ;
    else
        player_team.complete(input);
}

istream &operator >> (istream &input , team &player_team )
{
    int chose ;
    input >> player_team.name ;
    cout << "--------\n";// three option
    input >> chose ;
    player_team.move.default_accuracy(chose);
    return input ;
}

int main()
{
    
    
    team player_team[2];// player 1 : player_team[0] , player 2 : player_team[1]
//    team a ;
    
    string default_teams[6]; // default_teams[0] : FC barcelona
    
    cout << " --------\n";// explaining the game
    
//    while ()
//    {
    
    cout << " --------\n";// team list
    
    selecting_team ( player_team[0]) ;
    selecting_team ( player_team[1]) ;

//    cin >> a ;
//    player_team[0] = a ;
    
//    cin >> a ;
//    player_team[1] = a ;
    
    return 0;
}
