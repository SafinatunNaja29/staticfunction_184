#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);	//Constructor
	~angka();	//Destructor
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) {	//Constuctor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {	//Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "alamat Array Sudah Dilepaskan" << endl;
}
