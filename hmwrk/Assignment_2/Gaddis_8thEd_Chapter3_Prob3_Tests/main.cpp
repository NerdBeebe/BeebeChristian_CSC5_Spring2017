/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170309
 * Purpose:  Test Score Average
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float test1,   //Score of test 1
          test2,   //Score of test 2
          test3,   //Score of test 3
          test4,   //Score of test 4
          test5,   //Score of test 5
          average; //Average score of all 5 tests
    //Input or initialize values Here
    cout<<"This program will calculate the average of 5 tests scores."<<endl;
    cout<<"Input the score for Test 1 : ";
    cin>>test1;
    cout<<"Input the score for Test 2 : ";
    cin>>test2;
    cout<<"Input the score for Test 3 : ";
    cin>>test3;
    cout<<"Input the score for Test 4 : ";
    cin>>test4;
    cout<<"Input the score for Test 5 : ";
    cin>>test5;
    //Process/Calculations Here
    average=(test1+test2+test3+test4+test5)/5;
    //Output Located Here
    cout<<fixed<<setprecision(1);
    cout<<"Your average for your 5 tests is "<<average<<" %"<<endl;
    //Exit
    return 0;
}

