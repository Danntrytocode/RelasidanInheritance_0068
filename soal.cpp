#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User
{
public:
static int globalId;
int id;
string nama;
string email;
    int generateId(){

    }
};

class Admin
{
public:
    void showAllMember();
    void toggleStatusActivation(bool status, Member member);
};

class Member
{
public:
static int globalId;
int id;
string nama;
string email;
bool status;

    Member(string email, string nama){

    }
};

