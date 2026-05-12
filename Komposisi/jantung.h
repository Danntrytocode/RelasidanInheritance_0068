#ifndef JANTUNG_H
#define JANTUNG_H
#include <iostream>
using namespace std;

class jantung {
public:
    //create constructor and destructor
    jantung() {
        cout << "jantung dihidupkan\n";
    }
    ~jantung() {
        cout << "jantung dimatikan\n";
    }
};
#endif