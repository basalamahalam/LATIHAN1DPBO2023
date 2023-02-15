<?php

// Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 1
// dalam mata kuliah DPBO untuk keberkahanNya maka
// saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

require('Mahasiswa.php');
require('Crud.php');

$newCrud = new Crud();
$newCrud->tambah('Budi','1234','Bahasa Sunda','FPSU','https://upload.wikimedia.org/wikipedia/commons/d/d3/Foto_Formal_Sudharmono.jpg');
$newCrud->tambah('Tono','4321','Matematika','FPTK','https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTJ96R12mn_WZOipMYA1QxKQAgD9G9qm1SqbUJnd3I&s');
$newCrud->tampil();

?>