#include <iostream>
#include <math.h>

using namespace std;

int foo(int &num, int &num2){
    num += 5;
    num2 *= num2;
    return 5;

}

int main(){
    int num = 10;
    int num2 = 10;
    cout << num << endl;
    cout << num2 << endl;
    auto i = foo(num, num2);
    cout << i << endl;
    cout << num << endl;
    cout << num2 << endl;

}

