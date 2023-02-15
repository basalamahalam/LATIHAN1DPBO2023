class Mahasiswa
{
	private:
		string nama;
		string nim;
		string prodi;
		string fakultas;
	public:
		Mahasiswa(){
		}
		Mahasiswa(string nama,string nim, string prodi, string fakultas){
			this->nama = nama;
			this->nim = nim;
			this->prodi = prodi;
			this->fakultas = fakultas;
		}
		void setNama(string nama){
			this->nama = nama;
		}
		string getNama(){
			return this->nama;
		}
		void setNim(string nim){
			this->nim = nim;
		}
		string getNim(){
			return this->nim;
		}
		void setProdi(string prodi){
			this->prodi = prodi;
		}
		string getProdi(){
			return this->prodi;
		}
		void setFakultas(string fakultas){
			this->fakultas = fakultas;
		}
		string getFakultas(){
			return this->fakultas;
		}
};