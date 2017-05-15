/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Monkey Business
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
    int monkey[3][5];
    int high;
    int low;
    int aver=0;
    //Input data
    cout<<"This program will show how much food a family of monkeys eat"<<endl;
    for(int x=0;x<3;x++){
        for(int n=0;n<5;n++){
            cout<<"Enter the amount of food in lbs that monkey "<<x+1<<" ate on day "<<n+1<<endl;
            cin>>monkey[x][n];
            aver+=monkey[x][n];
        }
    }
    //Execute
    high=monkey[0][0];
    low=monkey[0][0];
    for(int x=0;x<3;x++){
        for(int n=0;n<5;n++){
            if(monkey[x][n]<low){
                low=monkey[x][n];
            }
            if(monkey[x][n]>high){
                high=monkey[x][n];
            }
        }
    }    
    //Output
    cout<<"The average amount of food eaten by the monkeys is "<<aver/15<<" lbs"<<endl;
    cout<<"The least amount of food eaten in one day is "<<low<<" lbs"<<endl;
    cout<<"The most amount of food eaten in one day is "<<high<<" lbs"<<endl;
    //Exit stage right!
    return 0;
}
