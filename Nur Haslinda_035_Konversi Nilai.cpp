#include <iostream>
using namespace std;

int main() {
	
	string nama, nim;
	int nilai;
	
	cout<<"========================================";
	cout<<"\n\tKONVERSI NILAI SISWA";
	cout<<"\n========================================";
	
	cout<<"\nMasukkan nama anda	= ";
	getline(cin,nama);
	cout<<"Masukkan NIM anda	= ";
	cin>>nim;
	cout<<"Masukkan nilai anda	= ";
	cin>>nilai;
	
	if(nilai>=80 && nilai<=100){
		cout<<"\n\tAnda mendapat nilai A";
	}else if(nilai>=65 && nilai<=79){
		cout<<"\n\tAnda mendapat nilai B";
	}else if(nilai>=50 && nilai<=64){
		cout<<"\n\tAnda mendapat nilai C";
	}else if(nilai>=35 && nilai<=49){
		cout<<"\n\tAnda mendapat nilai D";
	}else if(nilai>=0 && nilai<=34){
		cout<<"\n\tAnda mendapat nilai E";
	}else{
		cout<<"Nilai yang anda inputkan salah";
	}
	
	return 0;
}
