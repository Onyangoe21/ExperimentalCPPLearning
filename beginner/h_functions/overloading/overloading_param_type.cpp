#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "sum: integer = " << (a + b)<<endl;
}

void add(double a, double b) {
    cout << "sum: double = " << (a + b)<<endl;
}

void add(string a, string b) {
    cout<<"sum: string = "<<(a + b)<<endl;
}

// Driver code
int main() {
    add(10, 2);
    add(5.3, 6.2);
    add("This is ", "fun");

    return 0;
}