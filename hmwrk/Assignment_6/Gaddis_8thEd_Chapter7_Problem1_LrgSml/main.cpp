/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Smallest/Largest
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
    int array[10];
    int small , large;
    //Input data
    cout<<"This program will tell you the largest and ";
    cout<<"smallest number in an array you create"<<endl;
    for (int x=0;x<=9;x++){
        cout<<"Enter the value for number "<<x+1<<endl;
        cin>>array[x];
    }
    //Execute function
    small=array[0];
    for (int n=0;n<=9;n++){
        if (array[n]>large){
            large=array[n];
        }
        else if (array[n]<small){
            small=array[n];
        }
    }
    //Output
    cout<<"The smallest number in your array was "<<small<<endl;
    cout<<"The largest number in your array was "<<large<<endl;
    //Exit stage right!
    return 0;
}
