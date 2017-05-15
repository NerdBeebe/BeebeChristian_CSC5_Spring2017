/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: Charge Account Validation
*/

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int bnrySrc(int x[],int y, int z);
void slcSort(int x[],int y);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int search[18]={5658845,8080152,1005231,4520125,4562555,654231,7895122,
                    5552012,3852085,8777541,5050552,7576651,8451277,7825877,
                    7881200,1302850,1250255,4581002};
    int account;
    bool valid;
    //Input data
    cout<<"The program will check if your account number is valid"<<endl;
    cout<<"Input you account number"<<endl;
    cin>>account;
    //Execute function
    slcSort(search,18);
    valid=bnrySrc(search,18,account);
    //Output
    if(valid==true){
        cout<<"Your account is valid"<<endl;
    }
    else{
        cout<<"Your account is invalid"<<endl;
    }
    //Exit stage right!
    return 0;
}

void slcSort(int x[],int y){
    int scan;
    int minIndx;
    int value;
    for (scan=0;scan<(y-1);scan++){
        minIndx=scan;
        value=x[scan];
        for(int index=scan+1;index<y;index++){
            if (x[index]<value){
                value=x[index];
                minIndx=index;
            }
        }
        x[minIndx]=x[scan];
        x[scan]=value;
    }
}

int bnrySrc(int x[],int y,int z){
    int first=0;
    int last=y-1;
    int middle;
    bool found=false;
    while(!found&&first<=last){
        middle=(first+last)/2;
        if (x[middle]==z){
            found=true;
        }
        else if(x[middle]>z){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    if(found==true){
        return 1;
    }
    else{
        return 0;
    }
}