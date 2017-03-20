/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170320
 * Purpose: Convert to Roman Numerals
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
    unsigned short number; //Number to be converted
    //Initialize variables
    cout<<"This program will convert a number between 1-10 to Roman Numerals"<<endl;
    cout<<"Input the number between 1-10 to convert : ";
    cin>>number;
    if (number>10||number<=0){
        cout<<"You did not enter a number between 1-10"<<endl;
        return 1;
    }
    //Input data
    
    //Map inputs to outputs or process the data
    switch (number){
            case 10: cout<<"X is the Roman numeral for "<<number<<endl;break;
            case 9: cout<<"IX is the Roman numeral for "<<number<<endl;break;
            case 8: cout<<"VIII is the Roman numeral for "<<number<<endl;break;
            case 7: cout<<"VII is the Roman numeral for "<<number<<endl;break;
            case 6: cout<<"VI is the Roman numeral for "<<number<<endl;break;
            case 5: cout<<"V is the Roman numeral for "<<number<<endl;break;
            case 4: cout<<"IV is the Roman numeral for "<<number<<endl;break;
            case 3: cout<<"III is the Roman numeral for "<<number<<endl;break;
            case 2: cout<<"II is the Roman numeral for "<<number<<endl;break;
            default: cout<<"I is the Roman numeral for "<<number<<endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
