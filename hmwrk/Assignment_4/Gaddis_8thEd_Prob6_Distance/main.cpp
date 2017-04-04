/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Distance Traveled
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
    int dist,speed,time;  //DIstance in miles, speed in mph, time in hours
    //Initialize variables
    
    //Input data
    cout<<"This program will calculate how far you travel after every hour"<<endl;
    cout<<"What is the speed of the vehicle in MPH? (Positive number) ";
    cin>>speed;
    cout<<"How many hours has it traveled? (Number greater than 0) ";
    cin>>time;
    
    if(speed<0||time<=0){
        cout<<"You input and incorrect integer.";
        return 1;
    }
    
    cout<<"Hour     Distance Traveled"<<endl;
    cout<<"--------------------------"<<endl;
    
    
    for(int n=1;n<=time;n++){
        dist=speed*n;
        cout<<n<<"               "<<dist<<endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

