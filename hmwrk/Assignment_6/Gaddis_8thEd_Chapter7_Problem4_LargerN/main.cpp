/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Larger than n
*/

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void larger (int x[],int y,int n);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int array[10];
    int num;
    int SIZE;
    //Input data
    cout<<"Choose the number of variables you want inside of an array"<<endl;
    cin>>SIZE;
    cout<<"Choose a number to compare with the values in the array"<<endl;
    cin>>num;
    for(int x=0;x<=SIZE-1;x++){
        cout<<"Input a value "<<x+1<<" into the array"<<endl;
        cin>>array[x];
    }
    //Execute function
    cout<<endl;
    larger(array,SIZE,num);
    //Output
    
    //Exit stage right!
    return 0;
}

void larger (int x[],int y,int n){
    for(int z=0;z<=y;z++){
        if (n<x[z]){
            cout<<x[z]<<endl;
        }
    }
}
