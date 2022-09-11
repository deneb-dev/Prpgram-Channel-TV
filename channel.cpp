#include <conio.h>
#include <iostream.h>

void main()
{
    int tv;

    cout<<"*********DAFTAR CHANNEL TV NASIONAL***********"<<endl;
    cout<<"1. GLOBAL TV"<<endl;
    cout<<"2. ANTV"<<endl;
    cout<<"3. TV ONE"<<endl;
    cout<<"3. SCTV"<<endl;
    cout<<"----------------------------------------------"<<endl;

    cout<<"Masukan Channel Pilihan Anda = ";
    cin>>tv;

    switch(tv) {
    case 1 : cout<<"Chanel yang anda pilih adalah GLOBAL TV"; break;
    case 2 : cout<<"Channel yang anda pilih adalah ANTV"; break;
    case 3 : cout<<"Channel yang anda pilih adalah TV ONE"; break;
    case 3 : cout<<"Channel yang anda pilih adalah SCTV"; break;

    default : cout<<"channel tidak tersedia";
    }
    getch();
}
