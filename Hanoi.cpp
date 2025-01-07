#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void moveDisk(){

}


void towerOfHanoi(int nmbOfDisks)
{
    stack<int> src, aux, dest; // our stacks needed
    char s = 'A', a = 'B', d = 'C';
    int totalMoves = pow(2, nmbOfDisks) - 1;
    for (int i = nmbOfDisks; i >= 1; i--)
    {
        src.push(i);
    }
    if (nmbOfDisks % 2 == 0) // if we got an
    {
        swap(d, a);
    }
    for (int i = 0; i < totalMoves; i++)
    {
        if (i % 3 == 1)
        {
            moveDisk(src, dest, s, d);
        }
        else if (i % 3 == 2)
        {
            moveDisk(src, aux, s, a);
        }
        else if (i%3==0){
            moveDisk(aux,dest,a,d);
        }
    }
}

int main()
{

    int numberOfDisks;

    cout << "How many disks you want? " << endl;
    cin >> numberOfDisks;

    towerOfHanoi(numberOfDisks);
    return 0;
}