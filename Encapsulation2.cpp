#include <iostream>
#include <string>

using namespace std;

class orang {
private:
	string nama;
	int umur;
public:
	orang(string nama, int umur) {
	this->nama = nama;
	this->umur = umur;
	}
	void setNama(string nama) {
	this->nama = nama;
	}
	string getNama() {
	return nama;
	}
	void setUmur(int umur) {
	this->umur = umur;
	}
	int getUmur() {
	return umur;
	}
};

int main() {
orang orang("deprian", 19);

cout << "Nama: " << orang.getNama() << endl;
cout << "umur: " << orang.getUmur() << endl;

orang.setNama("supriadi");
orang.setUmur(31);

cout << "Nama: " << orang.getNama() << endl;
cout << "umur: " << orang.getUmur() << endl;

return 0;
}

