class Crud
{
	private:
		vector<Mahasiswa> listMhs;
	public:
		Crud(){
		}
		void tambah(){
			string nama, nim, prodi, fakultas;
			cout << endl;
			cout << "Masukkan nama     : ";
			cin >> nama;
			cout << "Masukkan nim      : ";
			cin >> nim;
			cout << "Masukkan prodi    : ";
			cin >> prodi;
			cout << "Masukkan fakultas : ";
			cin >> fakultas;
			Mahasiswa temp(nama,nim,prodi,fakultas);
			listMhs.push_back(temp);
			cout << nama << " berhasil ditambahkan!" << endl;
		}
		void ubah(){
			string nama, nim, prodi, fakultas;
			cout << endl;
			if(listMhs.size()==0){
				cout << "Data tidak ada";
			}else{
				cout << "Masukkan indeks nama" << endl;
				int i=0;
				for(int i=0; i<listMhs.size(); i++){
					cout << i+1 << ". " << listMhs.at(i).getNama() << endl;
				}
				cout << endl;
				
				int masukkan;
				cin >> masukkan;
				cout << endl;
				
				if(masukkan<=listMhs.size() && masukkan > 0){
					cout << "Masukkan indeks isi" << endl;
					cout << "1. nama" << endl;
					cout << "2. nim" << endl;
					cout << "3. prodi" << endl;
					cout << "4. fakultas" << endl;
					cout << endl;
					
					int ubahB;
					cin >> ubahB;
					
					switch(ubahB){
						case 1:
							cout << "Masukkan nama : ";
							cin >> nama;
							listMhs.at(masukkan-1).setNama(nama);
							break;
						case 2:
							cout << "Masukkan nim : ";
							cin >> nim;
							listMhs.at(masukkan-1).setNim(nim);
							break;
						case 3:
							cout << "Masukkan prodi : ";
							cin >> prodi;
							listMhs.at(masukkan-1).setProdi(prodi);
							break;
						case 4:
							cout << "Masukkan fakultas : ";
							cin >> fakultas;
							listMhs.at(masukkan-1).setFakultas(fakultas);
							break;
						default:
							cout << "Indeks tidak valid";
					}
				}else{
					cout << "Indeks tidak valid";
				}
			}
			cout << endl;
		}
		void hapus(){
			cout << endl;
			if(listMhs.size()==0){
				cout << "Data tidak ada";
			}else{
				cout << "Masukkan indeks nama" << endl;
				for(int i=0;i<listMhs.size();i++){
					cout << i+1 << ". " << listMhs.at(i).getNama() << endl;
				}
				cout << endl;
				int masukkan;
				cin >> masukkan;
				cout << endl;
				
				if(masukkan<=listMhs.size() && masukkan >0){
					cout << listMhs.at(masukkan-1).getNama() << " berhasil dihapus!" << endl;
					listMhs.erase(listMhs.begin() + masukkan-1);
				}else{
					cout << "Indeks tidak valid";
				}
			}
			cout << endl;
		}
		void tampil(){
			cout << endl;
			if(listMhs.size()==0){
				cout << "Data tidak ada";
			}else{
				int maxNama=4,maxNim=3,maxProdi=5,maxFakultas=8;
				for(int i=0;i<listMhs.size();i++){
					if(listMhs.at(i).getNama().length()>maxNama){
						maxNama = listMhs.at(i).getNama().length();
					}
					if(listMhs.at(i).getNim().length()>maxNim){
						maxNim = listMhs.at(i).getNim().length();
					}
					if(listMhs.at(i).getProdi().length()>maxProdi){
						maxProdi = listMhs.at(i).getProdi().length();
					}
					if(listMhs.at(i).getFakultas().length()>maxFakultas){
						maxFakultas = listMhs.at(i).getFakultas().length();
					}
				}
				for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)cout << "-";
				cout << endl;
				
				cout << "| Nama";
				for(int j=4;j<maxNama;j++)cout << " ";
				cout << " | Nim";
				for(int j=3;j<maxNim;j++)cout << " ";
				cout << " | Prodi";
				for(int j=5;j<maxProdi;j++)cout << " ";
				cout << " | Fakultas";
				for(int j=8;j<maxFakultas;j++)cout << " ";
				cout << " |";
				cout << endl;
				for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)cout << "-";
				cout << endl;
				
				for(int i=0; i<listMhs.size(); i++){
					cout << "| " << listMhs.at(i).getNama();
					for(int j=listMhs.at(i).getNama().length();j<maxNama;j++)cout << " ";
					cout << " | " << listMhs.at(i).getNim();
					for(int j=listMhs.at(i).getNim().length();j<maxNim;j++)cout << " ";
					cout << " | " << listMhs.at(i).getProdi();
					for(int j=listMhs.at(i).getProdi().length();j<maxProdi;j++)cout << " ";
					cout << " | " << listMhs.at(i).getFakultas();
					for(int j=listMhs.at(i).getFakultas().length();j<maxFakultas;j++)cout << " ";
					cout << " |";
					cout << endl;
					for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)cout << "-";
					cout << endl;
				}
			}
			cout << endl;
		}
};