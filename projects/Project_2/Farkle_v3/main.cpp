/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170531
 * Purpose: Farkle Game Project
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <ctime>    //Time for RNG
#include <cstdlib>  //Library for RNG
#include <fstream>  //File I/O
#include <string>   //Strings
#include <iomanip>  //In/Out Manipulation
#include <cmath>    //Math Library
using namespace std; //Name-space under which system libraries exist

//Global Constants

const float PERCENT=100.f; //Percent Conversion

//Function Prototypes

void score (int [],bool &,bool &,bool &,bool &,bool &,bool &,bool &,bool &);
int sort (int []);
int rollDie(int []);
void prntDie(int []);

//Execution begins here

int main(int argc, char** argv) {
    
    //Set RNG
    
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    
    ofstream out;
    unsigned short choice; //User input choice to choose game length
    int winScr;  //Winning Score both players are trying to reach
    int tempScr=0,scores[1][2]={}; //Temporary Score which is added to both scores
    int roll[6]; //Array of the rolls
    char start;  //char input to stop game from finishing too quickly
    char reRoll; //Option for reroll
    
    //Initialize Variables
    
    string outName="RollStats.dat"; //Name of Out file
    out.open(outName.c_str());  //Open out file
    
    //Starting Screen
    
    cout<<"!!! You are now playing Farkle !!!"<<endl;
    while(choice<1||choice>3){
        cout<<"Choose the number of the score you would like to play to."<<endl;
        cout<<"1 :  5000   (Short Game)"<<endl;
        cout<<"2 : 10000  (Medium Game)"<<endl;
        cout<<"3 : 20000    (Long Game)"<<endl;
        cin>>choice;
        switch(choice){
            case 1: winScr=5000;break;
            case 2: winScr=10000;break;
            case 3: winScr=20000;break;
            default:cout<<"You did not input a correct choice, Try again"<<endl;
        }
    };
    do{
        for(int i=1;i<=2;i++){
            tempScr=0;
            cout<<"Player "<<i<<"'s Turn"<<endl;
            cout<<"Input any key to roll"<<endl;
            cin>>start;
            cout<<"You rolled "<<endl;
            rollDie(roll);

        //Bubble sorting method to put the array in increasing order

        sort(roll);

        //Show the results of the Die
        
        prntDie(roll);
        
        //Re-roll
        
        reRoll=0;
        do{
            cout<<"Would you like to re-roll any die?    y/n"<<endl;
            cin>>reRoll;
        }while(reRoll!='y'&&reRoll!='n');
        
        if(reRoll=='y'){
            cout<<"Select which die you would like to re-roll.   1-6"<<endl;
            cout<<"Or you may press 0 to end your selection."<<endl;
            cout<<"*Press enter after each selection"<<endl;
            do{
            cin>>choice;
                switch(choice){
                    case 6:roll[5]=0;break;
                    case 5:roll[4]=0;break;
                    case 4:roll[3]=0;break;
                    case 3:roll[2]=0;break;
                    case 2:roll[1]=0;break;
                    case 1:roll[0]=0;break;
                }    
            }while(choice!=0);
            for(int t=0;t<=5;t++){
                if(roll[t]==0){
                    roll[t]=rand()%6+1;
                }
            }
        }
        
        //Print new dice results
        
        sort(roll);
        prntDie(roll);

        //Scoring Check
        bool straight=true;
        bool sixsame=true;
        bool fivsame=false;
        bool forsame=false;
        bool thrsame=false;
        bool onefive=false;
        bool thrpair=true;
        bool twotrip=false; 
    
        score(roll,straight,sixsame,fivsame,forsame,thrsame,onefive,thrpair,twotrip);
        
        //Award Points
        
        if(straight==true){
            tempScr+=1500;
            cout<<"You rolled a straight.         +1500 Points"<<endl;
        }
        else if(sixsame==true){
            tempScr+=3000;
            cout<<"You rolled a 6 of a kind       +3000 Points"<<endl;
        }
        else if(twotrip==true){
            tempScr+=2500;
            cout<<"You rolled two triples         +2500 Points"<<endl;
        }
        else if(fivsame==true){
            tempScr+=2000;
            cout<<"You rolled a 5 of a kind       +2000 Points"<<endl;
        }
        else if(thrpair==true){
            tempScr+=1500;
            cout<<"You rolled three 2 pairs       +1500 Points"<<endl;
        }
        else if(forsame==true){
            tempScr+=1000;
            cout<<"You rolled a 4 of a kind       +1000 Points"<<endl;
        }
        else if(thrsame==true){
            tempScr+=500;
            cout<<"You rolled a 3 of a kind        +500 Points"<<endl;
        }
        else if(onefive==true){
                for(int n=0;n<6;n++){
                    if(roll[n]==1){
                        tempScr+=100;
                }
                    else if(roll[n]==5){
                        tempScr+=50;
                }
            }
            cout<<"You rolled a single 1's or 5's  +"<<tempScr<<" Points"<<endl;
        }
        //Show Current Scores of the Players
        
        if(i%2==0){
            scores[0][1]+=tempScr;
            cout<<"Current Score is "<<scores[0][1]<<endl<<endl;
        }
        else{
            scores[0][0]+=tempScr;
            cout<<"Current Score is "<<scores[0][0]<<endl<<endl;
        }

        }
        }while(scores[0][0]<winScr&&scores[0][1]<winScr);
        
    //Result Screen
        
    (scores[0][0]>scores[0][1])?cout<<"Player 1 Wins!    Congratulations!"<<endl:
        cout<<"Player 2 Wins!   Congratulations"<<endl;
    cout<<"Final Score was :"<<endl;
    cout<<"Player 1 : "<<scores[0][0]<<" points"<<endl;
    cout<<"Player 2 : "<<scores[0][1]<<" points"<<endl;
    
    //Output round results to a file
    
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Player 1 had a total score of "<<scores[0][0]<<" points."<<endl;
    out<<"Player 2 had a total score of "<<scores[0][1]<<" points."<<endl;
    out<<"There was a total of "<<scores[0][0]+scores[0][1]<<" points."<<endl;
    out<<"Player 1 had "<<static_cast<float>(scores[0][0])/static_cast<float>(scores[0][0]+scores[0][1])*PERCENT<<"% of the points"<<endl;
    out<<"Player 2 had "<<static_cast<float>(scores[0][1])/static_cast<float>(scores[0][0]+scores[0][1])*PERCENT<<"% of the points"<<endl;
    
    //Close Files
    
    out.close();
    
    //Exit stage right!
 return 0;  
}


