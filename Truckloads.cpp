#include "Truckloads.h"
#include <iostream>
using namespace std;


int Truckloads::numTrucks(int numCrates,int loadSize){
    int sum=0;
    if (numCrates<=loadSize){
        return 1;
    }
    
    if (numCrates%2==0){

        sum=numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
        
    }

    else{
        sum=numTrucks((numCrates-1)/2,loadSize)+numTrucks((numCrates+1)/2,loadSize);
    }

    return sum;

};