#include <iostream>

using namespace std;

class MyStack {
private:
    int top;
    int *array;
    int length;
public:
    MyStack(int length) {
        this->top = -1;
        this->length = length;
        this->array = new int[this->length];
    }

    MyStack() {
        delete[] array;
    }

    int push(int value) {
        if (top == this->length - 1) return -2;
        else if (value < 0) return -3;
        else {
            this->array[++top] = value;
            return -1;
        }
    }

    int pop() {
        int i = 0;
        if (top >= 0) {
            i = this->array[top--];
            return i;
        } else {
            return -1;
        }
    }

    void print() {
        cout << "---Print---" << endl;
        for (int i = 0; i <= top; i++) {
            cout << "- " << array[i] << endl;
        }
    }

};

int main() {

    int length;
    cout << "Please enter size of stack: ";
    cin >> length;
    auto *numberCollection = new MyStack(length);

    for (;;) {
        int number;
        int command;
        cout << "------------------------------------" << endl;
        cout << "What you want to do?" << endl;
        cout << "1 : insert some number to stack" << endl;
        cout << "2 : get some number from stack" << endl;
        cout << "3 : Print all elements" << endl;
        cout << "0 : close the program" << endl;
        cout << "Your command: ";
        cin >> command;

        switch (command) {
            case 0:
                delete numberCollection;
                return 0;
            case 1:
                cout << "Please enter the number: ";
                cin >> number;
                switch (numberCollection->push(number)) {
                    case -3:
                        cout << "Number is less then 0" << endl;
                        break;
                    case -2:
                        cout << "Stack is full" << endl;
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                number = numberCollection->pop();
                if (number == -1) cout << "stack is empty" << endl;
                else cout << number << endl;
                break;
            case 3:
                numberCollection->print();
                break;
            default:
                cerr << "Wrong command, please try again" << endl;
                break;
        }
    }
}