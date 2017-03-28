/* 
 * File:   main.cpp
 * Author: Christian Beebe  
 * Created on 20170328
 * Purpose:  Simulate a Game of Craps
 */

//System Libraries Here
#include <iostream>   //In-Out
#include <ctime>      //Time for RNG
#include <cstdlib>    //Srand to set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seed the RNG
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned int nThrws,wins=0,losses=0;
    //Input or initialize values Here
    cout<<"Input the number of games you wish to play"<<endl;
    cin>>nThrws;
    
    //Play the game
    for(int game=1;game<=nThrws;game++){
        //Throw dice and sum
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum1=die1+die2;
        //Determine wins and losses
        if (sum1==7||sum1==11)wins++;
        else if (sum1==2||sum1==3||sum1==12)losses++;
        else{
               //Loop until  7 or pervious sum is thrown
                bool thrwAgn=true;
                do{
                    //Throw the dice again
                    char die1=rand()%6+1;
                    char die2=rand()%6+1;
                    char sum2=die1+die2;
                    if(sum2==7){
                        losses++;
                        thrwAgn=false;
                    }else if(sum1==sum2){
                        wins++;
                        thrwAgn=false;
                    }
                }while(thrwAgn);
        }                
    }
            
    //Process/Calculations Here
    cout<<"Total number of Games = "<<nThrws<<endl;
    cout<<"Number of games won = "<<wins<<endl;
    cout<<"Number of games lost = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    //Output Located Here

    //Exit
    return 0;
}

