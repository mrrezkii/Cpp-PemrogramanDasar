#include <iostream>
#include "string"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string nama;
	string umur;

	cout << "Masukkan nama :  " ;
	cin >> nama;
	cout << "Masukkan umur:  ";
	cin >> umur;
	cout << "Hai, " << nama << ". Umur Anda " << umur << " tahun";
	
	return 0;
}
