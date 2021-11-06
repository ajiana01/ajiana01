#include<iostream>
using namespace std;

int main(){
string title[7]={"NO","DATA 1","DATA 2","DATA 3","DATA 4","JUMLAH","RERATA"};
int a[3][5]={{1,6,4,4,4},{2,7,8,2,6},{3,5,8,6,3}},x,y,z;
float jumlah,rerata;

for (int x = 0; x < 7; x++)
{
    cout << title[x] << "\t";
} 
cout << endl;

for (int x = 0; x < 3; x++)
{
    for (int y = 0; y < 7; y++)
    {
        if (y==5)
        {
            jumlah=0;
            for (int z = 1; z < 5; z++)
            {
                jumlah += a[x][z];
            }
            cout << jumlah << "\t";
        }
        else if (y==6)
        {
            jumlah=0;
            for (int z = 1; z < 5; z++)
            {
                jumlah += a[x][z];
            }
            cout <<  jumlah/4 << "\t";
        }
        else
        {
            cout << a[x][y] << "\t";
        }
    } cout << endl;
}

cout << "JUMLAH ";
for (int y = 1; y < 5; y++)
{
    jumlah=0;
    for (int x = 0; x < 3; x++)
    {
        jumlah += a[x][y];
    }
    cout << jumlah << "\t";
} cout << endl;

cout << "JUMLAH ";
for (int y = 1; y < 5; y++)
{
    jumlah=0;
    for (int x = 0; x < 3; x++)
    {
        jumlah += a[x][y];
    }
    cout << jumlah/3 << "\t";
} cout << endl;
}
