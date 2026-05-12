#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Class Induk
class User {
protected:
    static int globalId; // Static member untuk auto-increment ID
    int id;
    string nama;
    string email;

public:
    User(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
    }

    //member function untuk generate ID otomatis
    int generateId() {
        return ++globalId;
    }

    //pengambil untuk kebutuhan display
    int getId() { return id; }
    string getNama() { return nama; }
};

//Inisialisasi static member begin dari 0
int User::globalId = 0;

