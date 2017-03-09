/* 
 * File:   Sales Tax
 * Author: Christian Beebe
 * Created on 20170216
 * Purpose: Compute the total sales tax on a purchase
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
    float tax,//Sales tax
            purchase,//Item purchased
            tltax;//Total sales tax in $'s
    //Initialize variables
    tax=0.06;
    purchase=95;
    //Map inputs to outputs or process the data
    tltax=tax*purchase;
    //Output the transformed data
    cout<<"The sales tax on the $95 product is $"<<tltax<<endl;
    //Exit stage right!
    return 0;
}

