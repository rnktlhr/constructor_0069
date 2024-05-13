#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void prinALL();

        static void setNim(int pNim) {nim = pNim;}
        static int getNim() {return nim;}

        mahasiswa(string pnama):nama(pnama){
            setID();
        }
};

int mahasiswa::nim = 100;

void mahasiswa::setID(){
    id = ++nim;
}

void mahasiswa::prinALL(){
    cout << "ID    = " << id <<endl;
    cout << "Nama  = " << nama <<endl;
    cout << endl;
}

int main(){

}