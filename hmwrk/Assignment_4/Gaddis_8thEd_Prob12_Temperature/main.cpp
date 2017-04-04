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
    cout<<"This program will convert 0-20 Celsius to Fahrenheit"<<endl;
    //Process/Calculations Here
    for(celsius=0;celsius<=20;celsius++){
    fahren=9*celsius/5+32;
    //Output Located Here
    cout<<celsius<<" degrees Celsius is "<<fahren<<" degrees Fahrenheit"<<endl;
    }
    //Exit
    return 0;
}
