#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75)
        cout << "Result: Pass";
    else
        cout << "Result: Fail";

    return 0;
}
