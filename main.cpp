// Anisa Raden
//1817051007
//Stack With Linked List Concept

#include <iostream>
#include <conio.h>
#define KUOTA_STACK 10
using namespace std;

struct elemen {
  int data;
  elemen *next;
  };
  
  elemen *TOP;
  
  void isi (int variable)
  {
    elemen *baru = new elemen;
    baru->data = variable;
    baru->next = TOP;
    TOP = baru;
   }
   
   void peek ()
   {
      if (TOP=='\0')
        {
          cout<<"Stack Kosong!\n";
        }
    else
        {
           cout<<TOP->data;
         }
   }
      
    void hapus()
    {
      if (TOP=='\0')
      {
        cout<<"Stack Kosong!\n";
      }
      else
      {
        cout<<endl<<"Data "<<TOP->data<<" terhapus.\n";
        TOP = TOP->next;
       }
     }
     
     void menu ()
     {
       cout<<"\nStack :\n";
       elemen *help =  TOP;
       while (help != NULL)
       {
        cout<<help->data;
        cout<<" ";
        help = help->next;
        }
      }
      
int main ()
{
  int pilih, nomor;
  do
  {
    if (TOP != NULL)
    system ("CLS");
    cout<<"````````````````````````````````````````"<<endl;
    cout<<"Program Stack dengan konsep Linked List"<<endl<<endl;
    cout<<"Nama : Anisa Raden"<<endl;
    cout<<"NPM : 1817051007"<<endl<<endl;;
    cout<<"````````````````````````````````````````"<<endl;
    
    menu () ;
    cout<<endl<<"Menu : "<<endl;
    cout<<"\n1. Insert Stack"<<endl;
    cout<<"2. Delete Stack"<<endl;
    cout<<"3. Get Top"<<endl;
    cout<<"4. Quit"<<endl<<endl;
    cout<<"Pilih : ";
    cin>>pilih;
    cout<<endl;
    
    switch (pilih)
    { 
      case 1:
      cout<<"Masukkan Data: ";
      cin>>nomor;
      isi (nomor);
      break;
      
      case 2:
      hapus ();
      break;
      
      case 3:
      cout<<"Elemen Paling Atas dari Stack adalah: ";
      peek ();
      cout<<endl;
      getch ();
      break;
      
      case 4:
      cout<<"Terimakasih";
      exit (0);
      
      default:
      cout<<"\nPilihan tidak tersedia.\n";
    }
  }
  while (pilih != 4);
  system ("Pause");
  return 0;
}
      
    
    
