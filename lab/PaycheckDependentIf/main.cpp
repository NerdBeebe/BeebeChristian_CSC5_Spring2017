/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170316
 * Purpose:  Grade Branching Exercise
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
    unsigned short payrate, //Integer pay rate
                   hours,
                   paycheck;
    
    //Input or initialize values Here
    cout<<"This program calculates your paycheck."<<endl;
    cout<<"The data type used is an integer greater than or equal to 0."<<endl;
    cout<<"Type in your pay rate ($/hr) : ";
    cin>>payrate;
    cout<<"Type in your hours worked : ";
    cin>>hours;
    if((payrate==0||hours==0)){
        cout<<"You entered a 0, therefore your paycheck would be $0"<<endl;
        return 1; //UseDeMorgansLaw to make clearer
    }
    //Process/Calculations Here
    if(hours<=40)
        paycheck=payrate*hours;
    else if(hours>40)
        paycheck=payrate*hours+(payrate*(hours-40));
    //Output Located Here
    cout<<"For a "<<hours<<" hour work week your paycheck would be $"<<paycheck<<endl;
    //Exit
    return 0;
}

