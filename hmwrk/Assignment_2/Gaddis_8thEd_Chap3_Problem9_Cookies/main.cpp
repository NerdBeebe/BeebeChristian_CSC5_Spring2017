/* 
 * File:   CppTemplate
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose: Calculate the number of calories consumed by an individual
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
    unsigned short cookies,  //Number of cookies eaten
                   calorie;  //Number of calories consumed

    //Initialize variables
    cout<<"This program will calculate the number of calories consumed"<<endl;
    cout<<"Input the number of cookies eaten : ";
    cin>>cookies;
    //Input data
    calorie=cookies*100;
    //Map inputs to outputs or process the data
    cout<<"The number of calories consumed was "<<calorie<<" calories"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

