/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Convert weight from kilograms to newtons then determine if the object is 
 *          over or underweight
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
    float mass,    //Mass in kilograms
          weight;  //Weight in newtons
    //Initialize variables
    cout<<"This program will convert kilograms to newtons and determine if an object";
    cout<<" is too heavy or too light"<<endl;
    cout<<"Enter the objects mass in kilograms : ";
    cin>>mass;
    //Input data
    weight=mass*9.8;
    
    if (weight<=0){
        cout<<"An invalid integer was entered for your mass"<<endl;
        return 1;
    }
    //Map inputs to outputs or process the data

    //Output the transformed data
    cout<<"The weight of the object beight measured is "<<weight<<" newtons"<<endl;
     if (weight>1000)
        cout<<"The object being measured is too heavy"<<endl;
     else if (weight<10)
        cout<<"The object being measured is too light"<<endl;
    else
        cout<<"The object being measured is an optimal weight"<<endl;   
    //Exit stage right!
    return 0;
}
