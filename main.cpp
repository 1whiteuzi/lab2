#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string filename = "text.txt";

    ifstream inFile(filename);

    string line;
    cout << "Содержимое файла:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    return 0;
}