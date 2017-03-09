/* 
 * File:   MPG
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Calculate the miles per gallon the car gets
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
    unsigned short gas,//Gallons of gas
                   dist,//Miles traveled before refuel
                   mpg;//Miles Per Gallon
    //Initialize variables
    gas=15;
    dist=375;
            
    //Map inputs to outputs or process the data
    mpg=dist/gas;
    //Output the transformed data
    cout<<"The car receives "<<mpg<<" miles per gallon."<<endl;
    //Exit stage right!
    return 0;
}

