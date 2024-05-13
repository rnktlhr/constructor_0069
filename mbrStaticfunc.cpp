#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void prinALL();

        static void setNim(int pNim) {nim = pNim;}
        static int getNim() {return nim;}

        Mahasiswa(string pnama):nama(pnama){
            setID();
        }
};

int Mahasiswa::nim = 100;

void Mahasiswa::setID(){
    id = ++nim;
}

void Mahasiswa::prinALL(){
    cout << "ID    = " << id <<endl;
    cout << "Nama  = " << nama <<endl;
    cout << endl;
}

int main(){
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");

    Mahasiswa::setNim(9);

    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.prinALL();
    mhs2.prinALL();
    mhs3.prinALL();
    mhs4.prinALL();

    cout << "akses dari luar object= " << Mahasiswa::getNim() << endl;
    return 0;
}