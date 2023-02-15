<?php

class Mahasiswa
{
	private $nama ='';
	private $nim = '';
	private $prodi = '';
	private $fakultas= '';
	private $foto= '';
	
	public function __construct($nama,$nim, $prodi, $fakultas, $foto){
		$this->nama = $nama;
		$this->nim = $nim;
		$this->prodi = $prodi;
		$this->fakultas = $fakultas;
		$this->foto = $foto;
	}
	public function setNama($nama){
		$this->nama = $nama;
	}
	public function getNama(){
		return $this->nama;
	}
	public function setNim($nim){
		$his->nim = $nim;
	}
	public function getNim(){
		return $this->nim;
	}
	public function setProdi($prodi){
		$this->prodi = $prodi;
	}
	public function getProdi(){
		return $this->prodi;
	}
	public function setFakultas($fakultas){
		$this->fakultas = $fakultas;
	}
	public function getFakultas(){
		return $this->fakultas;
	}
	public function setFoto($foto){
		$this->foto = $foto;
	}
	public function getFoto(){
		return $this->foto;
	}
}

?>