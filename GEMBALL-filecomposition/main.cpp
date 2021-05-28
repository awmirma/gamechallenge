
//  main.cpp
//  gamechallenge
//
//  Created by amir  on 5/13/21.
//
// changes by javads on 5/27/21.

#include <iostream>
#include <ctime>
#include <string>
#include <limits>
#include <cstdlib>
#include "interface.h"

using namespace std ;

//movements functions
bool pass (team player[2],int first, int second)
{
    static int accuracy ;
    char react_move ;
    
    player[first].GEMS-=player[first].move.pass_GEM;
    if(player[first].GEMS < 0)
    {
        cout << "you cannot pass :(  \n\n" ;////
        player[second].GEMS+=player[second].move.pass_GEM;
        return false ;
    }
    else
    {
        cout << player[second].name<<"'s turn \t\t\t\t"<<player[second].GEMS;////
        cout << "\n--------------------------------\n";
        cout << "press < T > key to tackle or < L > to let ball go ...\n";
        cout << "--------------------------------\n";
        
        cin >> react_move ;
        
        if (react_move=='L'||react_move=='l')
            return true ;
        else
        {
            player[second].GEMS-=player[second].move.tackle_GEM;
            if(player[second].GEMS < 0){
                cout << "you cannot tackle :(  \n\n" ;////
                player[second].GEMS+=player[second].move.tackle_GEM;
                return true ;
            }
            else////
            {
            accuracy = (player[first].move.pass_accuracy/2+(100-player[second].move.tackle_accuracy)/2);// change it ..
            if (rand()%100<=accuracy)
                return true ;
            else
                return false ;
            }
        }
    }
}


bool dribble (team player[2],int first, int second)
{
    static int accuracy ;
    char react_move ;
    
    player[first].GEMS-=player[first].move.dribble_GEM;
    if(player[first].GEMS < 0)
    {
        cout << "you cannot dribble :(  \n\n" ;
        player[first].GEMS+=player[first].move.dribble_GEM;
        return false ;
        
    }
    else
    {
        cout << player[1].name<<"'s turn \t\t\t\t gems = "<<player[second].GEMS;////
        cout << "\n--------------------------------\n";
        cout << "press < T > key to tackle or < L > to let ball go ...\n";
        cout << "--------------------------------\n";
        cin >> react_move ;
        if (react_move=='L'||react_move=='l')
            return true ;
        else
        {
            player[second].GEMS-=player[second].move.tackle_GEM;
            if(player[second].GEMS < 0){
                cout << "you cannot tackle :(  \n\n" ;////
                return true ;
            }
            else
            {
                accuracy = (player[first].move.dribble_accuracy/2+(100-player[second].move.tackle_accuracy)/2);// change it ..
                if (rand()%100<=accuracy)
                    return true ;
                else
                    return false ;
            }
        }
    }
}

bool shoot (team player[2],int first, int second)
{
    static int accuracy ;
    char react_move ;
    
    player[first].GEMS-=player[first].move.shoot_GEM;
    
    if(player[first].GEMS < 0)
    {
        cout << "you cannot shoot :( \n\n" ;
        player[first].GEMS+=player[first].move.shoot_GEM;
        return false;
    }
    else
    {
        cout << player[second].name<<"'s turn \t\t\t\t gems = "<<player[second].GEMS;
        cout << "\n--------------------------------\n";
        cout << "press < S > key to save ...\n";
        cout << "--------------------------------\n";
        
        cin >> react_move ;
        
        if (react_move=='S'||react_move=='s')
        {
            player[second].GEMS-=player[second].move.save_GEM;
            if(player[second].GEMS < 0)
            {
                player[second].GEMS+=player[second].move.save_GEM;
                cout << "you cannot save :(  \n\n" ;
                  if (rand()%100<=(player[first].move.shoot_accuracy))
                    return true ;
                else
                    return false ;
            }
            accuracy = (player[first].move.shoot_accuracy/2+(100-player[second].move.save_accuracy)/2);// change it ..
            
            
            if (rand()%100<=accuracy)
                return true ;
            else
                return false ;
        }
        else
        {
            if (rand()%100<=(player[first].move.shoot_accuracy))
                return true ;
            else
                return false ;
        }
    }
}


// operator overloading

istream &operator >> (istream &input , team &player_team )
{
    int choose ;
   input >> player_team.name ;
    cout << "--------\n";// three option
    input >> choose ;
    player_team.move.default_accuracy(choose);
    return input ;
}

// changing the team which has the ball
void change (int *first , int *second )
{
    *second = *first + *second ;
    *first = *second - *first ;
    *second = *second - *first ;
}


