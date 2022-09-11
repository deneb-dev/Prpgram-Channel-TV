#include <conio.h>
#include <iostream.h>

void main()
{
    int tv;

    cout<<"*********DAFTAR CHANNEL TV***********"<<endl;
    cout<<"1. RCTI"<<endl;
    cout<<"2. ANTV"<<endl;
    cout<<"3. TRANS TV"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"Masukan Channel Pilihan = ";
    cin>>tv;

    switch(tv) {
    case 1 : cout<<"Chanel yang anda pilih adalah RCTI"; break;
    case 2 : cout<<"Channel yang anda pilih adalah ANTV"; break;
    case 3 : cout<<"Channel yang anda pilih adalah TRANS TV"; break;

    default : cout<<"channel tidak tersedia";
    }
    getch();
}
