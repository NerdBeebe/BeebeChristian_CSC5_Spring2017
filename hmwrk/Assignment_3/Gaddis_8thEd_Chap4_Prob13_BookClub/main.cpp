/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Calculate the number of reward points earned
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
    short books; //Number of books the customer purchased
    //Initialize variables
    cout<<"This program will determine how many reward points the customer earned"<<endl;
    cout<<"Enter the number of books the customer purchased : ";
    cin>>books;
    if (books<0){
        cout<<"Please enter positive value for the number of books purchased"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data

    //Output the transformed data
    switch (books){
            case 0: cout<<"The customer earned 0 points"<<endl;break;
            case 1: cout<<"The customer earned 5 points"<<endl;break;
            case 2: cout<<"The customer earned 15 points"<<endl;break;
            case 3: cout<<"The customer earned 30 points"<<endl;break;
            default: cout<<"The customer earned 60 points"<<endl;
    }
    //Exit stage right!
    return 0;
}
