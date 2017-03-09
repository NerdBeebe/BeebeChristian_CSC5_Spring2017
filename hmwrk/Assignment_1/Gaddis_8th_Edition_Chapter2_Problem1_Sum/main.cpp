/* 
 * File:   Sum of Two Numbers
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Find the sum of two numbers
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
    unsigned short one,//First number
                   two,//Second number
                   total;
    //Initialize variables
    one=50;
    two=100;
    //Map inputs to outputs or process the data
    total=one+two;
    //Output the transformed data
    cout<<one<<" + "<<two<<" = "<<total<<endl;
    //Exit stage right!
    return 0;
}

