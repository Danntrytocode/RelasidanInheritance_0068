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
};

#endif