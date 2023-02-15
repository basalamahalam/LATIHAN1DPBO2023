from Mahasiswa import Mahasiswa

class Crud:
    def __init__(self):
        self.__listMhs = []
    
    def tambah(self):
        print("\n")
        nama = input("Masukkan nama     : ")
        nim = input("Masukkan nim      : ")
        prodi = input("Masukkan prodi    : ")
        fakultas = input("Masukkan fakultas : ")
        temp = Mahasiswa(nama,nim,prodi,fakultas)
        self.__listMhs.append(temp)
        print( nama + " berhasil ditambahkan!\n")
    
    def ubah(self):
        if len(self.__listMhs)==0:
            print("Data tidak ada")
        else:
            print("Masukkan indeks nama")
            for i in range(len(self.__listMhs)):
                print(str(i+1)+". "+self.__listMhs[i].getNama())
		
            print()
            masukkan = int(input())
            print()
            
            if masukkan<=len(self.__listMhs) and masukkan > 0:
                print("Masukkan indeks isi")
                print("1. nama")
                print("2. nim")
                print("3. prodi")
                print("4. fakultas")
                print()
				
                ubahB = int(input())
                print()
                
				
                if ubahB==1:
                    print("Masukkan nama : ")
                    nama = input()
                    self.__listMhs[masukkan-1].setNama(nama)
                elif ubahB==2:
                    print("Masukkan nim : ")
                    nim = input()
                    self.__listMhs[masukkan-1].setNim(nim)
                elif ubahB==3:
                    print("Masukkan prodi : ")
                    prodi = input()
                    self.__listMhs[masukkan-1].setProdi(prodi)
                elif ubahB==4:
                    print("Masukkan fakultas : ")
                    fakultas = input()
                    self.__listMhs[masukkan-1].setFakultas(fakultas)
                else:
                    print("Indeks tidak valid")
            else:
                print("Indeks tidak valid")
			
		
        print()
	
    def hapus(self):
        if len(self.__listMhs)==0 :
            print("Data tidak ada")
        else:
            print("Masukkan indeks nama")
            for i in range(len(self.__listMhs)):
                print(str(i+1)+". "+self.__listMhs[i].getNama())
            
            print()
            masukkan = int(input())
            print()
            
            if masukkan<=len(self.__listMhs) and masukkan >0:
                print(self.__listMhs[masukkan-1].getNama() + " berhasil dihapus!")
                self.__listMhs.pop(masukkan-1)
            else:
                print("Indeks tidak valid")
            
        
        print()
	
    def tampil(self):
        print()
        if len(self.__listMhs)==0 :
            print("Data tidak ada", end="")
        else:
            maxNama=4
            maxNim=3
            maxProdi=5
            maxFakultas=8
            for i in range(len(self.__listMhs)):
                if(len(self.__listMhs[i].getNama())>maxNama):
                    maxNama = len(self.__listMhs[i].getNama())
                
                if(len(self.__listMhs[i].getNim())>maxNim):
                    maxNim = len(self.__listMhs[i].getNim())
                
                if(len(self.__listMhs[i].getProdi())>maxProdi):
                    maxProdi = len(self.__listMhs[i].getProdi())
                
                if(len(self.__listMhs[i].getFakultas())>maxFakultas):
                    maxFakultas = len(self.__listMhs[i].getFakultas())
                
            
            for j in range(maxNama+maxNim+maxProdi+maxFakultas+13):
                print("-", end="")
            print()
            
            print("| Nama", end="")
            for j in range(4,maxNama):
                print(" ", end="")
            print(" | Nim", end="")
            for j in range(3,maxNim):
                print(" ", end="")
            print(" | Prodi", end="")
            for j in range(5,maxProdi):
                print(" ", end="")
            print(" | Fakultas", end="")
            for j in range(8,maxFakultas):
                print(" ", end="")
            print(" |", end="")
            print()
            for j in range(maxNama+maxNim+maxProdi+maxFakultas+13):
                print("-", end="")
            print()
            
            for i in range(len(self.__listMhs)):
                print( "| " + self.__listMhs[i].getNama(), end="")
                for j in range(len(self.__listMhs[i].getNama()),maxNama):
                    print(" ", end="")
                print(" | " + self.__listMhs[i].getNim(), end="")
                for j in range(len(self.__listMhs[i].getNim()),maxNim):
                    print(" ", end="")
                print(" | " + self.__listMhs[i].getProdi(), end="")
                for j in range(len(self.__listMhs[i].getProdi()),maxProdi):
                    print(" ", end="")
                print(" | " + self.__listMhs[i].getFakultas(), end="")
                for j in range(len(self.__listMhs[i].getFakultas()),maxFakultas):
                    print(" ", end="")
                print(" |", end="")
                print("\n", end="")
                for j in range(maxNama+maxNim+maxProdi+maxFakultas+13):
                    print("-", end="")
                print()
            
        
        print()
    
