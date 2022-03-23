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
