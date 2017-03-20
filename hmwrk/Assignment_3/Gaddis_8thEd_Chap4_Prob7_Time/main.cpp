/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Convert seconds to minutes, hours and days
*/

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float DAY=86400; //Number of seconds in a day
const float HOUR=3600;  //Number of seconds in an hour
const float MINUTE=60;  //Number of seconds in a minute
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float seconds; //Number of second
    //Initialize variables
    cout<<"This program will convert seconds to minutes/hours/days";
    cout<<"Enter the number of seconds to convert : ";
    cin>>seconds;
    if (seconds<=0){
        cout<<"Please enter a value greater than 0 for the number of seconds"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data

    //Output the transformed data
     if (seconds>=DAY)
         cout<<seconds<<" seconds is equal to "<<seconds/DAY<<" days"<<endl;
     else if (seconds>=HOUR&&seconds<DAY)
        cout<<seconds<<" seconds is equal to "<<seconds/HOUR<<" hours"<<endl;
     else if (seconds>=MINUTE&&seconds<HOUR)
        cout<<seconds<<" seconds is equal to "<<seconds/MINUTE<<" minutes"<<endl;
     else
        cout<<seconds<<" seconds is not a big enough integer to convert it higher"<<endl;
    //Exit stage right!
    return 0;
}
