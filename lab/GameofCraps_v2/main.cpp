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
#include <fstream>    //File I/O
using namespace std;

//User Libraries Here

//Global Constants
const float PERCENT=100.0f; //Percentage converter

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Seed the RNG
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    ifstream in;
    unsigned int nThrws,wins=0,losses=0;
    //Input or initialize values Here
    in.open("GameInfo.dat");
    while(in>>nThrws);//Last value becomes the number of games
    
    //Play the game
    for(int game=1;game<=nThrws;game++){
        //Throw dice and sum
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum1=die1+die2;
        //Determine wins and losses
        switch(sum1){
            case 7:
            case 11:wins++;break;
            case 2:
            case 3:
            case 12:losses++;break;
            default:{
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
    }
            
    //Process/Calculations Here
    cout<<"Total number of Games = "<<nThrws<<endl;
    cout<<"Number of games won   = "<<wins<<endl;
    cout<<"Number of games lost  = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins+losses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(wins)/nThrws*PERCENT<<"%"<<endl;
    cout<<"Percentage losses     = "
            <<static_cast<float>(losses)/nThrws*PERCENT<<"%"<<endl;
    //Output Located Here

    //Exit
    in.close();
    return 0;
}

