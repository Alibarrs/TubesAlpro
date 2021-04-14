#include <iostream>
#include <conio.h>

using namespace std;



void menu() //function
{
    cout << "=====================================================================" << endl;
    cout << "                     Selamat datang di Kantin ITPLN                  " << endl;
    cout << "=====================================================================" << endl;
    string daftar [3][2] = {
    {"1. Nasi Remes Mahasiswa Rp 18.000 |", "| 1. Nasi Remes Karyawan Rp 12.000"},
    {"2. Nasi Pecel mahasiswa Rp 8.000  |", "| 2. Nasi pecel karyawan Rp 12.000"},
    {"3. Gado Gado  Mahasiswa Rp 10.000 |", "| 3. Gado gado  Karyawan Rp 15.000"}
    };

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout << daftar[i][j];
        }
        cout << endl;
    }
}

void bayar()//function
{
    int jenis;
    menu();
    cout << "=====================================================================" << endl;
    cout << "                            Pilih Jenis Anda                         " << endl;
    cout << "1. Mahasiswa" << endl;
    cout << "2. Karyawan" << endl;
    cout << "Masukkan pilihan : "; cin >> jenis;

    if (jenis == 1)
    {
        int pilihan, harga, total, jumlah, bayar, kembali;
        cout << "=====================================================================" << endl;
        cout << "                              Menu Mahasiswa                         " << endl;
        cout << endl;
        cout << "1. Nasi Remes Mahasiswa Rp 18.000" <<endl;
        cout << "2. Nasi Pecel mahasiswa Rp 8.000"  <<endl;
        cout << "3. Gado Gado  Mahasiswa Rp 10.000" <<endl;
        cout << "Masukkan Pilihan anda : "; cin >> pilihan;
        switch(pilihan)
        {
        case 1:
            cout << "=====================================================================" << endl;
            cout << "                  Anda memilih Menu Nasi Remes Mahasiswa             " << endl << endl;
            harga=18000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Nasi Remes mahasiswa dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        case 2:
            cout << "=====================================================================" << endl;
            cout << "                  Anda memilih Menu Nasi Pecel Mahasiswa             " << endl << endl;
            harga=10000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Nasi Pecel mahasiswa dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        case 3:
            cout << "=====================================================================" << endl;
            cout << "                  Anda memilih Menu Gado Gado Mahasiswa              " << endl << endl;
            harga=10000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Gado Gado mahasiswa dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        default:
            cout << "Pilihan anda tidak ada, Pilih menu 1-3";
            break;
        }

    }

    else if(jenis == 2)
    {
        int pilihan, harga, total, jumlah, bayar, kembali;
        cout << "=====================================================================" << endl;
        cout << "                               Menu Karyawan                         " << endl;
        cout << endl;
        cout << "1. Nasi Remes Karyawan Rp 12.000" <<endl;
        cout << "2. Nasi Pecel Karyawan Rp 12.000"  <<endl;
        cout << "3. Gado Gado  Karyawan Rp 15.000" <<endl;
        cout << "Masukkan Pilihan anda : "; cin >> pilihan;
        switch(pilihan)
        {
        case 1:
            cout << "=====================================================================" << endl;
            cout << "                    Anda memilih Menu Nasi Remes Karyawan            " << endl << endl;
            harga=18000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Nasi Remes Karyawan dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        case 2:
            cout << "=====================================================================" << endl;
            cout << "                   Anda memilih Menu Nasi Pecel Karyawan             " << endl << endl;
            harga=10000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Nasi Pecel Karyawan dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        case 3:
            cout << "=====================================================================" << endl;
            cout << "                   Anda memilih Menu Gado Gado Karyawan              " << endl << endl;
            harga=10000;
            cout << "Masukkan jumlah pesanan : "; cin >> jumlah;
            total=harga*jumlah;
            cout << "Anda memesan " << jumlah << " Gado Gado Karyawan dengan total harga : " << total << endl;
            cout << "Masukkan nominal uang anda : "; cin >> bayar;
            kembali=bayar-total;
            cout << "Kembalian anda adalah : " << kembali << endl;
            cout << "                       Terima Kasih Telah Membeli                    " << endl;
            cout << "=====================================================================" << endl;
            break;
        default:
            cout << "Pilihan anda tidak ada, Pilih menu 1-3";
            break;
        }

    }

    else
    {
        cout << "Masukkan Pilihan yang benar ";
        getch();
        system("cls");
        bayar();
    }

}


int main () // function
{
    bayar();
}
