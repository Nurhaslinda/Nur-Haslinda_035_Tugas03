#include <iostream>
using namespace std;

int main() {
	int tahun;
	
	cout<<"==================================================";
	cout<<"\n\tKONVERSI PERHITUNGAN TAHUN KABISAT";
	cout<<"\n==================================================";
	
	cout<<"\nMasukkan Tahun	= ";
	cin>>tahun;
	
	cout<<"\n";
	if(tahun%4==0){
		cout<<"\tTAHUN KABISAT";
	}else if(tahun%4!=0 && tahun%100!=0 && tahun%4==0){
		cout<<"\tTAHUN KABISAT";
	}else{
		cout<<"\tTIDAK TAHUN KABISAT";
	}	
	
	return 0;
}