int main()
{
    srand(time(0));
    
    string menu ;
    int input_team_num ;
    int first ;
    int second ;
    int stage ;
    int round ;
    char input ;
    char movement ;
    string entre ;
    
    team player_team[2];// player 1 : player_team[0] , player 2 : player_team[1]
    
    // explaining the game
    cout << "\n\t\t\tWELCOME TO GEMBALL\n\nTo receive instruction press 9 otherwise press any key and entre ..\n";
    cin >> menu ;
    if (menu == "9")
    {
        cout << "-----\n";// the instuction
        cout << "press entre to continue\n";
        cin.ignore();
        cin.ignore(numeric_limits<streamsize>::max(), '\n' );
    }
    do
    {
        
        // print the team list
        
        cout << "\nTEAM LIST :";
        cout << "\n\n\t1.Real madrid           authority : defend        overall : 87%";// change the overall
        cout << "\n\n\t2.Fc barcelona          authority : attack        overall : 83%";
        cout << "\n\n\t3.Juventus              authority : defend        overall : 84%";
        cout << "\n\n\t4.Bayern munchen         authority : defend        overall : 92%";////
        cout << "\n\n\t5.Paris saint-germain   authority : attack        overall : 88%";
        cout << "\n\n\t6.My own team \n\n";
        
        cout << "Choose the first team (player 1)\n";
        
        cin >> input_team_num ;
        if ( input_team_num == 6)
            cin >> player_team[0] ;
        else
            player_team[0].complete(input_team_num);
        
        
        cout << "Choose the second team (player 2)\n";
        cin >> input_team_num ;
        if ( input_team_num ==6)
            cin >> player_team[1] ;
        else
            player_team[1].complete(input_team_num);
        
        cin.ignore();
        cout << "Press entre to START\n" ;
        cin.ignore(numeric_limits<streamsize>::max(), '\n' );
        
        if (rand()%2 == 0)
        {
            cout << "Team 1 starts\n";
            first = 0 ;
            second = 1 ;
        }
        else
        {
            cout << "Team 2 starts\n";
            first = 1 ;
            second = 0 ;
        }
        do
        {
            for ( round = 1 ; round <= 4 ; round ++ )
            {
                cout << "ROUND " << round << endl ;
                
                player_team[0].add_gems(round);
                player_team[1].add_gems(round);
                
                cout <<"player1 ("<< player_team[0].name_getter()<<") got "<<player_team[0].GEM_getter()<<" gems \n";
                cout <<"player2 ("<< player_team[1].name_getter()<<") got "<<player_team[1].GEM_getter()<<" gems \n";
                
                    for ( stage = 1 ; stage<=6 ; stage++ )
                    {
                        cout << "\t\t\tstage : "<< stage << endl;
                        if (stage == 6)// shoooot stage :)
                        {
                            cout << player_team[first].name_getter()<<"'s turn \t\t\t\t gems = "<<player_team[first].GEM_getter();////
                            cout << "\n---------------------------------------\n";
                            cout << "Press < S > to shoot , if you press other key , you 'll lose the ball.. \n";////
                            cout << "-----------------------------------------\n";
                            
                            cin >> movement ;// first player move
                            if ( movement == 'S' || movement == 's' )
                            {
                                if (shoot(player_team, first, second)==false)
                                    cout << player_team[second].name_getter()<<"\n saved the ball .. \n";
                    
                                else
                                {
                                    player_team[first].goal_setter();
                                    cout << "\n\n\t\tGOOOOOOOOOOOOOOOOOOOOOL\n\n";
                                }
                            }
                            
                            break;
                        }
                        cout << player_team[first].name_getter()<<"'s turn \t\t\t\t gems = "<<player_team[first].GEM_getter();////
                        cout << "\n-----------------------------------------\n";
                        cout << "Press < P > to pass or < D > to dribble , if you press other key , you 'll lose the ball \n"; ////
                        cout << "-----------------------------------------\n";
                        
                        cin >> movement ;// first player move
                        
                        if (movement == 'P' || movement == 'p')
                        {
                            if( pass(player_team,first,second) == false )
                            {
                                change(&first,&second);
                            }
                        }
                        else
                        {
                            if (movement == 'D' || movement == 'd')
                            {
                                if( dribble(player_team,first,second) == false )
                                {
                                    change(&first,&second);
                                }
                            }
                            else
                            {
                            change(&first,&second);
                            }
                        }
                    }
                //change(&first,&second);
                
                cout << player_team[0].name_getter() << "\t" <<player_team[0].goal_getter()<<"\t-\t";
                cout << player_team[1].goal_getter() << "\t" <<player_team[1].name_getter()<<endl;
                
                cout << "ROUND " << round << " finished \npress < C > to continue \n";
                cin >> movement ;
            }
            if (player_team[0].goal_getter()>player_team[1].goal_getter())
                cout << player_team[0].name_getter()<<" won \n";
            else if (player_team[1].goal_getter()>player_team[0].goal_getter())
                cout << player_team[1].name_getter()<<" won \n";
            else
                cout << "------\n";
            
            cout << "-----\n";//rematch ...
            cout << "-----\n";//selecting teams ...
            cout << "-----\n";//finish ...
                
            cin >> input ;
            
        }while(input == 'R' || input == 'r');// rematch ..
    }while(input == 'S' || input == 's');// selecting teams ..
    
    cout << "------\n";
    
    return 0;
}
