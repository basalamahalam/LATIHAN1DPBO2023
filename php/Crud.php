<?php

class Crud
{
	private $listMhs = array();
	
	public function __construct(){
		$indeks = 0;
	}
	public function tambah($nama,$nim,$prodi,$fakultas,$foto){
		$temp = new Mahasiswa($nama,$nim,$prodi,$fakultas,$foto);
		$this->listMhs[]=$temp;
	}
	
	public function tampil(){
		// echo endl;
		if(sizeof($this->listMhs)==0){
			echo "Data tidak ada";
		}else{
			echo "<table border = '1'>";
			
			echo "<tr>";
			echo "<td> Nama </td>";
			echo "<td> Nim </td>";
			echo "<td> Prodi </td>";
			echo "<td> Fakultas </td>";
			echo "<td> Foto </td>";
			echo "</tr>";
			
			foreach ($this->listMhs as $mahasiswa) {
				echo "<tr>";
				echo "<td>" .  $mahasiswa->getNama() . "</td>";
				echo "<td>" .  $mahasiswa->getNim() . "</td>";
				echo "<td>" .  $mahasiswa->getProdi() . "</td>";
				echo "<td>" .  $mahasiswa->getFakultas() . "</td>";
				echo "<td><img src=\"".  $mahasiswa->getFoto() . "\" width='100px' /></td>";
				echo "</tr>";
			}
			echo "</table>";
		}
	}
};