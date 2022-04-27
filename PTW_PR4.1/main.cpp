#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include "Functions.hpp"
using namespace std;

int main()
{
    string filename = "/Users/mac/Desktop/Student/PTW/4/PTW_PR4.1/PTW_PR4.1/t.txt";
    string fileContent = readFile(filename);
    bool result = Check(fileContent);
    cout << "Letters from word 'while' is ";
    if (result)
    {
        cout << "available" << endl;
    }
    else
    {
        cout << "not available" << endl;
    }
    return 0;
}
