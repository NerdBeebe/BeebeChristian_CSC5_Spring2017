/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Candy Bars
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex;                   //Gender of the individual (M or F)
    unsigned short height,      //Height of the individual in inches 
                   weight,      //Weight of the individual in lbs
                   age;         //Age of the individual in years
    unsigned short cdyCals=230; //Candy bar calories
    float bmr;                  //Basic Metabolic Rate (Calories)
    int nCdyBrs;                //Number of candy bars we can eat
    //Input or initialize values Here
    cout<<"This program calculates the number of candy bars allowed per day";
    cout<<"based upon your BMR"<<endl;
    cout<<"Input your gender (M or F) : ";
    cin>>sex;
    cout<<"Input your weight in lbs : ";
    cin>>weight;
    cout<<"Input your height in inches : ";
    cin>>height;
    cout<<"Input your age in years : ";
    cin>>age;
    //Process/Calculations Here
    bmr=(sex=='M')?
        66 +  6.3f*weight + 12.9f*height - 6.8f*age:
        655 + 4.3f*weight + 4.7f*height -  4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    //Output Located Here
    cout<<"Based on your BMR you are able to eat "<<nCdyBrs<<" candy bars over the course ";
    cout<<"of a day"<<endl;
    //Exit
    return 0;
}

