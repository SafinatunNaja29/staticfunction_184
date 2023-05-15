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

int main() {
	Mahasiswa mhs1("Sri Dadi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNim(9);	//mengakses nim melalui static member function "setNim"
	Mahasiswa mhs3("Andi Janu");
	Mahasiswa mhs4("Joko Wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl;	//mengakses nim melalui static member function "getNim"
	system("pause");

	return 0;
}