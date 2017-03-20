/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Calculate the percentage of calories that come from fat in food
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
    float calorie, //Number of calories in the food
          fatgram, //Number of fat grams in the food
          calfat,  //Number of calories from fat
          percent; //Percentage of the calories from fat
    //Initialize variables
    cout<<"This program will calculate the percentage of calories that come from fat in food"<<endl;
    cout<<"Enter the number of calories in the food : ";
    cin>>calorie;
    cout<<"Enter the number of fat grams in the food : ";
    cin>>fatgram;
    if (calorie<0||fatgram<0){
        cout<<"Please enter positive value for the number of books purchased"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data
    calfat=fatgram*9;
    if (calfat>calorie){
        cout<<"Either the calories or the fat grams were entered incorrectly"<<endl;
        return 1;
    }
    percent=calfat/calorie*100;
    //Output the transformed data
    cout<<"The calories from fat make up "<<percent<<"% of the total calories in the food"<<endl;
    if (percent<30)
        cout<<"This food is low in fat!"<<endl;
    //Exit stage right!
    return 0;
}
