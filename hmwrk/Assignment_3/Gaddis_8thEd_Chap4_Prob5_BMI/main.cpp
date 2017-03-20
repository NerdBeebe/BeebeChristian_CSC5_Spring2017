/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Determine if the user is over or underweight depending on their BMI
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
    float height,  //Height in inches
          weight,  //Weight in lbs
          BMI;     //Body MAss Index
    //Initialize variables
    cout<<"This program will determine if the user is over/underweight according to their BMI"<<endl;
    cout<<"Enter your weight in lbs : ";
    cin>>weight;
    cout<<"Enter your height in inches : ";
    cin>>height;
    //Input data
    BMI=weight*703/(height*height);
    
    if (BMI<=0){
        cout<<"An invalid integer was entered for your weight or height"<<endl;
        return 1;
    }
    //Map inputs to outputs or process the data

    //Output the transformed data
    cout<<"Your BMI based on your weight and height is "<<BMI<<endl;
     if (BMI<18.5)
        cout<<"You are considered to be underweight based on your height and weight"<<endl;
    else if (BMI>25)
        cout<<"You are considered to be overweight based on your height and weight"<<endl;
    else
        cout<<"You are the optimal weight!"<<endl;   
    //Exit stage right!
    return 0;
}
