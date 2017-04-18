/* 
 * File:   CppTemplate
 * Author: Christian Beebe
 * Created on February 14, 2017, 5:13 PM
 * Purpose: Template to be utilized in creating
 *          solutions to problems in our CSC/CIS 5 
 *          class.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set RNG
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int winScr;
    int tempScr=0,score1=0,score2=0;
    int roll[6];
    //Initialize variables
    //Input data
    cout<<"You are now playing Farkle!"<<endl;
    cout<<"Input the target score for your game."<<endl;
    cin>>winScr;
    do{
    for(int i=1;i<=2;i++){
        tempScr=0;
        cout<<"Player "<<i<<"'s Turn"<<endl;
        cout<<"You rolled "<<endl;
        for(int d=0;d<6;d++){
            roll[d]=rand()%6+1;
            
            }
            int holding;
            int check=1;
            for(int x=1;x<=6&&check;x++){
                check=0;
                for(int t=0;t<5;t++){
                    if(roll[t+1]<roll[t]){
                        holding=roll[t];
                        roll[t]=roll[t+1];
                        roll[t+1]=holding;
                        check=1;
                }
            }
        }
    
    
    cout<<roll[0]<<" "<<roll[1]<<" "<<roll[2]<<" "<<roll[3]<<" "<<roll[4]<<" ";
    cout<<roll[5]<<endl;
    
    //Scoring
    bool straight=true;
        for(int n=0;n<5;n++){
            if(roll[n]+1!=roll[n+1]){
                straight=false;
            }
        }
    
    bool sixsame=true;
        for(int n=0;n<5;n++){
            if(roll[n]!=roll[n+1]){
                sixsame=false;
            }
        }

    bool fivesame=false;    
        for(int n=0;n<2;n++){
            if(roll[n]==roll[n+1]&&roll[n+1]==roll[n+2]&&roll[n+2]==roll[n+3]&&roll[n+3]==roll[n+4]){
                fivesame=true;
            }
        }
  
    bool foursame=false;
        for(int n=0;n<3;n++){
            if(roll[n]==roll[n+3]&&roll[n+1]==roll[n+2]&&roll[n+2]==roll[n+3]){
                foursame=true;
            }
        }
  
    bool threesame=false;
        for(int n=0;n<4;n++){
            if(roll[n]==roll[n+1]&&roll[n+1]==roll[n+2]){
                threesame=true;
            }
        }
    bool onefive=false;   
        for(int n=0;n<6;n++){
            if(roll[n]==1){
                tempScr+=100;
                onefive=true;
            }
            else if(roll[n]==5){
                tempScr+=50;
                onefive=true;
            }
        }
 
    if(straight==true){
        tempScr+=1500;
        cout<<"You rolled a straight.         +1500 Points"<<endl;
    }
    else if(sixsame==true){
        tempScr+=3000;
        cout<<"You rolled a 6 of a kind       +3000 Points"<<endl;
    }
    else if(fivesame==true){
        tempScr+=2000;
        cout<<"You rolled a 5 of a kind       +2000 Points"<<endl;
    }
    else if(foursame==true){
        tempScr+=1000;
        cout<<"You rolled a 4 of a kind       +1000 Points"<<endl;
    }
    else if(threesame==true){
        tempScr+=500;
        cout<<"You rolled a 3 of a kind        +500 Points"<<endl;
    }
    else if(onefive==true){
        cout<<"You rolled a single 1's or 5's  +"<<tempScr<<" Points"<<endl;
    }
    
    if(i%2==0){
        score2+=tempScr;
    }
    else{
        score1+=tempScr;
    }
    
    }
    }while(score1<winScr&&score2<winScr);
    (score1>score2)?cout<<"Player 1 Wins!    Congratulations!"<<endl:
        cout<<"Player 2 Wins!   Congratulations"<<endl;
       
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
 return 0;  
}