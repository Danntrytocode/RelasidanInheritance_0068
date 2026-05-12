#include <iostream>
#include <string>
#include <vector>
using namespace std;

//penyertaan file ibu.h dan anak.h
#include "anak.h"
#include "ibu.h"

int main()
{
    ibu* varIbu = new ibu("syifa");
    ibu* varIbu2 = new ibu("Nvidia");
    anak* varAnak1 = new anak("Vermillion");
    anak* varAnak2 = new anak("RTX 3090");
    anak* varAnak3 = new anak("RTX 5060");

    varIbu->tambahAnak(varAnak1);
    varIbu2->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    return 0;
}