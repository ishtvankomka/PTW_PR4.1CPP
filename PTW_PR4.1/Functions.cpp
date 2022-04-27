#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include "Functions.hpp"

using namespace std;
bool Check(string s) {
    bool letter_w = false;
    bool letter_h = false;
    bool letter_i = false;
    bool letter_l = false;
    bool letter_e = false;
    for (unsigned i = 0; i < s.length(); i++)
    {
        switch (s[i]) {
            case ('w'):
            {
                letter_w = true;
                break;
            }
            case ('h'):
            {
                letter_h = true;
                break;
            }
            case ('i'):
            {
                letter_i = true;
                break;
            }
            case ('l'):
            {
                letter_l = true;
                break;
            }
            case ('e'):
            {
                letter_e = true;
                break;
            }
        }
    }
    if (letter_w == 1 && letter_h == 1 && letter_i == 1 && letter_l == 1 && letter_e == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string readFile(string path) {
    string s;
    getline(ifstream(path), s, '\0');
    return s;
}
