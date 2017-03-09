/* 
 * File:   Federal Budget
 * Author: Christian Beebe
 * Created on 20170221
 * Purpose: Calculate the percentage of the federal budget that the Military and
 *          NASA are funded.
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float BILLION=1.0e9f;
const float TRILION=1.0e12f;
const float PERCENT=100.0f;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float fedBudg=3.54e12f; //3.54 trillion dollars - Federal Budget
    float milBudg=580e9f;   //580 billion dollars - Military Budget
    float nasaBud=18.5e9f;  //18.5 billion dollars - NASA Budget
    float milPer,nasaPer;   // Percentage of spending

    //Map inputs to outputs or process the data
    milPer=milBudg/fedBudg*PERCENT;
    nasaPer=nasaBud/fedBudg*PERCENT;
    //Output the transformed data
    cout<<"Federal Budget = $"<<fedBudg/TRILION<<" trillion\n";
    cout<<"Military Budget = $"<<milBudg/BILLION<<" billion\n";
    cout<<"NASA Budget = $"<<nasaBud/BILLION<<" billion\n";
    cout<<"The Militarys percentage of the federal budget is "<<milPer<<"%"<<endl;
    cout<<"NASAa percentage of the federal budget is "<<nasaPer<<"%"<<endl;
    //Exit stage right!
    return 0;
}

