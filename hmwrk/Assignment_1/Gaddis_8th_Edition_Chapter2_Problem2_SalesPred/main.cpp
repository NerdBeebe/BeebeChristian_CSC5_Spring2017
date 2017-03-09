/* 
 * File:   Sales Prediction
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Predict how much the East Coast division will generate this year
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
    float eastcst,//Amount generated by the east coast
          sales;//Total sales for the year
    //Initialize variables
    sales=8.6;//Million
    //Map inputs to outputs or process the data
    eastcst=sales*58/100;
    //Output the transformed data
    cout<<"The East Coast generated $"<<eastcst<<" million for the company this "
            "year."<<endl; 
    //Exit stage right!
    return 0;
}

