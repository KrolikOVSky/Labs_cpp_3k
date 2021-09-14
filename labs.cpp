#include <iostream>
using namespace std;

void foobar(){
    int x = 2;
    int y = 2;
    cout << (x & y | x && x == y) << endl;
}


int main(){
    foobar();

    return 0;
}