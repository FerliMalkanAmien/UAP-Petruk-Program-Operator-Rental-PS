// UAP Pemrograman Terstruktur
// Kelompok 3 :
// 1. Ferli Malkan Amien : 2117051050
// 2. Hamzah Hanif : 2117051032
// 3. Rafli Ashari Junaidi : 2117051067

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXQUEUE 20
#define MAXSTACK 50

using namespace std;

//===============================QUEUE QUEUE QUEUE==================================
int nomer[MAXQUEUE];
int head=-1;
int tail=-1;

bool IsEmptyQueue(){
  if(tail==-1){
       return true;
   }else{
       return false;
   }
}

bool IsFullQueue(){
   if(tail==MAXQUEUE-1){
       return true;
   }else{
       return false;
   }
}

void AntrianMasukQueue(int no){
    if (IsEmptyQueue()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}
//===============================QUEUE QUEUE QUEUE==================================

//===============================STACK STACK STACK==================================
int top = -1;
string Stack[MAXSTACK];

bool isFull_Stack(){
    if (top == MAXSTACK -1){
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty_Stack(){
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}

void push_Stack(){
    if (isFull_Stack()){
        cout << ">> Tumpukan sudah penuh !" << endl;
    }
    else {
        top++;
        cout << "Catatan : Gunakan '_' untuk mewakili spasi" << endl;
        cout << ">> Masukan Judul CD : ";
        cin  >> Stack[top];
        cout << "\nPada Tingkatan ke " << (top + 1) << endl;
        cout << "CD [" << Stack[top] << "] Telah Ditambah!" << endl;
    }
}

void pop_Stack(){
    if (isEmpty_Stack()){
        cout << ">> Tumpukan Kosong!" << endl;
    }
    else {
        cout << "\nCD [" << Stack[top] << "] pada tingkatan ke " << (top + 1) << " dalam tumpukan diambil!" << endl;
        top--;
    }
}

int clear_Stack(){
    return top = -1;
}

void Print_Stack(){
    if (isEmpty_Stack()){
        cout << "\tStack : " << endl;
        cout << "========================" << endl;
        cout << "\tEmpty! " << endl;
        cout << "========================" << endl;
    }
    else{
        cout << "\t\t Stack : " << endl;
        cout << "========================" << endl;

        for (int i = top; i >= 0; i--){
            cout << "XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
        }
        cout << "========================" << endl;
    }
}


//================================STACK STACK STACK=================================

int main(){
    int pilih, p=1, urut, ChooseSwitch, ChooseQueue, que=1, antrian;
	string game = "Belum ada game yang dipilih";

	do{
        system("CLS");
		cout << "===================================" << endl;
        cout << "|          Selamat Datang         |" << endl;
        cout << "|  di Program Operator Rental PS  |" << endl;
        cout << "|   Rental PS : Thomas Slebew     |" << endl;
        cout << "===================================" << endl;
        cout << "|1. List Game                     |" << endl;
        cout << "|2. Player                        |" << endl;
        cout << "|3. Exit                          |" << endl;
        cout << "===================================" << endl;
        cout << " Masukan Pilihan : " ; cin >> pilih;

	switch (pilih) {
	        case 1:
		system("CLS");
	            do {
	                cout << "==========================================" << endl;
	                cout << "|  Program Penyimpanan CD Playstation 2  |" << endl;
	                cout << "==========================================" << endl;
	                cout << endl;
	                Print_Stack();
	                cout << "\n1. Push";
	                cout << "\n2. Pop";
	                cout << "\n3. Clear";
	                cout << "\n4. Beranda";
	                cout << "\n\n>> Choose : ";
	                cin >> ChooseSwitch;
			    
			switch(ChooseSwitch){
	                    case 1:
	                        push_Stack();
	                        getche();
	                        break;
	                    case 2:
	                        pop_Stack();
	                        getche();
	                        break;
	                    case 3:
	                        clear_Stack();
	                        cout << "\nTumpukan CD Telah Berhasil Disingkirkan" << endl;
	                        getche();
	                        break;
	                    case 4:
	                        cout << "Kembali ke Beranda " << endl;
	                        getche();
							pilih = 0;
	                        break;
	                    default :
	                        cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
	                        getche();
	                        break;
	                }
	                system("CLS");
	            } while (ChooseSwitch != 4);
	            break;

		case 2:
			do{
				system("CLS");
				cout << "===============================" << endl; 
				cout << "|  PROGRAM OPERATOR RENTAL PS |" << endl;
				cout << "===============================" << endl;
				cout << "|1. Tambah Antrian            |" << endl;
				cout << "|2. Panggil Antrian           |" << endl;
				cout << "|3. Lihat daftar antrian      |" << endl;
				cout << "|4. Format                    |" << endl;
				cout << "|5. Beranda                   |" << endl;
				cout << "===============================" << endl;
				cout << "Choose ! "; cin >> ChooseQueue;
				cout << "\n\n";
				
				
