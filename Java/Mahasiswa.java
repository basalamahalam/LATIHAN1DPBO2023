public class Mahasiswa
{
	private String nama;
	private String nim;
	private String prodi;
	private String fakultas;
	
	Mahasiswa(){
	}
	Mahasiswa(String nama,String nim, String prodi, String fakultas){
		this.nama = nama;
		this.nim = nim;
		this.prodi = prodi;
		this.fakultas = fakultas;
	}
	public void setNama(String nama){
		this.nama = nama;
	}
	public String getNama(){
		return this.nama;
	}
	public void setNim(String nim){
		this.nim = nim;
	}
	public String getNim(){
		return this.nim;
	}
	public void setProdi(String prodi){
		this.prodi = prodi;
	}
	public String getProdi(){
		return this.prodi;
	}
	public void setFakultas(String fakultas){
		this.fakultas = fakultas;
	}
	public String getFakultas(){
		return this.fakultas;
	}
	
}