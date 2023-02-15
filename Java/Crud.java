import java.util.Scanner;
import java.util.ArrayList;

public class Crud
{
	private ArrayList<Mahasiswa> listMhs = new ArrayList<>();
	private Scanner sc = new Scanner(System.in);
	Crud(){
	}
	
	public void tambah(){
		String nama, nim, prodi, fakultas;
		System.out.print("Masukkan nama     : ");
		nama = sc.next();
		System.out.print("Masukkan nim      : ");
		nim = sc.next();
		System.out.print("Masukkan prodi    : ");
		prodi = sc.next();
		System.out.print("Masukkan fakultas : ");
		fakultas = sc.next();
		Mahasiswa temp = new Mahasiswa(nama,nim,prodi,fakultas);
		listMhs.add(temp);
		System.out.println(nama + " berhasil ditambahkan!");
		System.out.println();
	}
	
	public void ubah(){
		String nama, nim, prodi, fakultas;
		if(listMhs.size()==0){
			System.out.println("Data tidak ada");
		}else{
			System.out.println("Masukkan indeks nama");
			for(int i=0;i<listMhs.size();i++){
				System.out.println(Integer.toString(i+1)+
				". "+listMhs.get(i).getNama());
			}
			System.out.println();
			int masukkan;
			try{
				masukkan = sc.nextInt();
				System.out.println();
			}catch(Exception e){
				masukkan=-1;
			}
			if(masukkan<=listMhs.size() && masukkan > 0){
				System.out.println("Masukkan indeks isi");
				System.out.println("1. nama");
				System.out.println("2. nim");
				System.out.println("3. prodi");
				System.out.println("4. fakultas");
				System.out.println();
				
				int ubahB;
				try{
					ubahB = sc.nextInt();
					System.out.println("");
				}catch(Exception e){
					ubahB = -1;
				}
				switch(ubahB){
					case 1:
						System.out.print("Masukkan nama : ");
						nama = sc.next();
						listMhs.get(masukkan-1).setNama(nama);
						break;
					case 2:
						System.out.print("Masukkan nim : ");
						nim = sc.next();
						listMhs.get(masukkan-1).setNim(nim);
						break;
					case 3:
						System.out.print("Masukkan prodi : ");
						prodi = sc.next();
						listMhs.get(masukkan-1).setProdi(prodi);
						break;
					case 4:
						System.out.print("Masukkan fakultas : ");
						fakultas = sc.next();
						listMhs.get(masukkan-1).setFakultas(fakultas);
						break;
					default:
						System.out.println("Indeks tidak valid");
				}
			}else{
				System.out.println("Indeks tidak valid");
			}
		}
		System.out.println();
	}
	
	public void hapus(){
		if(listMhs.size()==0){
			System.out.println("Data tidak ada");
		}else{
			System.out.println("Masukkan indeks nama");
			for(int i=0;i<listMhs.size();i++){
				System.out.println(Integer.toString(i+1)+
				". "+listMhs.get(i).getNama());
			}
			System.out.println();
			int masukkan;
			try{
				masukkan = sc.nextInt();
				System.out.println();
			}catch(Exception e){
				masukkan = -1;
			}
			if(masukkan<=listMhs.size() && masukkan >0){
				System.out.println(listMhs.get(masukkan-1).getNama() + " berhasil dihapus!");
				listMhs.remove(masukkan-1);
			}else{
				System.out.println("Indeks tidak valid");
			}
		}
		System.out.println();
	}
	
	public void tampil(){
		if(listMhs.size()==0){
			System.out.println("Data tidak ada");
		}else{
			int maxNama=4,maxNim=3,maxProdi=5,maxFakultas=8;
			for(int i=0;i<listMhs.size();i++){
				if(listMhs.get(i).getNama().length()>maxNama){
					maxNama = listMhs.get(i).getNama().length();
				}
				if(listMhs.get(i).getNim().length()>maxNim){
					maxNim = listMhs.get(i).getNim().length();
				}
				if(listMhs.get(i).getProdi().length()>maxProdi){
					maxProdi = listMhs.get(i).getProdi().length();
				}
				if(listMhs.get(i).getFakultas().length()>maxFakultas){
					maxFakultas = listMhs.get(i).getFakultas().length();
				}
			}
			for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)System.out.print("-");
			System.out.println();
			
			System.out.print("| Nama");
			for(int j=4;j<maxNama;j++)System.out.print(" ");
			System.out.print(" | Nim");
			for(int j=3;j<maxNim;j++)System.out.print(" ");
			System.out.print(" | Prodi");
			for(int j=5;j<maxProdi;j++)System.out.print(" ");
			System.out.print(" | Fakultas");
			for(int j=8;j<maxFakultas;j++)System.out.print(" ");
			System.out.print(" |");
			System.out.println();
			for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)System.out.print("-");
			System.out.println();
			
			for(int i=0;i<listMhs.size();i++){
				System.out.print("| "+listMhs.get(i).getNama());
				for(int j=listMhs.get(i).getNama().length();j<maxNama;j++)System.out.print(" ");
				System.out.print(" | "+listMhs.get(i).getNim());
				for(int j=listMhs.get(i).getNim().length();j<maxNim;j++)System.out.print(" ");
				System.out.print(" | "+listMhs.get(i).getProdi());
				for(int j=listMhs.get(i).getProdi().length();j<maxProdi;j++)System.out.print(" ");
				System.out.print(" | "+listMhs.get(i).getFakultas());
				for(int j=listMhs.get(i).getFakultas().length();j<maxFakultas;j++)System.out.print(" ");
				System.out.print(" |");
				System.out.println();
				for(int j=0;j<(maxNama+maxNim+maxProdi+maxFakultas+13);j++)System.out.print("-");
				System.out.println();
			}
		}
		System.out.println();
	}
	
}