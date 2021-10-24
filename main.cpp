#include <iostream>

using namespace std;

float pemasukkan, pengeluaran, perbandingan;

int main()
{
    cout<<"\nMasukkan pemasukkan tiap bulan : Rp ";
    cin>>pemasukkan;
    cout<<"Masukkan pengeluaran tiap bulan : Rp ";
    cin>>pengeluaran;
    cout<<"-------------------------------------\n";
    perbandingan=pengeluaran/pemasukkan;
    cout<<"\nPerbandingan antara pengeluaran dan pemasukkan adalah "<<perbandingan;
    cout<<"\nKeterangan :";
    
    if (perbandingan<1)
    {
        cout<<"\nPengeluaran Anda masih normal.";
    }
    
    else if (perbandingan==1)
    {
        cout<<"\nPengeluaran Anda masih normal.\nAkan tetapi, lebih baik Anda mengurangi lagi total pengeluaran Anda.";
    }
    
    else
    {
        cout<<"\nPengeluaran Anda sudah melebihi batas.\nSehingga, Anda harus mengurangi lagi total pengeluaran Anda.";
    }

    return 0;
}