void score (int roll[],bool &straight,bool &sixsame,bool &fivsame,bool &forsame,bool &thrsame, bool &onefive,bool &thrpair,bool &twotrip){
    //[1,2,3,4,5,6]
    for(int n=0;n<5;n++){
        if(roll[n]+1!=roll[n+1]){
             straight=false;
        }
    }

    //[x,x,x,x,x,x]
    for(int n=0;n<5;n++){
        if(roll[n]!=roll[n+1]){
            sixsame=false;
        }
    }

    //[x,x,x,x,x,z] or [z,x,x,x,x,x]   
    for(int n=0;n<2;n++){
        if(roll[n]==roll[n+1]&&roll[n+1]==roll[n+2]&&roll[n+2]==roll[n+3]&&roll[n+3]==roll[n+4]){
            fivsame=true;
        }
    }

    //[z,x,x,x,x,y] or [x,x,x,x,z,y] or [z,y,x,x,x,x]
    for(int n=0;n<3;n++){
        if(roll[n]==roll[n+1]&&roll[n+1]==roll[n+2]&&roll[n+2]==roll[n+3]){
            forsame=true;
        }
    }

    //[z,x,x,x,w,y][x,x,x,z,w,y][z,w,x,x,x,y][z,y,w,x,x,x]
    for(int n=0;n<4;n++){
        if(roll[n]==roll[n+1]&&roll[n+1]==roll[n+2]){
            thrsame=true;
        }
    }

    //Any 1's or 5's (1=100, 5=50) 
    for(int n=0;n<6;n++){
        if(roll[n]==1){
            onefive=true;
        }
        else if(roll[n]==5){
            onefive=true;
        }
    }

    //[x,x,y,y,z,z]
    for(int n=0;n<5;n=n+2){
        if(roll[n]!=roll[n+1]){
            thrpair=false;
        }
    }

    //[x,x,x,y,y,y]
    if(roll[0]==roll[2]&&roll[3]==roll[5]){
        twotrip=true;
    }
}


int sort (int r[]){
    for(int x=1;x<=6;x++){
        for(int t=0;t<5;t++){
            if(r[t+1]<r[t]){
                int holding=r[t];
                r[t]=r[t+1];
                r[t+1]=holding;
            }
        }
    }
}


int rollDie(int r[]){
    for(int d=0;d<6;d++){
        r[d]=rand()%6+1;
    }
}


void prntDie(int r[]){
    for(int y=0;y<=5;y++){
        cout<<r[y]<<" ";
    }
    cout<<endl;
}