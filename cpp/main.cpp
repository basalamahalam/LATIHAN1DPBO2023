//Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 1
//dalam mata kuliah DPBO untuk keberkahanNya maka
//saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <bits/stdc++.h>
using namespace std;
#include "Mahasiswa.cpp"
#include "Crud.cpp"

int main(){
	Crud newCrud;
	int menu;
	
	do{
		cout << "Pilih menu" << endl;
		cout << "1: tambah data" << endl;
		cout << "2: ubah data" << endl;
		cout << "3: hapus data" << endl;
		cout << "4: lihat data" << endl;
		cout << "5: keluar" << endl << endl;
		cin >> menu;
		switch(menu){
			case 1:
				newCrud.tambah();
				break;
			case 2:
				newCrud.ubah();
				break;
			case 3:
				newCrud.hapus();
				break;
			case 4:
				newCrud.tampil();
				break;
			case 5:
				break;
			default:
				cout << "Indeks tidak valid" << endl;
		}
		
		cout << endl;
	
	}while(menu!=5);
	
	return 0;
}