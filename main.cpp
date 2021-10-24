#include <iostream>

using namespace std;

void first() {
    cout << "*** First task. Getting size of any data types." << endl;
    cout << "Size of short (bytes): -------- " << sizeof(short) << endl;
    cout << "Size of int (bytes): ---------- " << sizeof(int) << endl;
    cout << "Size of long (bytes): --------- " << sizeof(long) << endl;
    cout << "Size of float (bytes): -------- " << sizeof(float) << endl;
    cout << "Size of double (bytes): ------- " << sizeof(double) << endl;
    cout << "Size of long double (bytes): -- " << sizeof(long double) << endl;
}

void second() {
    cout << "\n\n*** Second question. Appears numbers as signed and unsigned chars" << endl;
    cout << "Char with code -1 signed: " << (int) (signed char) -1 << endl;
    cout << "Char with code -1 unsigned: " << (int) (unsigned char) -1 << endl;
}

void third() {
    cout << "\n\n*** Third question. Recording of constants" << endl;
    const short u = -255U;
    const int l = -255L;
    const double f = -255.5F;

    cout << "Size (bytes) -255u:\t " << sizeof u << endl;
    cout << "Size (bytes) -255l:\t " << sizeof l << endl;
    cout << "Size (bytes) -255f:\t " << sizeof f << endl;
    cout << "Size (bytes) -255.5: " << sizeof -255.5 << endl;
}

void fourth() {
    cout << "\n\n*** Fourth question. Sorting of chars" << endl;
    cout << "Output symbols with code 48-50:  ";
    for (int i = 48; i < 58; i++) {
        cout << (char) i << " ";
    }
    cout << "\nOutput symbols with code 65-91:  ";
    for (int i = 65; i < 91; i++) {
        cout << (char) i << " ";
    }
    cout << "\nOutput symbols with code 97-123: ";
    for (int i = 97; i < 123; i++) {
        cout << (char) i << " ";
    }
    cout << "\nHex code of the \"space\":         " << showbase << hex << 32 << endl;
}

void fifth() {
    cout << "\n\n*** Fifth question. Diagnostic messages\n";
//    float b = 15x3;
//    cout << b;

}

void sixth() {
    cout << "\n\n*** Sixth question. Default initialization\n";
    short default_short;
    int default_int;
    long default_long;
    double default_double;
    bool default_bool;
    cout << "Default value short: " << default_short << endl;
    cout << "Default value int: " << default_int << endl;
    cout << "Default value long: " << default_long << endl;
    cout << "Default value double: " << default_double << endl;
    cout << "Default value bool: " << default_bool;
}

const int external_int = 999;
const string external_string = "External string";
void seventh() {
    static const int static_int = 88;
    static const string static_string = "Static string";

    const auto auto_number = 1024;
    const auto auto_string = "Auto string";

//    external_int = 555;
//    external_string = "new String";
//    static_int = 99;
//    static_string = "str";
//    auto_number = 0;
//    auto_string = "000";
}

void eighth() {
    int a = 9;
    int b = -3;

    printf("a = %d\nb = %d\na %% b = %d\n", a, b, (a % b));
    printf("a = %d\nb = %d\nb %% a = %d\n", a, b, (b % a));
}

void ninth() {
    int a = 1;
    int b = 2;

    auto c = b | a | a == b;
    auto d = b | a | a != b;
    cout << c << endl;
    cout << d << endl;
}

int main() {
//    first();
//    second();
//    third();
//    fourth();
//    fifth();
//    sixth();
//    seventh();
//    eighth();
//    ninth();
    return 0;
}