#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define admin 50000
const float diskon=0.05;

using namespace std;

int main(){
	char nama[10], tipe[5], lagi;
	int kamar, lama, biaya, total, sewa, bayar, bayarlagi, kembalian, harga[3] {100000, 200000, 300000}, hargadiskon, i=0;
	bool hutang;
	
	do{
		system("CLS");
		cout<<"Selamat Datang di Hotel Pakuningratan"<<endl;
		cout<<"Program Pemesanan Kamar Hotel"<<endl;
		cout<<"Masukkan Nama Anda\t: ";
		cin>>nama;
		cout<<"Lama Menginap\t\t: ";
		cin>>lama;
		cout<<"Pilihan Kamar Yang Tersedia: "<<endl;
		cout<<"[1]Kamar Biasa"<<endl;
		cout<<"[2]Kamar VIP"<<endl;
		cout<<"[3]Kamar VVIP"<<endl;
		cout<<"Pilihan Kamar Anda Adalah: ";
		cin>>kamar;
		
		switch(kamar){
			case 1:
				printf(tipe,"Biasa");
				break;
			case 2:
				printf (tipe,"VIP");
				i=1;
				break;
			default:
				cout<<"Pilihan Kamar Tidak Tersedia"<<endl;
				goto tanya;
		}
		sewa=lama*harga[i];
		total=admin+sewa;
		cout<<endl;
		cout<<"Hotel Pakuningratan"<<endl;
		cout<<"====================================================================="<<endl;
		cout<<"Nama Penyewa\t\t\t: "<<nama<<endl;
		cout<<"Tipe Kamar\t\t\t: "<<kamar<<endl;
		cout<<"Lama Menginap\t\t\t: "<<lama<<endl;
		cout<<"Biaya Sewa\t\t\t: "<<sewa<<endl;
		cout<<"Biaya Administrasi\t\t\t: "<<admin<<endl;
		cout<<"Total Biaya Sewa\t\t\t: "<<total<<endl;
		
		if(lama>=7){
			hargadiskon=total*diskon;
			total-=hargadiskon;
			cout<<"Diskon Potongan Harga\t\t: "<<hargadiskon<<endl;
			cout<<"Total Biaya Sewa Setelah Diskon : "<<total<<endl;
		}
		cout<<"====================================================================="<<endl;
		cout<<"Dibayar\t\t\t\t: ";
		cin>>bayar;
		
		while(hutang=bayar<total){
			cout<<"Bayar Lagi\t\t\t: ";
			cin>>bayarlagi;
			bayar+=bayarlagi;
		};
		kembalian=bayar-total;
		cout<<"Uang Di bayar\t\t\t: "<<bayar<<endl;
		cout<<"Uang Kembalian\t\t\t: "<<kembalian<<endl;
		cout<<"====================================================================="<<endl;
		tanya:
		cout<<"Apakah Anda Ingin Memesan Lagi? \n[Y/T] : ";
		cin>>lagi;
	}while(lagi=='Y'||lagi=='y');
	
	cout<<"Terima Kasih Telah Berkunjung di Hotel Kami";
	getch();
	return 0;
}
