#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    public:
        static int nim;
        int id;
        string nama;

        void setID();


        void prinALL();
        Mahasiswa(string pnama):nama(pnama){
            setID();
        }

};

int Mahasiswa::nim = 20;

void Mahasiswa::setID(){
    id= ++nim;
}

void Mahasiswa::prinALL(){
    cout << "ID  = " << id <<endl;
    cout << "Nama  = " << nama <<endl;
    cout << endl;
}

int main(){
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.prinALL();
    mhs2.prinALL();
    mhs3.prinALL();
    mhs4.prinALL();

    return 0;
}