/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Coin Toss
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
    float rain[12];
    float total=0;
    float high=0;
    float low;
    //Input data
    for (int x=0;x<=11;x++){
        cout<<"Enter the amount of rainfall for Month "<<x+1<<endl;
        do{
        cin>>rain[x];
        }while (rain[x]<0);
        total+=rain[x];
    }
    //Execute function
    low=rain[0];
    for (int n=0;n<=11;n++){
        if (rain[n]>high){
            high=rain[n];
        }
        if (rain[n]<low){
            low=rain[n];
        }
    }
    //Output
    cout<<"The total rainfall for the 12 months was "<<total<<endl;
    cout<<"The average rainfall for the 12 months was "<<total/12<<endl;
    cout<<"The highest amount of rainfall in one month was "<<high<<endl;
    cout<<"The lowest amount of rainfall in one month was "<<low<<endl;
    //Exit stage right!
    return 0;
}
