#include <iostream>
using namespace std;

int sequentialsearch(string barang[], int jumlah_elemen, string key) {
	bool status=false;
	for(int i =0; i<jumlah_elemen; i++) {
		if(key==barang[i]) {
			status=true;
			return i;
			break;
		}
	}
	if(status == false)
		return -1;
}

int main () {
	
	int pilihan_menu;
	char ulang;
	int varian;
	
	do {
		cout << "##### Qembung Drink #####" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		cout << "Pilihan Menu :" << endl;
		cout << "1. Lihat Pricelist" << endl;
		cout << "2. Cari Harga barang" << endl;
		cout << "3. Mulai Order" << endl;
		cout << "4. Checkout" << endl;
		cout << "5. Cetak Receipt" << endl;
		cout << "Masukan Pilihan Menu : ";
		cin >> pilihan_menu;
		
		cout << endl;
		switch (pilihan_menu) {
			case 1 :
				cout << "===== Daftar Minuman =====" << endl;
				cout << "1. ThaiTea		: Rp.  7000" << endl;
				cout << "2. GreenTea		: Rp.  8000" << endl;
				cout << "3. Coklat Creamy	: Rp. 13000" << endl;
				cout << "4. Susu Regal		: Rp. 15000" << endl;
				cout << "5. Lemon Madu Soda	: Rp. 15000" << endl;
				
				cout << "Ingin Memilih Menu Lain ?? ( Y/T ) : ";
				cin >> ulang;
				cout << endl;
				break;
			case 2 :
				string daftar_barang[] = {"ThaiTea", "GreenTea", "CoklatCreamy", "SusuRegal", "LemonMaduSoda"};
				int daftar_harga[] = {7000, 8000, 13000, 15000, 15000};
				int jumlah_elemen = sizeof(daftar_barang)/sizeof(daftar_barang[0]);
	
				string key;
	
				cout << "Masukan Barang Yang Dicari : ";
				cin >> key;
	
				int indeksbarang = sequentialsearch(daftar_barang, jumlah_elemen, key);
				if(indeksbarang==-1) {
					cout << "harga barang tidak ditemukan" << endl;
				}
				else {
					cout << "Harga Barang Yang Di Cari Adalah : " << daftar_harga[indeksbarang] << endl;
				}
				cout << "Ingin Memilih Menu Lain ?? ( Y/T ) : ";
				cin >> ulang;
				cout << endl;
		}
	} while (ulang!= 'T');
	
	cout << "Terima Kasih... :)";
	
	cout << endl;
	return 0;
}
