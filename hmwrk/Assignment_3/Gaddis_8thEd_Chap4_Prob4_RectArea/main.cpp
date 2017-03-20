/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Find which of two rectangles has a greater area
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
    unsigned short length1,  //Length of first rectangle
                   width1,   //Width of first rectangle
                   length2,  //Length of second rectangle
                   width2,   //Width of second rectangle
                   area1,    //Area of first triangle
                   area2;    //Area of second triangle
    //Initialize variables
    cout<<"This program will determine which of two rectangles has a greater area"<<endl;
    cout<<"Enter a length of the first rectangle : ";
    cin>>length1;
    cout<<"Enter a width for the first rectangle : ";
    cin>>width1;
    cout<<"Enter a length of the second rectangle : ";
    cin>>length2;
    cout<<"Enter a width for the second rectangle : ";
    cin>>width2;

    //Input data
    area1=width1*length1;
    area2=width2*length2;
    
    if (area1<=0){
        cout<<"An invalid integer was enter in the length or width for rectangle 1"<<endl;
        return 1;
    }
    if (area2<=0){
        cout<<"An invalid integer was enter in the length or width for rectangle 2"<<endl;
        return 1;
    }
    //Map inputs to outputs or process the data
    if (area1>area2)
        cout<<"The area of the first rectangle is greater than the area of the second rectangle"<<endl;
    else if (area1<area2)
        cout<<"The area of the second rectangle is greater than the area of the first rectangle"<<endl;
    else
        cout<<"The area of both rectangles is equal"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
