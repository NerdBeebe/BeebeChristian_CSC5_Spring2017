/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Lottery Winners
*/

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int tickets[10]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int winner;
    bool won=false;
    //Input data
    cout<<"This program will check if the selected lotto tickets are winners"<<endl;
    cout<<"Choose the winning 5-digit combination"<<endl;
    cin>>winner;
    //Execute function
    for(int x=0;x<10;x++){
        if(winner==tickets[x]){
            won=true;
        }
    }
    //Output
    if (won==true){
        cout<<"Congratulations! You won!"<<endl;
    }
    else{
        cout<<"Sorry, Better luck next time!"<<endl;
    }
    //Exit stage right!
    return 0;
}
