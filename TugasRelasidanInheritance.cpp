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

//Class Member Turunan dari User
class Member : public User {
private:
    bool status; // true untuk on aktif, false untuk off non-aktif

public:
    Member(string pNama, string pEmail) : User(pNama, pEmail) {
        this->status = true; // Default status aktif
    }

    void setStatus(bool pStatus) {
        status = pStatus;
    }

    bool getStatus() {
        return status;
    }

    void showProfile() {
        cout << "=== Profile Member ===" << endl;
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << (status ? "Aktif" : "Non-Aktif") << endl;
        cout << "----------------------" << endl;
    }
};

// Class Admin Turunan dari User
class Admin : public User {
public:
    Admin(string pNama, string pEmail) : User(pNama, pEmail){}

    // Menampilkan semua member dari daftar yang ada
    void showAllMember(vector<Member*>& daftarMember) 
    {
        cout << "\n[Admin View] Daftar Semua Member:" << endl;
        for (auto m : daftarMember) {
            cout << "ID: " << m->getId() << " | Nama: " << m->getNama() 
                 << " | Status: " << (m->getStatus() ? "Aktif" : "Mati") << endl;
        }
    }

};