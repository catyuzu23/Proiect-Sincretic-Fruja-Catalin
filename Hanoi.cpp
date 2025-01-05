#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void towerOfHanoi(int nmbOfDisks){
    stack<int> src, aux, dest;//our stacks neded 
    int totalMoves;
    for(int i=nmbOfDisks;i>=1;i--){
        src.push(i);
    }
}


int main(){

    int numberOfDisks;
    
    cout<<"How many disks you want? "<<endl;
    cin>>numberOfDisks;

    towerOfHanoi(numberOfDisks);
    return 0;
}