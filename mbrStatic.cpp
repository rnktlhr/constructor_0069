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

}