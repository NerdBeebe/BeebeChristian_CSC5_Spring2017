/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Calories Burned
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
    float ttlCal,calBurn=3.6f; //The total calories burned and calories burned per minute while walking
    //Initialize variables
    
    //Input data
    cout<<"This program will display the calories burned after walking 5,10,15,20"
            ",25 and 30 minutes."<<endl;
    for(int minutes=1;minutes<=30;minutes++){
        ttlCal=calBurn*minutes;
        if(minutes%5==0){
        cout<<"Over "<<minutes<<" minutes, you will burn "<<ttlCal<<" calories."<<endl;
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

