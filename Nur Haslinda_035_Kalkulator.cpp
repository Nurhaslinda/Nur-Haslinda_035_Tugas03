#include <iostream>
using namespace std;

int main(){
	
	int konversi, A, B;
	float hasil;
	
	cout<<"======================================";
	cout<<"\n\tPROGRAM KALKULATOR";
	cout<<"\n======================================";
	
	cout<<"\nPilihan Jenis Konversi";
	cout<<"\n-Penambahan = 1\n-Pengurangan = 2\n-Perkalian = 3\n-Pembagian = 4\n-Modulo = 5";
	cout<<"\nKonversi yang anda inginkan (DALAM ANGKA) = ";
	cin>>konversi;
	
	cout<<"\nMasukkan Nilai	A	= ";
	cin>>A;
	cout<<"Masukkan Nilai B	= ";
	cin>>B;
	
	switch(konversi) {
		case 1:
			hasil=A+B;
			cout<<"\n";
			cout<<"\n\tHasil Konversi A+B	= "<<hasil;
			break;
		case 2:
			hasil=A-B;
			cout<<"\n";
			cout<<"\n\tHasil Konversi A-B	= "<<hasil;
			break;
		case 3:
			hasil=A*B;
			cout<<"\n";
			cout<<"\n\tHasil Konversi A*B	= "<<hasil;
			break;
		case 4:
			hasil=float(A)/B;
			hasil=A/float(B);
			cout<<"\n";
			cout<<"\n\tHasil Konversi A/B	= "<<hasil;
			break;
		case 5:
			hasil=A%B;
			cout<<"\n";
			cout<<"\n\tHasil Konversi A%B	= "<<hasil;
			break;
		default:
			cout<<"\n";
			cout<<"\n\tPILIHAN KONVERSI SALAH";	
	}

	return 0;
}
