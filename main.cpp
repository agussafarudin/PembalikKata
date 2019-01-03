#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

char a[100];
int b,c;

int main()
{
    cout << "____Program Pembalik Kata_____ \n \n";
    cout <<"Masukkan Kata                     = ";
    gets(a);
    strrev(a);
    cout <<"\n \n";
    cout <<"Kebalikan dari kata diatas adalah = ";
    cout << a;
    cout <<"\n \n";

}
