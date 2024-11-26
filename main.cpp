#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    int *Array {new int[10]};
    for (int i=0; i<10; i++){
        Array[i] = rand()%21-10;
    }

    return 0;
}