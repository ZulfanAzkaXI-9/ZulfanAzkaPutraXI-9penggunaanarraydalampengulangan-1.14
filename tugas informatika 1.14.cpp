#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int i;
    float bil[7], jumlah=0.0, rata2;
    for(i = 0; i < 7; ++i)
    {
    cout <<i+1<< ". masukkan angka ke-" <<i+1<<" : ";
    cin >> bil[i];
    while (bil [i] > 100 || bil[1] <= 0)
    {
    cout << "error! angka di antar 1 s/d 100" << endl;
    cout <<i+1<< ". masukkan angka ke-" <<i+1<< " : ";
    cin >> bil[1];
    }
    
    jumlah += bil[i];
    }
    rata2 = jumlah / 7;
    cout << "rata2 bilangan di atas = " << rata2 << endl;
    
    system ("PAUSE");
    return 0;
}
