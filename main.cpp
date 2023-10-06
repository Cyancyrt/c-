#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


void factor()
{
    int x, i, z;
    i = 0;
    z = 1;
    cout << "masukan nilai : ";
    cin >> x;
    for(i = x; i > 0; i-- )
    {
        z *= i;
    }
    cout << z << endl;
}

void sortBanding()
{
    int x,z;
    array<int, 7>y;
    z = 0;
    for(x = 0; x <= 6; x++)
    {
        cout << "masukan bilangan ke-" << x << " : ";
        cin >> y[z];
        z++;
    }
    sort(y.begin(), y.end());
    cout << "smallest : " << y[0] << endl;
    cout << "biggest : " << y.back() << endl;
}

void soal_pantek()
{
    int x,y,g;
    array <int, 50> arr;
    cout << "masukan input A : ";
    cin >> x;
    cout << "masukan input B : ";
    cin >> y;
    int z = (y - x) + 1;
    g = 0;
    for(x; x <= y; x++)
    {
        arr[g] = x;
        g++;
    }
    cout << "nomor ganjil : ";
    for(int i = 0; i < z; i++)
    {
        if(arr[i]%2!=0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << "nomor genap : ";
    for(int i = 0; i<z; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
}

void lima()
{
    int i,x,y;
    for(i = 0; i <=50; i++)
    {
        if(i % 5 == 0)
        {
            cout << i << " ";
        }
    }
}
void tujuh()
{
    int i,y;
    cout << "bilangan habis dibagi 7 : ";
    for(i = 50; i <=101; i++)
    {
        if(i % 7 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}


void limtuh_campur()
{
    int i,x,y;
    for(i = 50; i <=101; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            cout << i << " ";
        }
    }
}

void pattern()
{
    for(int i = 1; i <= 6; i++)
    {
        for(int j = 1; j < i; j++)
        {
         cout << j << " ";
        }
        cout << "\n";
    }
}

void rev_pattern()
{
    for(int i = 6; i >= 0; i--)
    {
        for(int j = 5; j > i; j--)
        {
         cout << j << " ";
        }
        cout << "\n";
    }
}

void patternStar()
{
    for(int i = 5; i > 0; i--)
    {
        for(int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void rev_starPattern()
{
    for(int i =0; i < 5; i++)
    {
        for(int j =5; j > i; j-- )
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void piramid()
{
    //print semua baris
    for(int i = 0; i <5; i++)
    {
        //looping dalam 1, print ruang
        for(int j =0; j < 2 *(5-i)-1; j++)
        {
            cout << " ";
        }
        //looping dalam 2, print bintang
        for(int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << "\n";

    }
}
int main()
{
    return 0;
}
