/* 
 * File:   main.cpp
 * Author: Christian Beebe
 * Created on 20170515
 * Purpose: 
*/

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int slcSort(int x[],int y);
int bblSort(int x[],int y);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int select;
    int bubble;
    //Input data
    int array1[20]={31,71,67,39,91,97,76,11,94,18,97,63,5,32,88,62,78,44,30,66};
    int array2[20]={31,71,67,39,91,97,76,11,94,18,97,63,5,32,88,62,78,44,30,66};
    //Execute function
    select=slcSort(array1,20);
    bubble=bblSort(array2,20);
    //Output
    cout<<"The select sort method swapped "<<select<<" times"<<endl;
    cout<<"The bubble sort method swapped "<<bubble<<" times"<<endl;
    //Exit stage right!
    return 0;
}


int slcSort(int x[],int y){
    int scan;
    int minIndx;
    int value;
    int times=0;
    for (scan=0;scan<(y-1);scan++){
        minIndx=scan;
        value=x[scan];
        for(int index=scan+1;index<y;index++){
            if (x[index]<value){
                value=x[index];
                minIndx=index;
                times++;
            }
        }
        x[minIndx]=x[scan];
        x[scan]=value;
    }
}

int bblSort(int x[],int y){
    bool swap;
    int holding;
    int times=0;
    do{
        swap=false;
        for(int n=0;n<y-1;n++){
            if(x[n]>x[n+1]){
                holding=x[n];
                x[n]=x[n+1];
                x[n+1]=holding;
                swap=true;
                times++;       
            }
        }
    }while(swap);
    return times;
}