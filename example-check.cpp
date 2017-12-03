/*
    Implementacija checker-a u C++ ili C#
    Fajl se obavezan ako je vrednost checker meta polja "custom"
*/

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    // Example, but you don't have to use streams.
    ifstream outFile(argv[1]);  // User output.
    ifstream solFile(argv[2]);  // Expected output.
    ifstream inFile(argv[3]);  // Input case.

    // Check solution.

    outFile.close();
    solFile.close();
    inFile.close();

    // Return any real number between 0 and 1.
    // This is multiplied with test case value when computing score.
    return 0;  // For incorrect.
    return 1;  // For fully correct.
}
