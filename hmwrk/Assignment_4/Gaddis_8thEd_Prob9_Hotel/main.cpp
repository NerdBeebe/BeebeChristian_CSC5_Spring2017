/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170403
 * Purpose: Hotel Occupancy
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //Percentage conversion
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float floors,rooms,occupy; //User input data
    float perc;                //Percentage of rooms occupied
    //Initialize variables
    
    //Input data
    cout<<"This program will determine the occupancy rate of a hotel"<<endl;
    cout<<"How many floors does the hotel have? ";
    cin>>floors;
    
    for(int i=1;i<=floors;i++){
        int x,n;
        cout<<"How many rooms are on Floor "<<i<<"? ";
        cin>>x;
        cout<<"How many of those rooms are occupied? ";
        cin>>n;
        rooms+=x;
        occupy+=n;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The hotel has "<<rooms<<" rooms"<<endl;
    cout<<occupy<<" rooms are occupied"<<endl;
    cout<<rooms-occupy<<" rooms are unoccupied"<<endl;
    cout<<"The hotel is "<<occupy/rooms*PERCENT<<"% occupied"<<endl;
    //Exit stage right!
    return 0;
}

