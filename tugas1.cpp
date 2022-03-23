#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int x,z,y=0;
	string a[100];
	int b[100],c[100],d[100];
	float diskon, hasil;
	int bayar, kembalian;
	ofstream myFile;
	for(int i=0;i<100;i++){
		cout<<"-------Menu Utama-------\n";
		cout<<"1. Masukkan Barang Belanja\n";
		cout<<"2. Keluar\n";
		cout<<"Pilih Menu: ";cin>>x;
		cin.ignore();
		if(x==1){
			cout<<"Nama Barang : ";getline(cin,a[i]);
			cout<<"Kuantitas   : ";cin>>b[i];
			cout<<"Harga Satuan: ";cin>>c[i];
			d[i]=b[i]*c[i];
			cout<<"Total Biaya : "<<d[i]<<endl<<endl;
			y+=1;
		}else if(x==2){
			for(int i=0;i<y;i++){
				z+=d[i];
			}
			cout<<"\nTotal Keseluruhan Biaya: "<<z<<endl;
			if(z>45000){
				cout<<"Mendapat Diskon 10%.\n";
				diskon=z*10/100;
				hasil=z-diskon;
				cout<<"Jadi Anda Harus membayar "<<hasil<<endl;
				cout<<"Bayar= ";cin>>bayar;
				kembalian=bayar-hasil;
				cout<<"Kembalian= "<<kembalian<<endl;
			}
			else{
				cout<<"Anda tidak mendapat diskon.\n";
				cout<<"Bayar= ";cin>>bayar;
				kembalian=bayar-z;
				cout<<"Kembalian= "<<kembalian<<endl;
			}
			cout<<"Keluar";
			break;
		}
	}
	myFile.open("prak1.txt", ios::trunc);
	myFile<<"======Struct Belanja======\n\n";
	for(int i=0;i<y;i++){
		myFile<<"Nama Barang : ";
		myFile<<a[i]<<endl;
		myFile<<"Kuantitas   : ";
		myFile<<b[i]<<endl;
		myFile<<"Harga Satuan: ";
		myFile<<c[i]<<endl;
	}
	myFile<<"\nTotal Keseluruhan Biaya : ";
	myFile<<z<<endl;
	if(z>45000){
		myFile<<"Mendapat Diskon 10%.\n";
		diskon=z*10/100;
		hasil=z-diskon;
		myFile<<"Hasil= "<<hasil<<endl;
	}
	else{
		myFile<<"Anda tidak mendapat diskon.\n";
	}
	myFile<<"Bayar= "<<bayar<<endl;
	myFile<<"Kembalian= "<<kembalian<<endl;
	myFile.close();	
}
