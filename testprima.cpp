#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	 
	
	int bil;
	int i;
	int faktor = 0;
	
	cout << "Masukkan bilangan: ";
	cin >> bil;
	
	for(i = 1; i <= bil; i++)
	{
		if(bil % i == 0)
		{
			faktor++;
		}
	}
	if (faktor == 2)
	{
		cout << "Prima";
	}
	else
	{
		cout << "Bukan bilangan prima";
	}
	return 0;
}
