/*Nama : Anugerah Prima Bagaskara
NPM : 140810180006
Tanggal Buat : 10/04/2019
Deskripsi : Pretest
*/
#include <iostream>
#include <iomanip>
using namespace std;

struct ElemtList{
	char npm[20];
	char nama[20];
	float ipk;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First) {
	First = NULL;
}

void createElmt(pointer& pBaru) {
	pBaru = new ElemtList;
	cout<<"Nama :	";cin>>pBaru->nama;
	cout<<"NPM : ";cin>>pBaru->npm;
	cout<<"IPK : ";cin >> pBaru->ipk;
	pBaru->next = NULL;
}

void insertFirst(List& First, pointer pBaru){
	if (First==NULL)
		First=pBaru;
	else {
		pBaru->next=First;
		First=pBaru;
	}
}

void traversal(List First){
	pointer pBantu;
	int i=1;
	if(First==NULL){
		cout<<"List kosong"<<endl;
	}
	else{
		pBantu=First;
		do{
			cout<<i++<<setw(10)<<pBantu->npm<<setw(15)<<pBantu->nama<<setw(15)<<pBantu->ipk<<endl;
			pBantu = pBantu->next;
		}while(pBantu !=NULL);
	}
}

main(){
	pointer p;
	List Ma08;
	int pil;
	char jawab;
	
	createList(Ma08);
	cout<<"Menu :"<<endl;
	do{
	cout<<"1. Tambah Data "<<endl;
	cout<<"2. Cetak "<<endl;
	cout<<"#. Keluar "<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>pil;
	if(pil==1){
		createElmt(p);
		insertFirst(Ma08,p);
	}
	else if(pil==2){
		cout<<"========================================================================"<<endl;
		cout<<"No."<<setw(5)<<"NPM"<<setw(15)<<"NAMA"<<setw(15)<<"IPK"<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		traversal(p);
		cout<<"========================================================================"<<endl;
		system("PAUSE");
	}
	else{
		return 0;
	}
	system("CLS");
	cout<<"Kembali ke menu :";cin>>jawab;
	}while(jawab=='y'||jawab=='Y');
}



