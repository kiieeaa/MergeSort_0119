#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
        {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

         if (n <= 20)
        {
            break; // keluar dari perulangan jika valid
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n--------------------------------" << endl;
    cout << "\nInputkan isi elemt array" << endl;
    cout << "\n--------------------------------" << endl;

    
    
    
  



