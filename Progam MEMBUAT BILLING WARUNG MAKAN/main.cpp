#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;


int main()
{
    int makanan,minuman,porsi1,porsi2,pilihan,pilihan2,sub_total,sub_total2,total,pembayaran,kembalian;
    int a=10000,b=15000,c=7000,d=3000,e=5000,f=10000;


    cout<< "\n================================================================================\n";
    cout<< "\t\t\t+++#-DAFTAR MENU-#+++" <<endl;
    cout<< "\n => MAKANAN <=                                    => MINUMAN <=\n"<<endl;
    cout<< "1. Sate jamur       : Rp. 10.000                1. Es Teh       : Rp.  3.000 "<<endl;
    cout<< "2. Sate ayam        : Rp. 15.000                2. Es Jeruk     : Rp.  5.000 "<<endl;
    cout<< "3. Sate kere        : Rp.  7.000                3. Jus Alpukat  : Rp. 10.000 "<<endl;
    cout<< "\n================================================================================\n";

    pilihan :
        {

    cout<< "\nMasukkan nomer makanan yang anda pesan    : "; cin>>makanan;
    cout<< "Berapa porsi                              : "; cin>>porsi1;

    switch (makanan)
    {
    case 1:
        cout<< "\n1.Sate jamur    = Rp. 10000 "<<endl;
        sub_total= a*porsi1;
        cout<< "----------------------------"<<endl;
        cout<< "sub total       = Rp. "<<sub_total<<endl;
        break;
    case 2:
        cout<< "\n2.Sate ayam     = Rp. 15.000 "<<endl;
        sub_total= b*porsi1;
        cout<< "----------------------------"<<endl;
        cout<< "sub total       = Rp. "<<sub_total<<endl;
        break;
    case 3:
        cout<< "\n3.Sate kere     = Rp.  7000 "<<endl;
        sub_total= c*porsi1;
        cout<< "----------------------------"<<endl;
        cout<< "sub total       = Rp. "<<sub_total<<endl;
        break;
    default :
        cout<< "Pilihan yang anda masukkan belum tersedia silahkan masukkan lagi pilihan anda"<<endl;
        goto pilihan;
    }

    pilihan2 :
        {
            cout<< "\nMasukkan nomer minuman yang ingin anda pesan  : "; cin>>minuman;
            cout<< "Berapa porsi                                  : "; cin>>porsi2;
            switch (minuman)
            {
            case 1:
                cout<< "\n1.Es teh            : Rp.  3000 "<<endl;
                sub_total2=porsi2*d;
                cout<< "-------------------------------"<<endl;
                cout<< "Sub total minuman   : Rp. "<<sub_total2<<endl;
                break;
            case 2:
                cout<< "\n2.Es jeruk          : Rp.  5000 "<<endl;
                sub_total2=porsi2*e;
                cout<< "-------------------------------"<<endl;
                cout<< "Sub total minuman   : Rp. "<<sub_total2<<endl;
                break;
            case 3:
                cout<< "\n1.Jus alpukat       : Rp.10000 "<<endl;
                sub_total2=porsi2*e;
                cout<< "-------------------------------"<<endl;
                cout<< "Sub total minuman   : Rp. "<<sub_total2<<endl;
                break;
            default :
                cout<< "\nMaaf pilihan yang anda masukkan salah, silahkan ulangi pilihan anda"<<endl;
                goto pilihan2;
            }
        }
        cout<< "\n===============================================================================\n"<<endl;
        total=sub_total+sub_total2;
        cout<< "\nJumlah total belanjaan anda adalah        : Rp. "<<total;
        cout<< "\nJumlah uang pembayaran                    : Rp. "; cin>>pembayaran;
        cout<< "\n-------------------------------------------------------------------------------\n";
        kembalian=pembayaran-total;
        cout<< "Kembalianya adalah                        : Rp. "<<kembalian<<endl;
        cout<< "\n\n              # TERIMAKASIH SUDAH BERBELANJA DI WARUNG KAMI # \n"<<endl;
        cout<<endl;
        system ("cls");
    }



    cout<< "|==========================================================|"<<endl;
    cout<< "|                # WARUNG MAKAN JEJAK KAKI #               |"<<endl;
    cout<< "|==========================================================|"<<endl;
    cout<< "|   Nama Produk     Porsi      Harga       Sub Total       |"<<endl;
    cout<< "|==========================================================|"<<endl;
     switch (makanan)
    {
    case 1:
        sub_total=a*porsi1;
        cout<< "   Sate jamur           " <<porsi1  << "    Rp. 10000      Rp. "<<sub_total<<" ";
        break;
    case 2:
        sub_total=b*porsi1;
        cout<< "   Sate Ayam           " <<porsi1  << "    Rp. 15000      Rp. "<<sub_total<<" ";
        break;

    case 3:
        sub_total=c*porsi1;
        cout<< "   Sate kere           " <<porsi1  << "    Rp.  7000      Rp. "<<sub_total<<" ";
        break;

    }

    switch (minuman)
    {
        case 1:
            sub_total2=d*porsi2;
            cout<< "\n    Es Teh\t\t" <<porsi2  << "    Rp.  3000      Rp. "<<sub_total2<<" ";
            break;
        case 2:
            sub_total2=e*porsi2;
            cout<< "\n    Es jeruk\t       "<<porsi2  << "    Rp.  5000      Rp. "<<sub_total2<<" ";
            break;

            case 3:
            sub_total2=f*porsi2;
            cout<< "\n   jus alpukat\t       "<<porsi2  << "    Rp. 10000      Rp. "<<sub_total2<<" ";
            break;

    }
    cout<< "\n|----------------------------------------------------------|\n";
    cout<< "  Total pembayaran\t\t\t   Rp. "<<total<<endl;
    cout<< "  jumlah uang yang dibayarkan\t\t   Rp. "<<pembayaran<<endl;
    cout<< "|----------------------------------------------------------|\n";
    cout<< "  Uang kembalian\t\t\t   Rp. "<<kembalian<<endl;
    cout<< "|----------------------------------------------------------|\n";
    cout<< "\n\n    --+#+ TERIMAKASIH TELAH MAMPIR KE WARUNG KAMI +#+-- "<<endl;
    cout<< "\n|----------------------------------------------------------|";


    getch();
    return 0;
}
