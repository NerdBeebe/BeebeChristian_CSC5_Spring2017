/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170316
 * Purpose:  Grade Branching Exercise
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short score; //Integer scores valid from 0-100
    char grade;
    
    //Input or initialize values Here
    cout<<"This program produces a grade from a score input."<<endl;
    cout<<"The data type used is an integer with a range from 0-100."<<endl;
    cout<<"Type in the score"<<endl;
    cin>>score;
    if(!(score>=0&&score<=100)){
        cout<<"You failed to type an integer between 0-100"<<endl;
        return 1; //UseDeMorgansLaw to make clearer
    }
    //Process/Calculations Here
    switch(score/10){
        case 10:
        case 9: grade='A';break;
        case 8: grade='B';break;
        case 7: grade='C';break;
        case 6: grade='D';break;
        default:grade='F';
    }
    //Output Located Here
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;
    //Exit
    return 0;
}

