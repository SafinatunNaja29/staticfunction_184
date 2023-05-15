#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;
public:
	int Id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim;	/*/Definisi Function*/}
	static int getNim() { return nim;	/*Definisi function*/}

	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
	Id = ++nim;
}

void Mahasiswa::printAll() {
	cout << "ID = " << Id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

