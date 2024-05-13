#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
        static int nim;
        int id;
        string nama;

        void setID();


        void prinALL();
        mahasiswa(string pnama):nama(pnama){
            setID();
        }

};

int mahasiswa::nim = 20;

void mahasiswa::setID(){
    id= nim++;
}

void mahasiswa::prinALL(){
    cout << "ID  = " << id <<endl;
    cout << "Nama  = " << nama <<endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi Kurniawan");
    mahasiswa mhs4("Joko Purbo");

    mhs1.prinALL();
    mhs2.prinALL();
    mhs3.prinALL();
    mhs4.prinALL();

    return 0;
}