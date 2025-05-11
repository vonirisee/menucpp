#include <iostream>
#include <conio.h>
using namespace std;

int redline[5];

void info (){
  system("cls");
  cout<<"Indonesia hebat, poliban juara";
getch();
}
void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. input array"<<"\n";            
cout<<"2. output array"<<"\n";            
cout<<"3. sort"<<"\n";           
cout<<"4. informasi"<<"\n";            
cout<<"5. exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void dataa(int redline[]){
  system ("cls");
  cout << "Input 6 angka" << endl;
  for(int i = 0; i < 5; i++) {
    cout << "Angka ke " << (i+1) << ": ";
    cin >> redline[i];
  }
  getch();
}

void output(){
  system("cls");
  cout << "berikut array yang telah di input" << endl;
  for(int i = 0 ; i < 5; i++){
    cout << redline[i] << " ";
}
  getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    dataa(redline);
    break;
   case '2':
    output();
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}