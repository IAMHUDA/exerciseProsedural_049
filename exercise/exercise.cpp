#include <iostream>
using namespace std;

int kandidat = 20;
char nama[20][50];      
int nilaimtk[20];       //SEBUAH ARRAY dengan tipe data integer
int nilaibinggris[20];   //SEBUAH ARRAY dengan tipe data integer

void inputdata() {          
	for (int i = 0; i < kandidat; i++) {      // //digunakan untuk membuat sebuah loop dengan variabel i yang dimulai dari nilai 0 dan berakhir pada nilai yang kurang dari Kandidat.Dalam loop ini, setiap kali loop dijalankan, variabel i akan bertambah satu. Loop akan terus dijalankan selama nilai i masih kurang dari Kandidat.
		cout << "masukan nama kandidat - " << i + 1 << " = ";
		cin.getline(nama[i], 50);             //Argumen pertama (nama[i]) adalah nama dari  array of characters atau string yang akan menyimpan input, sedangkan argumen kedua (50) menunjukkan batas maksimum jumlah karakter yang dapat dibaca.
		cout << "masukan nilai matematika = ";
		cin >> nilaimtk[i];
		cout << "masukan nilai bahasa inggris = ";
		cin >> nilaibinggris[i];
		cin.ignore();
		cout << endl;
	}
		
}
bool diterima(int index) {         // Perintah ini bertujuan untuk mengembalikan nilai ke fungsi pemanggil dengan nilai boolean true atau false.
	return (nilaimtk[index] > 80 || (nilaimtk[index] + nilaibinggris[index]) / 2 >= 70);
}
void tampilkandata() {
	cout << "nama\t||\tstatus" << endl;
	for (int i = 0; i < kandidat; i++) {
		cout << nama[i] << "\t\t";
		if (diterima(i)) {
			cout << "diterima";
		}
		else {
			cout << "ditolak";
		}
		cout << endl;
	}
	cout << endl;
}
void hitungjumlahditerima() {
	int jumlahditerima = 0;
	int jumlahditolak = 0;
	for (int i = 0; i < kandidat; i++) {
		if (diterima(i)) {
			jumlahditerima++;
		}
		else {
			jumlahditolak++;
		}
	}
	cout << "jumlah kandidat diterima = " << jumlahditerima << endl;
	cout << "jumlah kandidat ditolak = " << jumlahditolak << endl;
	cout << " " << endl; 
	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
	cout << " SELAMAT ATAS KANDIDAT DI TERIMA " << endl;
	cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=" << endl;
	cout << " " << endl;

}

int main() {
	inputdata();
	tampilkandata();
	hitungjumlahditerima();
	return 0;
}