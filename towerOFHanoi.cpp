#include <iostream>
using namespace std;

void Hanoi(int n, char fromRod, char toRod,
                  char auxRod){
    if (n == 0) {
        return;
    }
    Hanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Disk " << n << " moved from " << fromRod
         << " to " << toRod << endl;
    Hanoi(n - 1, auxRod, toRod, fromRod);
}

int main(){
    int n = 3;
    Hanoi(n, 'A', 'C', 'B');
    return 0;
}