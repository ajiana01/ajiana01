#include<iostream>
using namespace std;

int main(){

    int x=0,y=0;

    cout << "NO 1" << endl;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
           if (y<2)
           {
               cout << 1 << " ";
           }
           else
           {
               cout << 0 << " ";
           }
        } cout << endl;
    }
    
    cout << "NO 2 " << endl;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
           if (x<3)
           {
               cout << 1 << " ";
           }
           else
           {
               cout << 0 << " ";
           }
        } cout << endl;
    }
    
    cout << "NO 3" << endl;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (x==y)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
            
        } cout << endl;
    }
   
}