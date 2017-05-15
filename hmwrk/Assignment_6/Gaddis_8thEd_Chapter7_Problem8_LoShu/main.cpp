/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Lo Shu Square
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
    bool loshu=true;
    int square [3][3];
    //Input data
    cout<<"This program will test if the numbers input make a complete Lo Shu square"<<endl;
    for(int x=0;x<3;x++){
        for(int n=0;n<3;n++){
            cout<<"Enter a value for column "<<x+1<<" row "<<n+1<<endl;
            cin>>square[x][n];
        }
    }
    //Execute function
    if(square[0][0]+square[0][1]+square[0][2]!=15){
        loshu=false;
    }
    else if(square[1][0]+square[1][1]+square[1][2]!=15){
        loshu=false;
    }
    else if(square[2][0]+square[2][1]+square[2][2]!=15){
        loshu=false;
    }
    else if(square[0][0]+square[1][0]+square[2][0]!=15){
        loshu=false;
    }
    else if(square[0][1]+square[1][1]+square[2][1]!=15){
        loshu=false;
    }
    else if(square[0][2]+square[1][2]+square[2][2]!=15){
        loshu=false;
    }
    else if(square[0][0]+square[1][1]+square[2][2]!=15){
        loshu=false;
    }
    else if(square[0][2]+square[1][1]+square[2][0]!=15){
        loshu=false;
    }
    //Output
    if(loshu==false){
        cout<<"The numbers in your square do not complete the Lo Shu Magic Square"<<endl;
    }
    else if(loshu==true){
        cout<<"The numbers in your square complete the Lo Shu Magic Square"<<endl;
    }
    //Exit stage right!
    return 0;
}
