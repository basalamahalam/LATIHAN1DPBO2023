class Mahasiswa:
    def __init__(self, nama, nim, prodi, fakultas):
        self.nama = nama
        self.nim = nim
        self.prodi = prodi
        self.fakultas = fakultas
    
    def setNama(self, nama):
        self.nama = nama

    def getNama(self):
        return self.nama

    def setNim(self, nim):
        self.nim = nim

    def getNim(self):
        return self.nim
	
    def setProdi(self, prodi):
        self.prodi = prodi
	
    def getProdi(self):
        return self.prodi
	
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
	
    def getFakultas(self):
        return self.fakultas
	