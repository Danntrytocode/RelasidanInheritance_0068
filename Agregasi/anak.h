#ifndef ANAK_H
#define ANAK_H
#include <iostream>
#include <string>
using namespace std;

//create class anak di file header anak.h
class anak
{
public:
    //deklarasi member variabel pada class anak
    string nama;
    //create constructor dan destructor pada class anak
    anak(string pnama) : nama(pnama){
        cout << " Anak \"" << nama << "\" ada \n" ;
    }

    ~anak(){
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif