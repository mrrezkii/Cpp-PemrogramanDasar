#include <iostream>
#include "string"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	string barang;
	int harga;
	int bayar;
	int total;

	
	cout << "Masukkan nama barang: ";
	cin >> barang;
	cout << "Harga barang: ";
	cin >> harga;
	cout << "Bayar: ";
	cin >> bayar;
	
	if(harga < bayar)
	{	total = bayar - harga;
		cout << "Anda memiliki kembalian " << total;
	}
	else if(harga > bayar)
	{	
		total = harga - bayar;
		cout << "Anda memiliki kekurangan - " << total;
	}
	
	//total = bayar - harga;
	//cout << "Anda menerima kembalian " << total;
	
	return 0;
}
