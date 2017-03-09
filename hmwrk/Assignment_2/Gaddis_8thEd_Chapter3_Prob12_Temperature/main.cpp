/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose:  Celsius to Fahrenheit
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
    float fahren,    //Temperature in Fahrenheit
          celsius;   //Temperature in Celsius
    //Input or initialize values Here
    cout<<"This program will convert Celsius to Fahrenheit"<<endl;
    cout<<"Input the temperature in Celsius : ";
    cin>>celsius;
    //Process/Calculations Here
    fahren=9*celsius/5+32;
    //Output Located Here
    cout<<celsius<<" degrees Celsius is "<<fahren<<" degrees Fahrenheit";
    //Exit
    return 0;
}

