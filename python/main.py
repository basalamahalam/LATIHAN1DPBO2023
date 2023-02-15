# Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 2
# dalam mata kuliah DPBO untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Mahasiswa import Mahasiswa
from Crud import Crud

newCrud = Crud();
menu = -1

while menu!=5:
    print("Pilih menu");
    print("1: tambah data");
    print("2: ubah data");
    print("3: hapus data");
    print("4: lihat data");
    print("5: keluar");
    print();
    menu = int(input())
    if menu == 1:
        newCrud.tambah()
    elif menu == 2:
        newCrud.ubah()
    elif menu == 3:
        newCrud.hapus()
    elif menu == 4:
        newCrud.tampil()
    elif menu == 5:
        break
    else:
        print("Indeks tidak valid\n")
        