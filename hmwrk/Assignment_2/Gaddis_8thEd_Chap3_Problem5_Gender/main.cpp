/* 
 * File:   CppTemplate
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose: Calculate the percentage of males and females in a class
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f; //Percentage converter
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float          males,    //Number of males
                   females,  //Number of females
                   tlClass,  //Total number of people in the class
                   perMale,  //Percentage of males
                   perFem;   //Percentage of females
    //Initialize variables
    cout<<"This program will calculate the percentage of males ";
    cout<<"and females in a class"<<endl;
    cout<<"Input the total number of students in the class : ";
    cin>>tlClass;
    cout<<"Input the number of males in the class : ";
    cin>>males;
    cout<<"Input the number of females in the class : ";
    cin>>females;
    //Input data
    perMale=males/tlClass*PERCENT;
    perFem=females/tlClass*PERCENT;
    //Map inputs to outputs or process the data
    cout<<"The make-up of the class is : "<<endl;
    cout<<perMale<<" % Males"<<endl;
    cout<<perFem<<" % Females"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

