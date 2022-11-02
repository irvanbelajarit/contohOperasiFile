#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
void forgot();

main()
{
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Selamat Datang Anggota Keluarga Untar                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.MASUK"<<endl;
        cout<<"2.DAFTAR"<<endl;
        cout<<"3.LUPA KATA SANDI (ATAU) NAMA"<<endl;
        cout<<"4.KELUAR"<<endl;
        cout<<"\nMasukkan Pilihan Anda :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Terima kasih sudah menggunakan program ini\nProgram ini dibuat oleh kelompok 8\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"Terjadi suatu kesalahan , mohon ulangi lagi\n"<<endl; 
                        main();
        }
        
}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"Mohon Masukkan Nama Dan Kata Sandi Anda!"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello "<<user<<"\nAnda Berhasil Masuk\nKami Senang Anda Datang.\nTerima Kasih.\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nTerjadi Suatu Kesalahan\nDimohon untuk periksa kembali username dan password anda!\n";
                main();
        }
}

void registr()
{
        
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Masukkan nama anda :";
        cin>>reguser;
        cout<<"\nMasukkan Password anda :";
        cin>>regpass;
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nPendaftaran berhasil\n";
        main();
        
        
}

void forgot()
{
        int ch;
        system("cls");
        cout<<"Lupa ? Pilih opsi berikut untuk mengingat kembali\n";
        cout<<"1.Mencari id dengan username"<<endl;
        cout<<"2.Mencari id dengan password"<<endl;
        cout<<"3.Kembali ke Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nMasukkan username yang anda ingat :";
                        cin>>searchuser;
                        
                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nSelamat, akun anda kembali\n";
                                cout<<"\nPassword anda ialah "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nMaaf, userID anda tidak ada dalam database kami\n";
                                cout<<"\nDimohon untuk contact sistem administrasi untuk keterangan lebih lanjut \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nMasukkan password yang anda ingat :";
                        cin>>searchpass;
                        
                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nPassword anda telah ditemukan dalam database \n";
                                cout<<"\nId anda : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Maaf, password anda tidak ada dalam database kami \n";
                                cout<<"\nDimohon untuk contact sistem administrasi untuk keterangan lebih lanjut\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Maaf, pilihan anda salah. silahkan untuk mecoba lagi."<<endl;
                        forgot();
        }
}
