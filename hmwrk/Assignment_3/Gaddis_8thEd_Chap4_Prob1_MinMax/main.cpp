/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Find out which inputed number is larger
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
    float numone, //First input number
          numtwo; //Second input number
    //Initialize variables
    cout<<"This program will determine which of the two input numbers is larger."<<endl;
    cout<<"Input number one : ";
    cin>>numone;
    cout<<"Input number two : ";
    cin>>numtwo;        
    //Input data
    
    //Map inputs to outputs or process the data
    if (numone>numtwo)
    cout<<numone<<" is greater than "<<numtwo<<endl;
    else if (numone==numtwo)
    cout<<numone<<" and "<<numtwo<<" are equal";
    else 
    cout<<numtwo<<" is greater than "<<numone<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
