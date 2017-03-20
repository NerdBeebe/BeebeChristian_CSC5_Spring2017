/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Find if the day multiplied by the month equals the year
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
    unsigned short month, //Two digit month
                   day,   //One or two digit day
                   year;  //Two digit year
    //Initialize variables
    cout<<"This program will determine if an input date is a magic date"<<endl;
    cout<<"Enter a month (In numeric form) : ";
    cin>>month;
    cout<<"Enter a day : ";
    cin>>day;
    cout<<"Enter a year (Two digits only) : ";
    cin>>year;
    if (month>12||month<=0){
        cout<<"You did not enter a valid month"<<endl;
        return 1;
    }
    if (day>31||day<=0){
        cout<<"You did not enter a valid day"<<endl;
        return 1;
    }
    if (year>99||year<=0){
        cout<<"You did not enter a valid year"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data
    if (day*month==year)
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is a magic date"<<endl;
    else
        cout<<"The date "<<month<<"/"<<day<<"/"<<year<<" is not a magic date"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
