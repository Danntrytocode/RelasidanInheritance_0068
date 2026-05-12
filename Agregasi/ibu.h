#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class anak;

//create class ibu pada file header ibu.h
class ibu{
public:
    //deklarasi member
    string nama;
    vector<anak*> daftar_anak;
    //create constructor dan destructor pada class ibu
    ibu(string pnama) : nama(pnama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
};

#endif