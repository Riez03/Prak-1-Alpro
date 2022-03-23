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
}
