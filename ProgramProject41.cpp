/*Program File Name: Programproject4
Programmer: Marcos Tomala
Date: November 2025
Requirements:
Write a prgram that allows you to open a file and make a bar chart based on dates and numbers
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string FN; // filename
    ifstream DF; // datafile

    cout << "Enter data file name: ";
    cin >> FN;

    DF.open(FN);
    if (!DF) {
        cerr << "Could not open file '" << FN << "'." << endl;
        return 1;
    }
    cout << "YEAR   BAR CHART" << endl;
    int year;
    int number;
    while (DF >> year >> number) {
        cout << year << "   ";
        for (int i = 0; i < number; ++i) {
            cout << "+";
        }
        cout << " (" << number << ")" << endl;
    }
    DF.close();
    return 0;
}
