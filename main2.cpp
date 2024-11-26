#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

<<<<<<< HEAD
    int *Array {new int[10]};
    for (int i=0; i<10; i++){
        Array[i] = rand()%21-10;
    }

    string filename = "text.txt";

    ofstream outFile("text.txt");

    for (int i=0; i<10; i++){
        outFile << Array[i] << endl;
    }

    outFile.close();
=======
    string filename = "text.txt";

    ifstream inFile(filename);

    string line;
    cout << "Содержимое файла:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
>>>>>>> a65272d980ed6b2e219e71d8dd075a70e21ef842

    return 0;
}