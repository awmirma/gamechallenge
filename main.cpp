//
//  main.cpp
//  gamechallenge
//
//  Created by amir  on 5/13/21.
//

#include <iostream>
#include <ctime>

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
    
    // GEM
    int shoot_GEM = 3 ; //  change it ...
    int pass_GEM = 1 ; //  change it ...
    int tackle_GEM = 2 ; //  change it ...
    int dribble_GEM = 2 ; //  change it ...
    int save_GEM = 3 ; //  change it ...
    
};

class GEM
{
    public :
    private :
};

class team
{
    friend istream &operator >> (istream &inputt , team &player_team ) ;
    friend class movements ;
//    friend void creating_teams ();
    friend void selecting_team (team player_team) ;
    public :
    
    bool set_as_first()
    {
        first = true;
        return first ;
    }
 
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
//    bool set_ball ()
//    {
//
//    }
    
    private :
    
    string name ;
    movements move ;
    bool first = false ;
    bool ball ;
    int GEMS = 10 ;
    
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
    srand(time(0));
    string menu ;
    char move ;
    
    team player_team[2];// player 1 : player_team[0] , player 2 : player_team[1]

//    string default_teams[6]; // default_teams[0] : FC barcelona
    
    // explaining the game
    cout << "\n\t\t\tWELCOME TO GEMBALL\n\nTo receive instruction press 9 otherwise press any key..\n\n";
    
    cin >> menu ;

    if (menu == "9")
    {
        cout << "-----\n";// the instuction
        cin >> menu ;
    }
    
    cout << "\n\tTEAM LIST : \n\n\t\t1.<team_1><authority><overall_accuracy>\n\n\t\t2.<team_1><authority><overall_accuracy>\n\n\t\t3.<team_1><authority><overall_accuracy>\n\n\t\t4.<team_1><authority><overall_accuracy>\n\n\t\t.<team_1><authority><overall_accuracy>\n\n\t\t6.my own team \n\n";// team list
    
    cout << "chose the first team (player 1)\n";
    selecting_team ( player_team[0]) ;
    cout << "chose the second team (player 2)\n";
    selecting_team ( player_team[1]) ;
    
    cout << "press entre to START\n";
    cin >> menu ;
    
    if (rand()%2 == 0)
    {
        player_team[0].set_as_first();
        cout << "team 1 starts\n";
    }
    else
    {
        player_team[1].set_as_first();
        cout << "team 2 starts\n";
    }
  
    for ( int round = 1 ; round <= 4 ; round ++ )
    {
        cout << "round " << round << endl ;
        if (round%2==1)// player 1 move
        {
            for ( int stage = 1 ; stage<=4 ; stage++ )
            {
                if (stage == 4)
                {
//                    shoot(team player_team);
                    break;
                }
            }
        }
        else// player 2 move
        {
            
        }
    }
    return 0;
}
