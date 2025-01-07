#include <iostream>
#include <stack>
#include <cmath>
#include <climits> 
using namespace std;

void moveDisk(stack<int>& source, stack<int>& destination, char s, char d) {
    int fromTop, toTop;
    if (source.empty()) {
        fromTop = INT_MAX;
    } else {
        fromTop = source.top();
    }

    if (destination.empty()) {
        toTop = INT_MAX;
    } else {
        toTop = destination.top();
    }

    if (fromTop < toTop) {
        destination.push(fromTop);
        source.pop();
        cout << "Move " << fromTop << " from " << s << " to " << d << endl;
    } else {
        source.push(toTop);
        destination.pop();
        cout << "Move " << toTop << " from " << d << " to " << s << endl;
    }
}

void towerOfHanoi(int nmbOfDisks) {
    stack<int> src, aux, dest; // our stacks needed
    char s = 'A', a = 'B', d = 'C';
    int totalMoves = pow(2, nmbOfDisks) - 1;
    for (int i = nmbOfDisks; i >= 1; i--) {
        src.push(i);
    }
    if (nmbOfDisks % 2 == 0) { // if we got an even number of disks
        swap(d, a);
    }
    for (int i = 0; i < totalMoves; i++) {
        if (i % 3 == 0) {
            moveDisk(src, dest, s, d);
        } else if (i % 3 == 1) {
            moveDisk(src, aux, s, a);
        } else if (i % 3 == 2) {
            moveDisk(aux, dest, a, d);
        }
    }
}

int main() {
    int numberOfDisks;

    cout << "How many disks you want? " << endl;
    cin >> numberOfDisks;

    towerOfHanoi(numberOfDisks);
    return 0;
}