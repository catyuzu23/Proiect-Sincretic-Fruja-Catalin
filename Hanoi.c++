#include <iostream>
#include <stack>
#include <cmath.h>
using namespace std;

int main(){

    int numberOfDisks;
    
    cout<<"How many disks you want? "<<endl;
    cin>>numberOfDisks;

    towerOfHanoi(numberOfDisks);
    return 0;
}