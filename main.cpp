#include <iostream>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

class Lib
{

    void setcolor (unsigned short color)
{
    HANDLE hCon= GetStdHandle (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}
    public:
    //int ans;

   void tampilan();
   void sosmed();
   void jurusan();
   void telekomelektro();
   void informatika();
   void rekayasa();
   void profil();
   void alibar();
   void jonathan();
   void paundra();
   void logo();
   void pkm();


    string id[10];
    string data[10];
    string mk1="Algoritma dan Pemrograman";
    string mk3="B.Indonesia";
    string mk4="Computational Thingking";
    string mk5="Praktikum.Alpro";
    string mk6="PTIK";
    string mk2="Fisika";
    string mk7="Keterampilan Komunikasi dan Kepemimpinan";
    string mk8="Kalkulus";

    // Kalkulasi
    void hitung_nilai(int a,int b, string mk)
    {
        int hasil;
        hasil=b-a;
        if(hasil<=4)
        {
                cout << "\n\t\t\t\t\t ----------------------------------------------";
            cout << "\n\t\t\t\t\t      Mata Kuliah : " ; setcolor(3); cout << mk << endl; setcolor(7);
            cout << "\t\t\t\t\t ----------------------------------------------\n";
            cout << "\n\t\t\t\t\t  Jumlah Kehadiran : " << a << " | Jumlah Pertemuan : " << b;
            cout << "\n\n\t\t\t\t\t        -- Status Kehadiran : " ; setcolor(6); cout<< "MEMENUHI " ; setcolor(7); cout << "--" << endl ;
        }
        else
        {
            cout << "\n\t\t\t\t\t ----------------------------------------------";
            cout << "\n\t\t\t\t\t      Mata Kuliah : " ; setcolor(3); cout << mk << endl; setcolor(7);
            cout << "\t\t\t\t\t ----------------------------------------------\n";
            cout << "\n\t\t\t\t\t  Jumlah Kehadiran : " << a << " | Jumlah Pertemuan : " << b;
            cout << "\n\n\t\t\t\t\t        -- Status Kehadiran : " ; setcolor(4); cout<< "TIDAK MEMENUHI " ; setcolor(7); cout << "--" << endl ;
        }

    }
    // Kalkulasi
};

void Lib::logo()
{
 system("cls");
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(6); cout << "\t\t\t\t\tSelamat Datang Di Institut Teknologi Telkom Purwokerto" << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "                              "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(12); cout << "000000000"; setcolor(0); cout << "     "; setcolor(4); cout << "000000000"; setcolor(0); cout << "  "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(12); cout << "000000000000"; setcolor(4); cout << "00000000000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(12); cout << "000000000000"; setcolor(4); cout << "00000000000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(12); cout << "000000000000"; setcolor(4); cout << "00000000000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "               "; setcolor(12); cout << "0"; setcolor(4); cout << "0"; setcolor(0); cout << "              "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(8); cout << "0000"; setcolor(0); cout << "               "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(8); cout << "000000000"; setcolor(0); cout << "     "; setcolor(8); cout << "000000000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "    "; setcolor(8); cout << "0000000000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000000000"; setcolor(0); cout << "   "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "         "; setcolor(8); cout << "00000"; setcolor(0); cout << "   "; setcolor(8); cout << "00000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;
   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "          "; setcolor(8); cout << "0000"; setcolor(0); cout << "   "; setcolor(8); cout << "0000"; setcolor(0); cout << "         "; cout << endl;

   setcolor(0); cout << "\t\t\t\t\t\t"; setcolor(0); cout << "                              "; cout << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================";
}

void Lib::tampilan()
{
    int ans;
   logo();
   //setcolor(14); cout << "\n\t\t\t\t\t\t           Pilih Kode untuk melanjutkan menu" << endl;
   setcolor(14); cout << "\n\n\t\t\t\t\t          #1" ;setcolor(7); cout << " Social Media ITTP" << endl;
   setcolor(14); cout << "\t\t\t\t\t          #2" ;setcolor(7); cout << " Program Studi Pilihan" << endl;
   setcolor(14); cout << "\t\t\t\t\t          #3" ;setcolor(7); cout << " Program Kehadiran Mahasiswa" << endl;
   setcolor(14); cout << "\t\t\t\t\t          #4" ;setcolor(7); cout << " Profile Mahasiswa" << endl;
   setcolor(14); cout << "\t\t\t\t\t          #5" ;setcolor(7); cout << " Tutup Aplikasi" << endl;
   setcolor(7); cout << "\n\t\t\t\t\t        Masukkan Pilihan Anda: ";setcolor(14); cin >> ans;
   if(ans==1)
   {
       system("cls");
       sosmed();
   }
   else if (ans==2)
   {
       system("cls");
       jurusan();
   }
   else if (ans==3)
   {
       system("cls");
     pkm();
   }
   else if (ans==4)
   {
       system("cls");
       profil();
   }
   else if (ans==5)
   {
       exit(0);
   }
   else
   {
       cout << "\t\t\t\t Masukkan Pilihan yang benar";
       getch();
       system("cls");
       tampilan();
   }

}

void Lib::pkm()
{
    logo();
    char kode;
    int kodekuliah;
    int Alpro,Fisika,CT,Indo,Prakal,K3,Kalkulus,PTIK;
    int pal,pind,pct,ppra,pk3,pptik,pka,pis;
    string user1,pass1,ulang,awal,stat=" Saving..";

    do{
    logo();
    setcolor(14);cout << "\n\n\t\t\t\t\t\t #1 ";setcolor(7); cout<< "Register ";
    setcolor(14);cout << "\n\t\t\t\t\t\t #2 ";setcolor(7); cout<< "Kalkulasi Kehadiran " ;
    setcolor(14);cout << "\n\t\t\t\t\t\t #3 ";setcolor(7); cout<< "Rekap Kehadiran" << endl ;
    setcolor(14);cout << "\t\t\t\t\t\t #4 ";setcolor(7); cout<< "Halaman Depan" << endl ;
    cout << "\n\t\t\t\t\t        Masukkan Kode Layanan = "; setcolor(14); cin >> kode;

    switch(kode){
    case '1':

    // Biodata

        system("cls");
        logo();
        setcolor(8);
        //cout << "\n\n\n\n\n\n\n\n\n";
        //cout << "\n\t\t        History >> Kelompok4//LoginPage//RegisterForm ";
        cout << "\n\t\t\t\t\t\t        ";setcolor(6);cout << "REGISTRATION FORM " ; setcolor(8);
   setcolor(3); cout << "\n\t\t\t\t===================================================================="; setcolor(7); cout << endl;
        cout <<"\n\t\t\t\t\tPlease Make your Personal Account For Data Saving" << endl;
        cout << "\t\t\t\t\t          Dengan mengisi Data dibawah ini " << endl;
        cout << "\t\t\t\t\t                ** NO SPASI ** " << endl;
        setcolor(14);cout << "\n\t\t\t\t\t       Nama Lengkap   " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[0] ; setcolor(7);
        setcolor(14);cout << "\t\t\t\t\t       Nama Panggilan " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[1] ; setcolor(7);
        setcolor(14);cout << "\t\t\t\t\t       NIM            " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[2] ; setcolor(7);
        setcolor(14);cout << "\t\t\t\t\t       Kelas          " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[3] ; setcolor(7);
        setcolor(14);cout << "\t\t\t\t\t       Angkatan       " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[4] ; setcolor(7);
        setcolor(14);cout << "\t\t\t\t\t       Asal Kota      " ; setcolor(7); cout << ": " ; setcolor(14); cin >> data[5] ; setcolor(8);

        system("cls");
        logo();
        //cout << "\n\n\n\n\n\n\n\n\n\n";

        cout << "\n\t\t\t\t\t\t        ";setcolor(6);cout << "REGISTRATION FORM " ; setcolor(8);
   setcolor(3); cout << "\n\t\t\t\t===================================================================="; setcolor(7); cout << endl;
        cout <<"\n\t\t\t\t\t\t  Ketikkan Username dan Password" << endl;
        cout << "\t\t\t\t\t\t          ** NO SPASI ** " << endl;
        setcolor(14);cout << "\n\t\t\t\t\t\t   Username " ; setcolor(7); cout << "= " ; setcolor(14); cin >> id[0];
        setcolor(14);cout << "\t\t\t\t\t\t   Password " ; setcolor(7); cout << "= " ; setcolor(14); cin >> id[1]; setcolor(7);
    // End Biodata

        //comment=Loading

        for(int j=0;j<=100;j++){

        system ("cls");
        cout << "\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t\t" << stat <<j<<"%"<<endl;
        cout << "\t\t\t\t" ;


        for (int i=1;i<=j;i++){
            if(i%2==0 ){
                cout<<"|";
            }
        }cout << endl;
        usleep (10);

        }
        //EndLoading



        system("cls");
        logo();
        //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\n\t\t\t\t\t\t Thank You. Your Data is saved ";
        cout << "\n\t\t\t\t\t\t    Kembali ke menu awal ? \n\t\t\t\t\t\t       Answer = " ; setcolor(14); cin>>awal;
        system("cls");
        break;
    case '2':
        system("cls");
        logo();
        setcolor(14);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t\t       Hi there .. " << endl; setcolor(7);
        cout << "\t\t\t        Untuk memulai proses Kalkulasi silahkan ikut langkah berikut " ;
        cout << "\n\t\t\t\t\t\t  1. Buka aplikasi "; setcolor(12); cout <<"\"IGracias\" " << endl; setcolor(7);
        cout << "\t\t\t\t\t\t  2. Pilih " ;setcolor(12); cout << "\"Mahasiswa\" " ;setcolor(7);
        cout << "\n\t\t\t\t\t\t  3. Buka Menu " ;setcolor(12); cout << "\"Rekap\"" << endl;
        setcolor(7);
        cout << "\n\t\t\t\t\t\t  Jika sudah silahkan tekan ";
        cout << "\n\t\t\t\t\t\t     --------------- ";
        cout << "\n\t\t\t\t\t\t     --- " ;setcolor(3); cout << " Enter  " ;setcolor(7); cout << "--- ";
        cout << "\n\t\t\t\t\t\t     --------------- \n " << endl;
        setcolor(0);
        system("pause");
        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-01. Algoritma Pemrograman " <<endl;
        cout << "\t\t\t\t\t\t  Jumlah Kehadiran  = " ; cin >> Alpro;
        cout << "\t\t\t\t\t\t  Jumlah Pertemuan  = " ; cin >> pal;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-02. Fisika " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = " ; cin >> Fisika;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pis;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-03. B.Indonesia " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>Indo;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pind;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-04. Computational Thinking " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>CT;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pct;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-05. Praktikum Alpro " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>Prakal;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> ppra;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";;
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-06. PTIK " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>PTIK;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pptik;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t IF-07. Keterampilan Komunikasi dan Kepemimpinan " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>K3;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pk3;

        system("cls");
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t       Silahkan Lengkapi data dibawah ini " << endl;
        setcolor(3);
        cout << "\n\t\t\t\t\t\t IF-08. Kalkulus " << endl;
        cout << "\t\t\t\t\t\t Jumlah Kehadiran = "; cin>>Kalkulus;
        cout << "\t\t\t\t\t\t Jumlah Pertemuan = " ; cin >> pka;

        // End of Data Input
        setcolor(7);
        system("cls");
        logo();
            //cout << "\n\n\n\n\n\n\n\n\n\n";

        setcolor(6);
        cout << "\n\t\t\t\t\t       Terima Kasih telah mengisi data anda ";
        cout << "\n\t\t\t\t    Silahkan melihat hasil Rekap data Anda di menu Rekap Data ";
        setcolor(3); cout << "\n\t\t\t\t===================================================================="; setcolor(7);
        cout << "\n\t\t\t\t\t              Kembali ke menu awal ? \n\t\t\t\t\t\t\t   Answer = " ; setcolor(14); cin>>awal;

        //setcolor(7);
        system("cls");
        logo();
        cout << endl;

        break;
    case '3':
        system("cls");
        logo();
        setcolor(7);
        do{
        logo();
        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\n\t\t\t\t\t\tMasukkan Username and Password " << endl;
        cout << "\t\t\t\t\t\t    Username = " ; setcolor(14); cin >> user1;
        cout << "\t\t\t\t\t\t    Password = " ; setcolor(14); cin >> pass1;
        system("cls");
        logo();
        if (user1==id[0] && pass1==id[1])
    {

        setcolor(7);
            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t ----------------------------------------------";
        cout << "\n\t\t\t\t\t       Confirmed.. Welcome Mr." << data[1] << endl;
        cout << "\t\t\t\t\t ----------------------------------------------\n";
        cout << "\n\t\t\t\t\t       Selamat Datang di Rekap Data Anda " << endl;

        // Start Timer
        for (int i=150;i>=1;i--)
        {
            setcolor(0);
            //cout << " ";
            usleep(10000);
        }
        setcolor(7);
                    if(int i=1)
            {
                    system("cls");

            }
        // End Timer

        cout << "\n\t\t\t    ----------------------------------------------------------------------------";
        cout << "\n\t\t\t\t\t                IDENTITAS DIRI " << endl;
        cout << "\t\t\t    ----------------------------------------------------------------------------\n";
        cout << "\n\t\t             Nama     : " << data[0] << "\t\t\t         | Panggilan : " << data[1] << endl;
        cout << "\t\t\t     NIM      : " << data[2] << "\t\t\t\t | Kelas     : " << data[3] << endl;
        cout << "\t\t\t     Angkatan : " << data[4] << "\t\t\t\t         | Asal      : " << data[5] << endl;

        cout << "\n\t\t\t    ----------------------------------------------------------------------------" << endl;
        cout << "\n\t\t\t       Berdasarkan Data yang anda Masukkan dan Hasil dari Kalkulasi Kehadiran ";
        cout << "\n\t\t\t        Maka Mahasiswa/i \" " ;setcolor(14);cout << data[0] ;setcolor(7) ;cout << " \" memperoleh hasil sebagai berikut  ";
        cout << endl;

        // Start Hasil Rekap
        hitung_nilai(Alpro,pal,mk1);
        hitung_nilai(Fisika,pis,mk2);
        hitung_nilai(Indo,pind,mk3);
        hitung_nilai(CT,pct,mk4);
        hitung_nilai(Prakal,ppra,mk5);
        hitung_nilai(PTIK,pptik,mk6);
        hitung_nilai(K3,pk3,mk7);
        hitung_nilai(Kalkulus,pka,mk8);
        cout << "\n";
        // End Rekap.

        setcolor(0);
        getch();
    }
    else
    {

            //cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\n\t\t\t\t\t      Sorry Mr./Mrs " << data[0] << "\n\t\t\t\t\t  The system didn't recognise this Data ";
        cout << "\n\t\t\t\t\t     Apakah ingin mencoba lagi = "; cin >> ulang;
        //system("pause");
        system("cls");
    }
      }
    while (ulang=="yes" || ulang=="y" || ulang == "Y" || ulang =="Yes");
        //break;

        break;

    case'4':
        {
            tampilan();
            break;
        }

        }

            }

    while (awal=="yes" || awal=="y" || awal == "Y" || awal=="Yes" || awal =="YES" );

}


void Lib::sosmed()
{
    int menu;
    logo();
   //setcolor(14); cout << "\n\t\t\t\t\t\t\t Pilih Kode untuk melanjutkan menu" << endl;
   setcolor(14); cout << "\n\n\t\t\t\t\t\t #1" ;setcolor(7); cout << " Facebook" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #2" ;setcolor(7); cout << " Whatsapp" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #3" ;setcolor(7); cout << " Instagram" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #4" ;setcolor(7); cout << " Alamat" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #5" ;setcolor(7); cout << " Kembali Ke menu utama" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #6" ;setcolor(7); cout << " Exit" << endl;
   setcolor(7); cout << "\t\t\t\t\t     Pilih Kode untuk melanjutkan menu: " ; setcolor(14); cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if (menu==1)
   {
   setcolor(10);cout << "\t\t\t\t\thttps://www.facebook.com/joinittp/";
       getch();
       system("cls");
       sosmed();
   }
   else if (menu==2)
   {
   setcolor(10);cout << "\t\t\t\t\t +62 812-2831-9222";
       getch();
       system("cls");
       sosmed();
   }
   else if (menu==3)
   {
   setcolor(10);cout << "\t\t\t\t\thttps://www.instagram.com/join_ittp/";
      getch();
       system("cls");
       sosmed();
   }

   else if (menu==4)
   {
   setcolor(10);cout << "\t\t\t\t\tSekretariat PMB" << endl;
   setcolor(10);cout << "\t\t\t\t\tInstitut Teknologi Telkom Purwokerto" << endl;
   setcolor(10);cout << "\t\t\t\t\tKawasan Pendidikan Telkom" << endl;
   setcolor(10);cout << "\t\t\t\t\tJl. DI. Panjaitan No. 128 Purwokerto," << endl;
   setcolor(10);cout << "\t\t\t\t\tJawa Tengah, 53147" << endl;
   setcolor(10); cout << "\t\t\t\t\tTelp. (0281) 641629" << endl;
       getch();
       system("cls");
       sosmed();
   }
   else if (menu==5)
   {
       system("cls");
       tampilan();
   }
   else if (menu==6)
   {
       exit(0);
   }
   else
   {
   setcolor(10);cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       sosmed();

   }

}
void Lib::jurusan()
{
    int menu;
    logo();
   //setcolor(14); cout << "\n\t\t\t\t Pilih Kode untuk melanjutkan menu" << endl;
   setcolor(14); cout << "\n\n\t\t\t\t\t #1" ;setcolor(7); cout << " FAKULTAS TEKNIK TELEKOMUNIKASI DAN ELEKTRO" << endl;
   setcolor(14); cout << "\t\t\t\t\t #2" ;setcolor(7); cout << " FAKULTAS INFORMATIKA" << endl;
   setcolor(14); cout << "\t\t\t\t\t #3" ;setcolor(7); cout << " FAKULTAS REKAYASA INDUSTRI DAN DESAIN" << endl;
   setcolor(14); cout << "\t\t\t\t\t #4" ;setcolor(7); cout << " Kembali Ke Menu Sebelumnya" << endl;
   setcolor(14); cout << "\t\t\t\t\t #5" ;setcolor(7); cout << " Exit" << endl;
   setcolor(7); cout << "\n\t\t\t\t\t   Pilih Kode untuk melanjutkan menu: " ; setcolor(7); cin >> menu;
   if (menu==1)
   {
       telekomelektro();
   }
   else if (menu==2)
   {
       informatika();
   }
   else if (menu==3)
   {
       rekayasa();
   }
   else if (menu==4)
   {
       system("cls");
       tampilan();
   }
   else if(menu==5)
   {
       exit(0);
   }
   else
   {
       cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       jurusan();

   }

}

void Lib::telekomelektro()
{
     int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t  FAKULTAS TEKNIK TELEKOMUNIKASI DAN ELEKTRO" << endl;
   setcolor(14); cout << "\t\t\t\t        #1" ;setcolor(7); cout << " Visi" << endl;
   setcolor(14); cout << "\t\t\t\t        #2" ;setcolor(7); cout << " Misi" << endl;
   setcolor(14); cout << "\t\t\t\t        #3" ;setcolor(7); cout << " Program Studi" << endl;
   setcolor(14); cout << "\t\t\t\t        #4" ;setcolor(7); cout << " Kembali Ke Menu Sebelumnya" << endl;
   setcolor(14); cout << "\t\t\t\t        #5" ;setcolor(7); cout << " exit" << endl;
   setcolor(7); cout << "\t\t\t\t             Masukkan Menu: " ;setcolor(14); cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if(menu==1)
   {
   setcolor(10); cout<< "\t\t\tMenjadi fakultas yang unggul dalam pengembangan ilmu pengetahuan, teknologi,"<< endl;
   setcolor(10); cout<< "\t\t\tdan teknik berbasis telekomunikasi dan elektro serta membentuk insan yang berkarakter." << endl;
       getch();
       system("cls");
       telekomelektro();
   }
   else if(menu==2)
   {
    setcolor(10); cout<< "\t\t\t 1.Menyelenggarakan pendidikan tinggi yang berbasis pada pengembangan ilmu pengetahuan," << endl;
    setcolor(10); cout<< "\t\t\t teknologi, dan teknik  di bidang telekomunikasi dan elektro yang berkualitas." << endl;
    setcolor(10); cout<< "\t\t\t 2.Mengembangkan, menyebarluaskan dan memanfaatkan hasil riset ilmu pengetahuan, teknologi," << endl;
    setcolor(10); cout<< "\t\t\t dan teknik di bidang telekomunikasi dan elektro bagi kemaslahatan masyarakat." << endl;
    setcolor(10); cout<< "\t\t\t 3.Mengembangkan tatakelola guna membentuk karakter yang unggul dan menjalin" << endl;
    setcolor(10); cout<< "\t\t\t kerjasama dengan berbagai instansi yang relevan." << endl;
       getch();
       system("cls");
       telekomelektro();
   }
   else if (menu==3)
   {
    setcolor(10); cout<< "\t\t\t\t      D3 Teknik Telekomunikasi" << endl;
    setcolor(10); cout<< "\t\t\t\t      S1 Teknik Telekomunikasi" << endl;
    setcolor(10); cout<< "\t\t\t\t      S1 Teknik Elektro" << endl;
    setcolor(10); cout<< "\t\t\t\t      S1 Teknik Biomedis" << endl;
    getch();
    system("cls");
    telekomelektro();
   }
   else if (menu==4)
   {
       system("cls");
       jurusan();
   }
   else if (menu==5)
   {
       exit(0);
   }
   else
   {
    cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       telekomelektro();

   }

}
void Lib::informatika()
{
    int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t          FAKULTAS INFORMATIKA  " << endl;
   setcolor(14); cout << "\t\t\t\t          #1" ;setcolor(7); cout << " Visi" << endl;
   setcolor(14); cout << "\t\t\t\t          #2" ;setcolor(7); cout << " Misi" << endl;
   setcolor(14); cout << "\t\t\t\t          #3" ;setcolor(7); cout << " Program Studi" << endl;
   setcolor(14); cout << "\t\t\t\t          #4" ;setcolor(7); cout << " Kembali Ke Menu Sebelumnya" << endl;
   setcolor(14); cout << "\t\t\t\t          #5" ;setcolor(7); cout << " exit" << endl;
   setcolor(7); cout << "\t\t\t\t              Masukkan Menu: ";setcolor(7) ; cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if(menu==1)
   {
   setcolor(10); cout<< "\t\t\tTahun 2027, menjadi Fakultas berdaya saing Internasional, berbudaya dan berperan aktif dalam pengembangan"<< endl;
   setcolor(10); cout<< "\t\t\tIlmu pengetahuan bidang Informatika dan Komputer untuk mendukung pembangunan nasional" << endl;
   setcolor(10); cout<< "\t\t\tberkelanjutan pada bidang Healthcare, Agro-Industry, Tourism, dan Small Medium Enterprise." << endl;
       getch();
       system("cls");
       informatika();
   }
   else if(menu==2)
   {
    setcolor(10); cout<< "\t\t\t 1.Menyelenggarakan dan mengembangkan pendidikan yang mengacu pada standar Internasional di bidang Informatika dan Komputer.," << endl;
    setcolor(10); cout<< "\t\t\t 2.Mengembangkan dan menyebarluaskan ilmu pengetahuan dan teknologi bidang Informatika dan Komputer" << endl;
    setcolor(10); cout<< "\t\t\t dalam rangka mendukung pembangunan nasional terutama pada bidang Healthcare, Agro-industry, Tourism, dan" << endl;
    setcolor(10); cout<< "\t\t\t Small-Medium Enterprise (HATS) melalui kegiatan penelitian yang dapat direkognisi di tingkat Internasional." << endl;
    setcolor(10); cout<< "\t\t\t 3.Melaksanakan pengabdian kepada masyarakat melalui pemanfaatan segala sumber daya ilmu " << endl;
    setcolor(10); cout<< "\t\t\t pengetahuan dan teknologi bidang Informatika dan Komputer terutama untuk menyelesaikan permasalahan masyarakat." << endl;
    setcolor(10); cout<< "\t\t\t 4.Menerapkan budaya organisasi yang Feasible, Integrated and Futuristic (FIF) dalam penyelenggaraan Tri Dharma Perguruan Tinggi." << endl;
       getch();
       system("cls");
       informatika();
   }
   else if (menu==3)
   {
    setcolor(10); cout<< "\t\t\t\t S1 Teknik Informatika" << endl;
    setcolor(10); cout<< "\t\t\t\t S1 Software Engineering" << endl;
    setcolor(10); cout<< "\t\t\t\t S1 Sistem Informasi" << endl;
    setcolor(10); cout<< "\t\t\t\t S1 Sains Data" << endl;
    getch();
    system("cls");
    informatika();
   }
   else if (menu==4)
   {
       system("cls");
       jurusan();
   }
   else if (menu==5)
   {
       tampilan();
   }
   else
   {
    cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       informatika();

   }
}
void Lib::rekayasa()
{
    int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t       FAKULTAS REKAYASA INDUSTRI DAN DESAIN   " << endl;
   setcolor(14); cout << "\t\t\t\t           #1 " ;setcolor(7); cout << "Visi" << endl;
   setcolor(14); cout << "\t\t\t\t           #2 " ;setcolor(7); cout << "Misi" << endl;
   setcolor(14); cout << "\t\t\t\t           #3 " ;setcolor(7); cout << "Program Studi" << endl;
   setcolor(14); cout << "\t\t\t\t           #4 " ;setcolor(7); cout << "Kembali Ke Menu Sebelumnya" << endl;
   setcolor(14); cout << "\t\t\t\t           #5 " ;setcolor(7); cout << "exit" << endl;
   setcolor(7); cout << "\t\t\t\t               Masukkan Menu: "; ;setcolor(7); cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if(menu==1)
   {
   setcolor(10); cout<< "\t\t\t\t Menjadi fakultas berdaya saing internasional dalam bidang sistem industri dan desain berbasis"<< endl;
   setcolor(10); cout<< "\t\t\t\t teknologi informasi yang mendukung sektor Healthcare, Agro-Industry, Tourism, Small-Medium Enterprise (HATS)" << endl;
       getch();
       system("cls");
       rekayasa();
   }
   else if(menu==2)
   {
    setcolor(10); cout<< "\t\t\t\t 1.Menyelenggarakan pendidikan di bidang sistem industri dan desain yang berwawasan internasional" << endl;
    setcolor(10); cout<< "\t\t\t\t 2.Menyelenggarakan penelitian di bidang sistem Industri dan desain yang bermanfaat bagi pengembangan ilmu pengetahuan dan teknologi" << endl;
    setcolor(10); cout<< "\t\t\t\t 3.Menyelenggarakan kegiatan pengabdian masyarakat yang relevan dan berkelanjutan " << endl;
    setcolor(10); cout<< "\t\t\t\t 4.Menjalin kerjasama dengan instansi pemerintah, dunia usaha dan industri serta lembaga lain" << endl;
    setcolor(10); cout<< "\t\t\t\t baik dalam maupun luar negeri untuk menunjang tri dharma pendidikan tinggi. " << endl;
       getch();
       system("cls");
       rekayasa();
   }
   else if (menu==3)
   {
    setcolor(10); cout<< "\t\t\t\t S1 Teknik Industri" << endl;
    setcolor(10); cout<< "\t\t\t\t S1 Desain Komunikasi Visual" << endl;
    setcolor(10); cout<< "\t\t\t\t S1 Teknik Logistik" << endl;
    getch();
    system("cls");
    rekayasa();
   }
   else if (menu==4)
   {
       system("cls");
       jurusan();
   }
   else if (menu==5)
   {
       tampilan();
   }
   else
   {
    cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       rekayasa();

   }

}
void Lib::profil()
{
    int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t                 Program ini dibuat oleh: " << endl;
   setcolor(14); cout << "\t\t\t\t            #1" ;setcolor(7); cout << " Muh Alief Akbar" << endl;
   setcolor(14); cout << "\t\t\t\t            #2" ;setcolor(7); cout << " Jonathan Indra C." << endl;
   setcolor(14); cout << "\t\t\t\t            #3" ;setcolor(7); cout << " Paundra Bagus Satya Adi Dharma" << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(14); cout << "\t\t\t\t            #4" ;setcolor(7); cout << " Kembali Ke Menu Sebelumnya" << endl;
   setcolor(14); cout << "\t\t\t\t            #5" ;setcolor(7); cout << " Exit" << endl;
   setcolor(14); cout << "\t\t\t\t            Pilih Kode untuk Mahasiswa : " ;setcolor(7); cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if (menu==1)
   {
       alibar();
   }
   else if (menu==2)
   {
       jonathan();
   }
   else if (menu==3)
   {
       paundra();
   }
   else if (menu==4)
   {
       system("cls");
       tampilan();
   }
   else if(menu==5)
   {
       exit(0);
   }
   else
   {
       cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       profil();

   }

}
void Lib::alibar()
{
    int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t\t      Profile Mahasiswa   " << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nama    : Muh Alief Akbar" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nim     : 20102290" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Jurusan : S1 Teknik Informatika" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Kelas   : S1-IF08-H" << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #1" ;setcolor(7); cout << " Next" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #2" ;setcolor(7); cout << " exit" << endl;
   setcolor(14); cout << "\t\t\t\t\t         Pilih Kode untuk melanjutkan menu: " ; setcolor(14);cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if (menu==1)
   {
       jonathan();
   }
   else if (menu==2)
   {
       tampilan();
   }
   else
   {
       cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       alibar();

   }

}
void Lib::jonathan()
{
   int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t\t      Profile Mahasiswa   " << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nama    : Jonathan Indra C" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nim     : 20102289" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Jurusan : S1 Teknik Informatika" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Kelas   : S1-IF08-H" << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #1" ;setcolor(7); cout << " Before" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t #2" ;setcolor(7); cout << " Next" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t Pilih Kode untuk melanjutkan menu: ";setcolor(7); cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if (menu==1)
   {
       alibar();
   }
   else if (menu==2)
   {
       paundra();
   }
   else
   {
       cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       jonathan();

   }
}
void Lib::paundra()
{
   int menu;
    logo();
   setcolor(14); cout << "\n\t\t\t\t\t\t      Profile Mahasiswa   " << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nama    : Paundra Bagus Satya Adi Dharma" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Nim     : 20102291" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Jurusan : S1 Teknik Informatika" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t Kelas   : S1-IF08-H" << endl;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t #1 " ;setcolor(7); cout << " Before" << endl;
   setcolor(7); cout << "\t\t\t\t\t\t #2 " ;setcolor(7); cout << " Exit" << endl;
   setcolor(14); cout << "\t\t\t\t\t\t Pilih Kode untuk melanjutkan menu: " ; cin >> menu;
   setcolor(3); cout << "\t\t\t\t====================================================================" << endl;
   if (menu==1)
   {
       jonathan();
   }
   else if (menu==2)
   {
       tampilan();
   }
   else
   {
       cout << "\t\t\t\t Masukan Pilihan yang benar";
       getch();
       system("cls");
       paundra();

   }
}
int main ()
{
    Lib obj;
    obj.tampilan();
    getch();
    return 0;
}
