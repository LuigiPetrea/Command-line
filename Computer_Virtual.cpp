#include <iostream>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
using namespace std;

int main(){
    int infinit = 10;
while (infinit == 10){
        system("cls");
unsigned char cod_intrare, operator_pentru_toate, cate_numere;
double numa1, numa2, numa3, numa4, numa5, rezl;
int num1, num2, num3, num4, num5, rez;

            system("cls");
            system(" color 6B");
    cout << "\n\aAcest Calculator nu este disponibil, pana nu il decodati cu un cod : "<<endl<<endl;
    cout << "\aScrieti un cod pentru al decoda : ";
  cin >> cod_intrare;

    switch(cod_intrare){
case '@':

  system("cls");
    system("color B2");
system("cls");
 cout << "\nCalculatorul este disponibil apasati enter pentru mai departe \r\r\r"<<endl<<endl;
 PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
    system("pause");
    system("cls");
      system("color 6B");
 cout << "_____________________________________________________________________________________________________________________"<<endl;
 cout << "| Semnele   |    x    |   :   |   +  |     -     |     D     |        R        |    !   |      A       |      G     |"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "|Ce afiseaza|Produsul | Catul | Suma | Diferenta | Divizorii | Radacina patrata| Mai <=>| Media Aritm. | Media Geom.|"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "\nAi optiunea sa iti alegi si din cate numere vreti sa fie compus calculul care il alegi!\n\n";
 cout << "\a\nAlegeti un operator pentru a se calculca calcule = ";
  cin >> operator_pentru_toate;
    switch (operator_pentru_toate){
  case 'x':

        cout << "\n\aAti ales sa aflati produsul, scrieti de la cate cifre vreti sa aflati : ";
 cin >> cate_numere;
    switch (cate_numere){
  case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
    rez = num1 * num2;
  cout << "Rez = "<<rez<<endl<<endl;
    return 0;
break;
   case '3':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
 rez = num1 * num2 * num3;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '4':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
 rez = num1 * num2 * num3 * num4;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '5':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
 rez = num1 * num2 * num3 * num4 * num5;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '6':
        int num6;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
 rez = num1 * num2 * num3 * num4 * num5 * num6;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '7':
        int num7;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '8':
        int  num8;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '9':
        int num9;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
     cout << "I= "; cin >> num9;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8 * num9;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    default :
        cout << "\n\aErorr!! Incearcati sa modificati ce ati scris!\a!\a!\n\n";
            return 0;
break;
   }

    case ':':
        cout << "\n\aScrieti din cate cifre sa fie catul : ";
        cin >> cate_numere;
            switch(cate_numere){
        case '2':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
         rezl = numa1 / numa2;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '3':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
         rezl = numa1 / numa2 / numa3;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '4':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
         rezl = numa1 / numa2 / numa3 / numa4;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '5':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '6':
         double numa6;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '7':
         double numa7;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '8':
         double numa8;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '9':
         double numa9;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
            cout << "I= "; cin >> numa9;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8 / numa9;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" : "<<numa9<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;

 default :
    int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }
       }
       }

 case '+':
    cout << "\n\aAlegeti din cate numere sa fie alcatuita Suma : ";
        cin >> cate_numere;
     switch(cate_numere){
 case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
 rez = num1 + num2;
    cout << "\n\aRez = "<<num1<<" + "<<num2<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
 case '3':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 + num2 + num3;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '4':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 + num2 + num3 + num4;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '5':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 + num2 + num3 + num4 + num5;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '6':
      int num6;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 + num2 + num3 + num4 + num5 + num6;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '7':
      int num7;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
      int num8;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '9':
      int num9;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" + "<<num9<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   default :

            system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in fuctiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in functiune!Incercati sa modificati ce ati scris\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
  }
  }
     }
   case '-':
    cout << "\n\aScrieti din cate numere sa fie alcatuit descazutul : ";
      cin >> cate_numere;
       switch(cate_numere){
   case '2':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
   rez = num1 - num2;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " = "<<rez<<endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '3':

    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 - num2 - num3;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '4':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 - num2 - num3 - num4;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " = "<<rez<< endl <<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '5':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 - num2 - num3 - num4 - num5;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '6':
       int num6;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 - num2 - num3 - num4 - num5 - num6;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '7':
       int num7;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" = "<<rez<< endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
       int num8;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
  case '9':
       int num9;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8 - num9;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" - "<<num9<<" = "<<rez<< endl <<endl;
   cout << "Rez = "<< rez << endl << endl;
        return 0;
break;

  }
    case 'R':
    cout << "\n\aScrieti de la cate numere vreri sa aflati radicalul : ";
      cin >> cate_numere;
        switch(cate_numere){
    case '1':
     cout << "\nA= "; cin >> num1;
     cout << "\nRadical din " << num1 << " este = " << sqrt(num1);

     return 0;
break;

   case '2':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
   return 0;
break;
  case '3':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
    return 0;
break;
  case '4':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
    return 0;
break;
  case '5':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  return 0;
break;
  case '6':
    int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
    return 0;
break;
  case '7':
    int num7;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  return 0;
break;
      case '8':
  int num8;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
 cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
    return 0;
break;
  case '9':
     int num9;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

  cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
  cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
  cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
  cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
  cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
  cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
  cout << "\nRadical din " << num9 << " este = " << sqrt(num9);
    return 0;
break;
  default :
int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':

cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
/**AICI SE SCRIE Codurile**/
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }}
      }

      case 'D':
      cout  << "\n\aAlegeti de la cate numere vreri sa aflati divizorii! = ";
        cin >> cate_numere;
    switch(cate_numere){

  case '1':
   cout << "\nA= "; cin >> num1;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";

            cout << endl;
   return 0;
break;
    case '2':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1 ; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";

            cout << endl;
   return 0;
break;
    case '3':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";

            cout << endl;
   return 0;
break;
    case '4':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
   cout << "D= "; cin >> num4;

    cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";
            cout << endl;

        cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
            for(int d4 = 1; d4 <= num4; d4++)
       if(num4 % d4 == 0)
           cout << d4 << " ";
            cout << endl;
   return 0;
break;
  case '5':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

 return 0;
break;
  case '6':
   int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

 return 0;
break;
  case '7':
   int num7;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

 return 0;
break;
    case '8':
        int num8;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;
 return 0;
break;
     case '9':
        int num9;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;
  cout << "I= "; cin >> num9;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;

          cout << "\a\nDivizorii numarului " << num9 << " sunt : ";
                    for(int d9 = 1; d9 <= num9; d9++)
            if(num9 % d9 == 0)
              cout << d9 << " ";
            cout << endl;
 return 0;
break;///Cod spre sfarsire ///\\\\\;

   default :
    system("cls");
  system("color 4");
       cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
/*****Aici se scrie codul*****/
    return 0;
break;
         }
           }
    }
     case 'A':
        cout << "\n\aScrieti de la cate cifre vreti sa aflati Media Aritmetica : ";
         cin >> cate_numere;
    switch(cate_numere){

    case '2':
      cout << "\nA= "; cin >> numa1;
      cout << "B= "; cin >> numa2;
    cout << "M.a = (" << numa1 << " + " << numa2 << " ) : " << cate_numere << " = " << (numa1 + numa2) / 2 << endl << endl;
        return 0;
break;
    case '3':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3) / cate_numere << endl << endl;
  return 0;
break;
    case '4':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4) / cate_numere << endl << endl;
  return 0;
break;
    case '5':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
        cout << "E= "; cin >> numa5;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5) / cate_numere << endl << endl;
  return 0;
break;
    case '6':
        double numa6;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6) / cate_numere << endl << endl;
  return 0;
break;
    case '7':
        double numa7;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7) / cate_numere << endl << endl;
  return 0;
break;
    case '8':
        double numa8;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
    case '9':
        double numa9;
   cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
    cout << "I= "; cin >> numa9;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " + " << numa9 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
      default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la caluclator nu a putut fi pus in functiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);

    return 0;
break;
        }
           }
        }

    case 'G':
        cout << "\n\aScrieti din cate cifre vreti sa aveti compusa Media Geometrica : ";
    cin >> cate_numere;
        switch(cate_numere){
    case '2':
      cout << "\nA= "; cin >> num1;
      cout << "B= "; cin >> num2;
      cout << "M.g = ";
      cout << "Radical din ( " << num1 << " + " << num2 << " ) = " << sqrt(num1 + num2) << endl;
    return 0;
break;
    case '3' :
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
   cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " ) = "<< sqrt(num1 + num2 + num3) << endl << endl;
    return 0;
break;
    case '4':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
    cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " ) = "<< sqrt(num1 + num2 + num3 + num4) << endl << endl;
        return 0;
break;
    case '5':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5) << endl << endl;
        return 0;
break;
    case '6':
            int num6;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6) << endl << endl;
        return 0;
break;
    case '7':
    int num7;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7) << endl << endl;
        return 0;
break;
    case '8':
           int num8;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8) << endl << endl;
        return 0;
break;
    case '9':
            int num9;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "I= "; cin >> num9;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " + " << num9 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9) << endl << endl;
        return 0;
break;
     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in fuctiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in functiune!Incercati sa modificati ce ati scris\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }


        }
        return 0;
break;
    }

     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Operatorul scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Operatorl scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }


        }
        return 0;
break;

    }
 default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Security.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
 system(" color B2");
        system("cls");

        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
            system("cls");
    cout << "\n\aAcest Calculator nu este disponibil, pana nu il decodati cu un cod : "<<endl<<endl;
    cout << "\aScrieti un cod pentru al decoda : ";
  cin >> cod_intrare;

    switch(cod_intrare){
 case '@':

  system("cls");
  system("color B2");
 cout << "\nCalculatorul este disponibil apasati enter pentru mai departe \r\r\r"<<endl<<endl;
 PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
    system("pause");
    system("cls");
system("color 6B");
 cout << "_____________________________________________________________________________________________________________________"<<endl;
 cout << "| Semnele   |    x    |   :   |   +  |     -     |     D     |        R        |    !   |      A       |      G     |"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "|Ce afiseaza|Produsul | Catul | Suma | Diferenta | Divizorii | Radacina patrata| Mai <=>| Media Aritm. | Media Geom.|"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "\nAi optiunea sa iti alegi si din cate numere vreti sa fie compus calculul care il alegi!\n\n";
 cout << "\a\nAlegeti un operator pentru a se calculca calcule = ";
  cin >> operator_pentru_toate;
    switch (operator_pentru_toate){
  case 'x':

        cout << "\n\aAti ales sa aflati produsul, scrieti de la cate cifre vreti sa aflati : ";
 cin >> cate_numere;
    switch (cate_numere){
  case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
    rez = num1 * num2;
  cout << "Rez = "<<rez<<endl<<endl;
    return 0;
break;
   case '3':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
 rez = num1 * num2 * num3;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '4':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
 rez = num1 * num2 * num3 * num4;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '5':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
 rez = num1 * num2 * num3 * num4 * num5;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '6':
        int num6;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
 rez = num1 * num2 * num3 * num4 * num5 * num6;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '7':
        int num7;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '8':
        int  num8;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '9':
        int num9;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
     cout << "I= "; cin >> num9;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8 * num9;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    default :
        cout << "\n\aErorr!! Incearcati sa modificati ce ati scris!\a!\a!\n\n";
            return 0;
break;
   }

    case ':':
        cout << "\n\aScrieti din cate cifre sa fie catul : ";
        cin >> cate_numere;
            switch(cate_numere){
        case '2':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
         rezl = numa1 / numa2;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '3':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
         rezl = numa1 / numa2 / numa3;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '4':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
         rezl = numa1 / numa2 / numa3 / numa4;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '5':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '6':
         double numa6;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '7':
         double numa7;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '8':
         double numa8;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '9':
         double numa9;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
            cout << "I= "; cin >> numa9;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8 / numa9;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" : "<<numa9<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;

 default :
    int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'w':
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }
       }
       }

 case '+':
    cout << "\n\aAlegeti din cate numere sa fie alcatuita Suma : ";
        cin >> cate_numere;
     switch(cate_numere){
 case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
 rez = num1 + num2;
    cout << "\n\aRez = "<<num1<<" + "<<num2<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
 case '3':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 + num2 + num3;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '4':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 + num2 + num3 + num4;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '5':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 + num2 + num3 + num4 + num5;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '6':
      int num6;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 + num2 + num3 + num4 + num5 + num6;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '7':
      int num7;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
      int num8;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '9':
      int num9;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" + "<<num9<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   default :
    cout << "\n\aErorr!\a! Incearcati sa modificati ce ati scris!\a!\a! \n\n";
        return 0;
break;
  }
   case '-':
    cout << "\n\aScrieti din cate numere sa fie alcatuit descazutul : ";
      cin >> cate_numere;
       switch(cate_numere){
   case '2':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
   rez = num1 - num2;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " = "<<rez<<endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '3':

    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 - num2 - num3;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '4':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 - num2 - num3 - num4;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " = "<<rez<< endl <<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '5':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 - num2 - num3 - num4 - num5;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '6':
       int num6;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 - num2 - num3 - num4 - num5 - num6;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '7':
       int num7;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" = "<<rez<< endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
       int num8;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
  case '9':
       int num9;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8 - num9;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" - "<<num9<<" = "<<rez<< endl <<endl;
   cout << "Rez = "<< rez << endl << endl;
        return 0;
break;

  }
    case 'R':
    cout << "\n\aScrieti de la cate numere vreri sa aflati radicalul : ";
      cin >> cate_numere;
        switch(cate_numere){
    case '1':
     cout << "\nA= "; cin >> num1;
     cout << "\nRadical din " << num1 << " este = " << sqrt(num1);

     return 0;
break;

   case '2':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
   return 0;
break;
  case '3':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
    return 0;
break;
  case '4':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
    return 0;
break;
  case '5':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  return 0;
break;
  case '6':
    int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
    return 0;
break;
  case '7':
    int num7;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  return 0;
break;
      case '8':
  int num8;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
 cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
    return 0;
break;
  case '9':
     int num9;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

  cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
  cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
  cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
  cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
  cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
  cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
  cout << "\nRadical din " << num9 << " este = " << sqrt(num9);
    return 0;
break;
  default :
int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':

cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
/**AICI SE SCRIE Codurile**/
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }}
      }

      case 'D':
      cout  << "\n\aAlegeti de la cate numere vreri sa aflati divizorii! = ";
        cin >> cate_numere;
    switch(cate_numere){

  case '1':
   cout << "\nA= "; cin >> num1;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";

            cout << endl;
   return 0;
break;
    case '2':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1 ; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";

            cout << endl;
   return 0;
break;
    case '3':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";

            cout << endl;
   return 0;
break;
    case '4':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
   cout << "D= "; cin >> num4;

    cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";
            cout << endl;

        cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
            for(int d4 = 1; d4 <= num4; d4++)
       if(num4 % d4 == 0)
           cout << d4 << " ";
            cout << endl;
   return 0;
break;
  case '5':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

 return 0;
break;
  case '6':
   int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

 return 0;
break;
  case '7':
   int num7;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

 return 0;
break;
    case '8':
        int num8;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;
 return 0;
break;
     case '9':
        int num9;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;
  cout << "I= "; cin >> num9;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;

          cout << "\a\nDivizorii numarului " << num9 << " sunt : ";
                    for(int d9 = 1; d9 <= num9; d9++)
            if(num9 % d9 == 0)
              cout << d9 << " ";
            cout << endl;
 return 0;
break;///Cod spre sfarsire ///\\\\\;

   default :
    system("cls");
  system("color 4");
       cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
/*****Aici se scrie codul*****/
    return 0;
break;
         }
           }
    }
     case 'A':
        cout << "\n\aScrieti de la cate cifre vreti sa aflati Media Aritmetica : ";
         cin >> cate_numere;
    switch(cate_numere){

    case '2':
      cout << "\nA= "; cin >> numa1;
      cout << "B= "; cin >> numa2;
    cout << "M.a = (" << numa1 << " + " << numa2 << " ) : " << cate_numere << " = " << (numa1 + numa2) / 2 << endl << endl;
        return 0;
break;
    case '3':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3) / cate_numere << endl << endl;
  return 0;
break;
    case '4':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4) / cate_numere << endl << endl;
  return 0;
break;
    case '5':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
        cout << "E= "; cin >> numa5;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5) / cate_numere << endl << endl;
  return 0;
break;
    case '6':
        double numa6;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6) / cate_numere << endl << endl;
  return 0;
break;
    case '7':
        double numa7;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7) / cate_numere << endl << endl;
  return 0;
break;
    case '8':
        double numa8;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
    case '9':
        double numa9;
   cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
    cout << "I= "; cin >> numa9;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " + " << numa9 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
      default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Incercati sa modificati ce ati scris! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }
           }
        }

    case 'G':
        cout << "\n\aScrieti din cate cifre vreti sa aveti compusa Media Geometrica : ";
    cin >> cate_numere;
        switch(cate_numere){
    case '2':
      cout << "\nA= "; cin >> num1;
      cout << "B= "; cin >> num2;
      cout << "M.g = ";
      cout << "Radical din ( " << num1 << " + " << num2 << " ) = " << sqrt(num1 + num2) << endl;
    return 0;
break;
    case '3' :
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
   cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " ) = "<< sqrt(num1 + num2 + num3) << endl << endl;
    return 0;
break;
    case '4':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
    cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " ) = "<< sqrt(num1 + num2 + num3 + num4) << endl << endl;
        return 0;
break;
    case '5':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5) << endl << endl;
        return 0;
break;
    case '6':
            int num6;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6) << endl << endl;
        return 0;
break;
    case '7':
    int num7;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7) << endl << endl;
        return 0;
break;
    case '8':
           int num8;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8) << endl << endl;
        return 0;
break;
    case '9':
            int num9;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "I= "; cin >> num9;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " + " << num9 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9) << endl << endl;
        return 0;
break;
     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in fuctiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in functiune!Incercati sa modificati ce ati scris\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);

    return 0;
break;
        }


        }
        return 0;
break;
    }

     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Operatorul scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Operatorl scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
system("cls");
            system(" color 6B");
    cout << "\n\aAcest Calculator nu este disponibil, pana nu il decodati cu un cod : "<<endl<<endl;
    cout << "\aScrieti un cod pentru al decoda : ";
  cin >> cod_intrare;

    switch(cod_intrare){
 case '@':

  system("cls");
    system("color B2");
system("cls");
 cout << "\nCalculatorul este disponibil apasati enter pentru mai departe \r\r\r"<<endl<<endl;
 PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
    system("pause");
    system("cls");

      system("color 6B");
 cout << "_____________________________________________________________________________________________________________________"<<endl;
 cout << "| Semnele   |    x    |   :   |   +  |     -     |     D     |        R        |    !   |      A       |      G     |"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "|Ce afiseaza|Produsul | Catul | Suma | Diferenta | Divizorii | Radacina patrata| Mai <=>| Media Aritm. | Media Geom.|"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "\nAi optiunea sa iti alegi si din cate numere vreti sa fie compus calculul care il alegi!\n\n";
 cout << "\a\nAlegeti un operator pentru a se calculca calcule = ";
  cin >> operator_pentru_toate;
    switch (operator_pentru_toate){
  case 'x':

        cout << "\n\aAti ales sa aflati produsul, scrieti de la cate cifre vreti sa aflati : ";
 cin >> cate_numere;
    switch (cate_numere){
  case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
    rez = num1 * num2;
  cout << "Rez = "<<rez<<endl<<endl;
    return 0;
break;
   case '3':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
 rez = num1 * num2 * num3;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '4':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
 rez = num1 * num2 * num3 * num4;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '5':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
 rez = num1 * num2 * num3 * num4 * num5;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '6':
        int num6;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
 rez = num1 * num2 * num3 * num4 * num5 * num6;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '7':
        int num7;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '8':
        int  num8;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '9':
        int num9;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
     cout << "I= "; cin >> num9;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8 * num9;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    default :
        cout << "\n\aErorr!! Incearcati sa modificati ce ati scris!\a!\a!\n\n";
            return 0;
break;
   }

    case ':':
        cout << "\n\aScrieti din cate cifre sa fie catul : ";
        cin >> cate_numere;
            switch(cate_numere){
        case '2':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
         rezl = numa1 / numa2;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '3':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
         rezl = numa1 / numa2 / numa3;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '4':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
         rezl = numa1 / numa2 / numa3 / numa4;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '5':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '6':
         double numa6;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '7':
         double numa7;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '8':
         double numa8;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '9':
         double numa9;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
            cout << "I= "; cin >> numa9;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8 / numa9;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" : "<<numa9<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;

 default :
    int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'w':
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }
       }
       }

 case '+':
    cout << "\n\aAlegeti din cate numere sa fie alcatuita Suma : ";
        cin >> cate_numere;
     switch(cate_numere){
 case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
 rez = num1 + num2;
    cout << "\n\aRez = "<<num1<<" + "<<num2<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
 case '3':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 + num2 + num3;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '4':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 + num2 + num3 + num4;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '5':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 + num2 + num3 + num4 + num5;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '6':
      int num6;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 + num2 + num3 + num4 + num5 + num6;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '7':
      int num7;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
      int num8;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '9':
      int num9;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" + "<<num9<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   default :
    cout << "\n\aErorr!\a! Incearcati sa modificati ce ati scris!\a!\a! \n\n";
        return 0;
break;
  }
   case '-':
    cout << "\n\aScrieti din cate numere sa fie alcatuit descazutul : ";
      cin >> cate_numere;
       switch(cate_numere){
   case '2':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
   rez = num1 - num2;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " = "<<rez<<endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '3':

    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 - num2 - num3;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '4':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 - num2 - num3 - num4;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " = "<<rez<< endl <<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '5':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 - num2 - num3 - num4 - num5;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '6':
       int num6;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 - num2 - num3 - num4 - num5 - num6;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '7':
       int num7;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" = "<<rez<< endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
       int num8;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
  case '9':
       int num9;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8 - num9;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" - "<<num9<<" = "<<rez<< endl <<endl;
   cout << "Rez = "<< rez << endl << endl;
        return 0;
break;

  }
    case 'R':
    cout << "\n\aScrieti de la cate numere vreri sa aflati radicalul : ";
      cin >> cate_numere;
        switch(cate_numere){
    case '1':
     cout << "\nA= "; cin >> num1;
     cout << "\nRadical din " << num1 << " este = " << sqrt(num1);

     return 0;
break;

   case '2':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
   return 0;
break;
  case '3':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
    return 0;
break;
  case '4':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
    return 0;
break;
  case '5':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  return 0;
break;
  case '6':
    int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
    return 0;
break;
  case '7':
    int num7;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  return 0;
break;
      case '8':
  int num8;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
 cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
    return 0;
break;
  case '9':
     int num9;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

  cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
  cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
  cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
  cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
  cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
  cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
  cout << "\nRadical din " << num9 << " este = " << sqrt(num9);
    return 0;
break;
  default :
int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':

cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
/**AICI SE SCRIE Codurile**/
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }}
      }

      case 'D':
      cout  << "\n\aAlegeti de la cate numere vreri sa aflati divizorii! = ";
        cin >> cate_numere;
    switch(cate_numere){

  case '1':
   cout << "\nA= "; cin >> num1;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";

            cout << endl;
   return 0;
break;
    case '2':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1 ; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";

            cout << endl;
   return 0;
break;
    case '3':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";

            cout << endl;
   return 0;
break;
    case '4':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
   cout << "D= "; cin >> num4;

    cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";
            cout << endl;

        cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
            for(int d4 = 1; d4 <= num4; d4++)
       if(num4 % d4 == 0)
           cout << d4 << " ";
            cout << endl;
   return 0;
break;
  case '5':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

 return 0;
break;
  case '6':
   int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

 return 0;
break;
  case '7':
   int num7;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

 return 0;
break;
    case '8':
        int num8;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;
 return 0;
break;
     case '9':
        int num9;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;
  cout << "I= "; cin >> num9;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;

          cout << "\a\nDivizorii numarului " << num9 << " sunt : ";
                    for(int d9 = 1; d9 <= num9; d9++)
            if(num9 % d9 == 0)
              cout << d9 << " ";
            cout << endl;
 return 0;
break;///Cod spre sfarsire ///\\\\\;

   default :
    system("cls");
  system("color 4");
       cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
/*****Aici se scrie codul*****/
    return 0;
break;
         }
           }
    }
     case 'A':
        cout << "\n\aScrieti de la cate cifre vreti sa aflati Media Aritmetica : ";
         cin >> cate_numere;
    switch(cate_numere){

    case '2':
      cout << "\nA= "; cin >> numa1;
      cout << "B= "; cin >> numa2;
    cout << "M.a = (" << numa1 << " + " << numa2 << " ) : " << cate_numere << " = " << (numa1 + numa2) / 2 << endl << endl;
        return 0;
break;
    case '3':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3) / cate_numere << endl << endl;
  return 0;
break;
    case '4':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4) / cate_numere << endl << endl;
  return 0;
break;
    case '5':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
        cout << "E= "; cin >> numa5;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5) / cate_numere << endl << endl;
  return 0;
break;
    case '6':
        double numa6;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6) / cate_numere << endl << endl;
  return 0;
break;
    case '7':
        double numa7;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7) / cate_numere << endl << endl;
  return 0;
break;
    case '8':
        double numa8;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
    case '9':
        double numa9;
   cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
    cout << "I= "; cin >> numa9;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " + " << numa9 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
      default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Incercati sa modificati ce ati scris! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }
           }
        }

    case 'G':
        cout << "\n\aScrieti din cate cifre vreti sa aveti compusa Media Geometrica : ";
    cin >> cate_numere;
        switch(cate_numere){
    case '2':
      cout << "\nA= "; cin >> num1;
      cout << "B= "; cin >> num2;
      cout << "M.g = ";
      cout << "Radical din ( " << num1 << " + " << num2 << " ) = " << sqrt(num1 + num2) << endl;
    return 0;
break;
    case '3' :
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
   cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " ) = "<< sqrt(num1 + num2 + num3) << endl << endl;
    return 0;
break;
    case '4':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
    cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " ) = "<< sqrt(num1 + num2 + num3 + num4) << endl << endl;
        return 0;
break;
    case '5':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5) << endl << endl;
        return 0;
break;
    case '6':
            int num6;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6) << endl << endl;
        return 0;
break;
    case '7':
    int num7;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7) << endl << endl;
        return 0;
break;
    case '8':
           int num8;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8) << endl << endl;
        return 0;
break;
    case '9':
            int num9;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "I= "; cin >> num9;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " + " << num9 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9) << endl << endl;
        return 0;
break;
     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in fuctiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in functiune!Incercati sa modificati ce ati scris\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }


        }
        return 0;
break;
    }

     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Operatorul scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Operatorl scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);

    return 0;
break;
        }


        }
        return 0;
break;

    }
 default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
 system(" color B2");
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
            system("cls");
    cout << "\n\aAcest Calculator nu este disponibil, pana nu il decodati cu un cod : "<<endl<<endl;
    cout << "\aScrieti un cod pentru al decoda : ";
  cin >> cod_intrare;

    switch(cod_intrare){
 case '@':

  system("cls");
  system("color B2");
 cout << "\nCalculatorul este disponibil apasati enter pentru mai departe \r\r\r"<<endl<<endl;
 PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
    system("pause");
    system("cls");
system("color 6B");
 cout << "_____________________________________________________________________________________________________________________"<<endl;
 cout << "| Semnele   |    x    |   :   |   +  |     -     |     D     |        R        |    !   |      A       |      G     |"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "|Ce afiseaza|Produsul | Catul | Suma | Diferenta | Divizorii | Radacina patrata| Mai <=>| Media Aritm. | Media Geom.|"<<endl;
 cout << "|___________|_________|_______|______|___________|___________|_________________|________|______________|____________|"<<endl;
 cout << "\nAi optiunea sa iti alegi si din cate numere vreti sa fie compus calculul care il alegi!\n\n";
 cout << "\a\nAlegeti un operator pentru a se calculca calcule = ";
  cin >> operator_pentru_toate;
    switch (operator_pentru_toate){
  case 'x':

        cout << "\n\aAti ales sa aflati produsul, scrieti de la cate cifre vreti sa aflati : ";
 cin >> cate_numere;
    switch (cate_numere){
  case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
    rez = num1 * num2;
  cout << "Rez = "<<rez<<endl<<endl;
    return 0;
break;
   case '3':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
 rez = num1 * num2 * num3;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '4':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
 rez = num1 * num2 * num3 * num4;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '5':
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
 rez = num1 * num2 * num3 * num4 * num5;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '6':
        int num6;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
 rez = num1 * num2 * num3 * num4 * num5 * num6;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '7':
        int num7;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '8':
        int  num8;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    case '9':
        int num9;
     cout << "\nA= "; cin >> num1;
     cout << "B= "; cin >> num2;
     cout << "C= "; cin >> num3;
     cout << "D= "; cin >> num4;
     cout << "E= "; cin >> num5;
     cout << "F= "; cin >> num6;
     cout << "G= "; cin >> num7;
     cout << "H= "; cin >> num8;
     cout << "I= "; cin >> num9;
 rez = num1 * num2 * num3 * num4 * num5 * num6 * num7 * num8 * num9;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
    default :
        cout << "\n\aErorr!! Incearcati sa modificati ce ati scris!\a!\a!\n\n";
            return 0;
break;
   }

    case ':':
        cout << "\n\aScrieti din cate cifre sa fie catul : ";
        cin >> cate_numere;
            switch(cate_numere){
        case '2':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
         rezl = numa1 / numa2;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '3':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
         rezl = numa1 / numa2 / numa3;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '4':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
         rezl = numa1 / numa2 / numa3 / numa4;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
        case '5':
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '6':
         double numa6;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
   case '7':
         double numa7;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '8':
         double numa8;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;
 case '9':
         double numa9;
            cout << "\nA= "; cin >> numa1;
            cout << "B= "; cin >> numa2;
            cout << "C= "; cin >> numa3;
            cout << "D= "; cin >> numa4;
            cout << "E= "; cin >> numa5;
            cout << "F= "; cin >> numa6;
            cout << "G= "; cin >> numa7;
            cout << "H= "; cin >> numa8;
            cout << "I= "; cin >> numa9;
         rezl = numa1 / numa2 / numa3 / numa4 / numa5 / numa6 / numa7 / numa8 / numa9;
         cout << "Rez = "<<numa1<< " : "<<numa2<< " : "<<numa3<<" : "<<numa4<<" : "<<numa5<<" : "<<numa6<<" : "<<numa7<<" : "<<numa8<<" : "<<numa9<<" = "<<rezl<<endl<<endl;
         cout << "\aRez = "<<rezl<<endl<<endl;
        return 0;
break;

 default :
    int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'w':
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }
       }
       }

 case '+':
    cout << "\n\aAlegeti din cate numere sa fie alcatuita Suma : ";
        cin >> cate_numere;
     switch(cate_numere){
 case '2':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
 rez = num1 + num2;
    cout << "\n\aRez = "<<num1<<" + "<<num2<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
 case '3':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 + num2 + num3;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '4':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 + num2 + num3 + num4;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '5':
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 + num2 + num3 + num4 + num5;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '6':
      int num6;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 + num2 + num3 + num4 + num5 + num6;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
  case '7':
      int num7;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
      int num8;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '9':
      int num9;
        cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
    cout << "\n\aRez = "<<num1<< " + " <<num2<< " + "<<num3<< " + "<<num4<<" + "<<num5<<" + "<<num6<<" + "<<num7<<" + "<<num8<<" + "<<num9<<" = "<<rez<<endl<<endl;
    cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   default :
    cout << "\n\aErorr!\a! Incearcati sa modificati ce ati scris!\a!\a! \n\n";
        return 0;
break;
  }
   case '-':
    cout << "\n\aScrieti din cate numere sa fie alcatuit descazutul : ";
      cin >> cate_numere;
       switch(cate_numere){
   case '2':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
   rez = num1 - num2;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " = "<<rez<<endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '3':

    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
   rez = num1 - num2 - num3;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '4':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
   rez = num1 - num2 - num3 - num4;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " = "<<rez<< endl <<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '5':
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
   rez = num1 - num2 - num3 - num4 - num5;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '6':
       int num6;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
   rez = num1 - num2 - num3 - num4 - num5 - num6;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '7':
       int num7;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" = "<<rez<< endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
break;
   case '8':
       int num8;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" = "<<rez<< endl<<endl;
   cout << "Rez = "<<rez<<endl<<endl;
        return 0;
  case '9':
       int num9;
    cout << "\nA= "; cin >> num1;
    cout << "B= "; cin >> num2;
    cout << "C= "; cin >> num3;
    cout << "D= "; cin >> num4;
    cout << "E= "; cin >> num5;
    cout << "F= "; cin >> num6;
    cout << "G= "; cin >> num7;
    cout << "H= "; cin >> num8;
    cout << "I= "; cin >> num9;
   rez = num1 - num2 - num3 - num4 - num5 - num6 - num7 - num8 - num9;
   cout << "\n\aRez = "<<num1<< " - "<<num2<< " - "<<num3<<" - "<<num4<< " - "<<num5<<" - "<<num6<<" - "<<num7<<" - "<<num8<<" - "<<num9<<" = "<<rez<< endl <<endl;
   cout << "Rez = "<< rez << endl << endl;
        return 0;
break;

  }
    case 'R':
    cout << "\n\aScrieti de la cate numere vreri sa aflati radicalul : ";
      cin >> cate_numere;
        switch(cate_numere){
    case '1':
     cout << "\nA= "; cin >> num1;
     cout << "\nRadical din " << num1 << " este = " << sqrt(num1);

     return 0;
break;

   case '2':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
   return 0;
break;
  case '3':
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
    return 0;
break;
  case '4':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
    return 0;
break;
  case '5':

 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  return 0;
break;
  case '6':
    int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
    return 0;
break;
  case '7':
    int num7;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  return 0;
break;
      case '8':
  int num8;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

 cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
 cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
 cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
 cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
 cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
 cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
 cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
 cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
    return 0;
break;
  case '9':
     int num9;
 cout << "\nA= "; cin >> num1;
 cout << "B= "; cin >> num2;
 cout << "C= "; cin >> num3;
 cout << "D= "; cin >> num4;
 cout << "E= "; cin >> num5;
 cout << "F= "; cin >> num6;
 cout << "G= "; cin >> num7;
 cout << "H= "; cin >> num8;

  cout << "\nRadical din " << num1 << " este = " << sqrt(num1);
  cout << "\nRadical din " << num2 << " este = " << sqrt(num2);
  cout << "\nRadical din " << num3 << " este = " << sqrt(num3);
  cout << "\nRadical din " << num4 << " este = " << sqrt(num4);
  cout << "\nRadical din " << num5 << " este = " << sqrt(num5);
  cout << "\nRadical din " << num6 << " este = " << sqrt(num6);
  cout << "\nRadical din " << num7 << " este = " << sqrt(num7);
  cout << "\nRadical din " << num8 << " este = " << sqrt(num8);
  cout << "\nRadical din " << num9 << " este = " << sqrt(num9);
    return 0;
break;
  default :
int n = 100;
      while(n){
    Sleep(1);
      system("cls");

      system("COLOR 4");
    cout << "\n\a\aCe ati introdus este incorect incearca sa rescri!\a\n\n\a";
     PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':

cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
/**AICI SE SCRIE Codurile**/
    PlaySound(TEXT("Win.wav.wav"),NULL, SND_SYNC);
    return 0;
break;

       }}
      }

      case 'D':
      cout  << "\n\aAlegeti de la cate numere vreri sa aflati divizorii! = ";
        cin >> cate_numere;
    switch(cate_numere){

  case '1':
   cout << "\nA= "; cin >> num1;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";

            cout << endl;
   return 0;
break;
    case '2':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1 ; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1 ; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";

            cout << endl;
   return 0;
break;
    case '3':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
        cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";

            cout << endl;
   return 0;
break;
    case '4':
   cout << "\nA= "; cin >> num1;
   cout << "B= "; cin >> num2;
   cout << "C= "; cin >> num3;
   cout << "D= "; cin >> num4;

    cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
   for(int d = 1; d <= num1; d++)
       if(num1 % d == 0)
           cout << d << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num2 << " sunt ";
            for(int d2 = 1; d2 <= num2; d2++)
       if(num2 % d2 == 0)
           cout << d2 << " ";
            cout << endl;

                cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                    for(int d3 = 1; d3 <= num3; d3++)
       if(num3 % d3 == 0)
           cout << d3 << " ";
            cout << endl;

        cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
            for(int d4 = 1; d4 <= num4; d4++)
       if(num4 % d4 == 0)
           cout << d4 << " ";
            cout << endl;
   return 0;
break;
  case '5':
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

 return 0;
break;
  case '6':
   int num6;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

 return 0;
break;
  case '7':
   int num7;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

 return 0;
break;
    case '8':
        int num8;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;
 return 0;
break;
     case '9':
        int num9;
  cout << "\nA= "; cin >> num1;
  cout << "B= "; cin >> num2;
  cout << "C= "; cin >> num3;
  cout << "D= "; cin >> num4;
  cout << "E= "; cin >> num5;
  cout << "F= "; cin >> num6;
  cout << "G= "; cin >> num7;
  cout << "H= "; cin >> num8;
  cout << "I= "; cin >> num9;

  cout << "\n\aDivizorii numarului " << num1 << " sunt : ";
 for(int d = 1; d <= num1; d++)
     if(num1 % d == 0)
         cout << d << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num2 << " sunt ";
          for(int d2 = 1; d2 <= num2; d2++)
     if(num2 % d2 == 0)
         cout << d2 << " ";
          cout << endl;

              cout << "\n\aDivizorii numarului " << num3 << " sunt ";
                  for(int d3 = 1; d3 <= num3; d3++)
     if(num3 % d3 == 0)
         cout << d3 << " ";
          cout << endl;

      cout << "\n\aDivizorii numarului " << num4 << " sunt : ";
          for(int d4 = 1; d4 <= num4; d4++)
     if(num4 % d4 == 0)
         cout << d4 << " ";
          cout << endl;

    cout << "\n\aDivizorii numarului " << num5 << " sunt : ";
              for(int d5 = 1; d5 <= num5; d5++)
         if(num5 % d5 == 0)
             cout << d5 << " ";
              cout << endl;

              cout << "\n\aDivizorii numarului " << num6 << " sunt : ";
              for(int d6 = 1; d6 <= num6; d6++)
            if(num6 % d6 == 0)
              cout << d6 << " ";
            cout << endl;

              cout << "\n\aDivizorii numarului " << num7 << " sunt : ";
              for(int d7 = 1; d7 <= num7; d7++)
            if(num7 % d7 == 0)
              cout << d7 << " ";
            cout << endl;

            cout << "\a\nDivizorii numarului " << num8 << " sunt : ";
                    for(int d8 = 1; d8 <= num8; d8++)
            if(num8 % d8 == 0)
              cout << d8 << " ";
            cout << endl;

          cout << "\a\nDivizorii numarului " << num9 << " sunt : ";
                    for(int d9 = 1; d9 <= num9; d9++)
            if(num9 % d9 == 0)
              cout << d9 << " ";
            cout << endl;
 return 0;
break;///Cod spre sfarsire ///;

   default :
    system("cls");
  system("color 4");
       cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Numarul de cifre cerut a depasit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
/*****Aici se scrie codul**/
    return 0;
break;
         }
           }
    }
     case 'A':
        cout << "\n\aScrieti de la cate cifre vreti sa aflati Media Aritmetica : ";
         cin >> cate_numere;
    switch(cate_numere){

    case '2':
      cout << "\nA= "; cin >> numa1;
      cout << "B= "; cin >> numa2;
    cout << "M.a = (" << numa1 << " + " << numa2 << " ) : " << cate_numere << " = " << (numa1 + numa2) / 2 << endl << endl;
        return 0;
break;
    case '3':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3) / cate_numere << endl << endl;
  return 0;
break;
    case '4':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4) / cate_numere << endl << endl;
  return 0;
break;
    case '5':
        cout << "\nA= "; cin >> numa1;
        cout << "B= "; cin >> numa2;
        cout << "C= "; cin >> numa3;
        cout << "D= "; cin >> numa4;
        cout << "E= "; cin >> numa5;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5) / cate_numere << endl << endl;
  return 0;
break;
    case '6':
        double numa6;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6) / cate_numere << endl << endl;
  return 0;
break;
    case '7':
        double numa7;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7) / cate_numere << endl << endl;
  return 0;
break;
    case '8':
        double numa8;
    cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
    case '9':
        double numa9;
   cout << "\nA= "; cin >> numa1;
    cout << "B= "; cin >> numa2;
    cout << "C= "; cin >> numa3;
    cout << "D= "; cin >> numa4;
    cout << "E= "; cin >> numa5;
    cout << "F= "; cin >> numa6;
    cout << "G= "; cin >> numa7;
    cout << "H= "; cin >> numa8;
    cout << "I= "; cin >> numa9;
  cout << "M.a = (" << numa1 << " + " << numa2 << " + " << numa3 << " + " << numa4 << " + " << numa5 << " + " << numa6 << " + " << numa7 << " + " << numa8 << " + " << numa9 << " ) : " << cate_numere << " = " << (numa1 + numa2 + numa3 + numa4 + numa5 + numa6 + numa7 + numa8) / cate_numere << endl << endl;
  return 0;
break;
      default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Security.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Incercati sa modificati ce ati scris! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/******Aici se scrie codul*******/
    return 0;
break;
        }
           }
        }

    case 'G':
        cout << "\n\aScrieti din cate cifre vreti sa aveti compusa Media Geometrica : ";
    cin >> cate_numere;
        switch(cate_numere){
    case '2':
      cout << "\nA= "; cin >> num1;
      cout << "B= "; cin >> num2;
      cout << "M.g = ";
      cout << "Radical din ( " << num1 << " + " << num2 << " ) = " << sqrt(num1 + num2) << endl;
    return 0;
break;
    case '3' :
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
   cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " ) = "<< sqrt(num1 + num2 + num3) << endl << endl;
    return 0;
break;
    case '4':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
    cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " ) = "<< sqrt(num1 + num2 + num3 + num4) << endl << endl;
        return 0;
break;
    case '5':
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5) << endl << endl;
        return 0;
break;
    case '6':
            int num6;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6) << endl << endl;
        return 0;
break;
    case '7':
    int num7;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7) << endl << endl;
        return 0;
break;
    case '8':
           int num8;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8) << endl << endl;
        return 0;
break;
    case '9':
            int num9;
        cout << "\nA= "; cin >> num1;
        cout << "B= "; cin >> num2;
        cout << "C= "; cin >> num3;
        cout << "D= "; cin >> num4;
        cout << "E= "; cin >> num5;
        cout << "F= "; cin >> num6;
        cout << "G= "; cin >> num7;
        cout << "H= "; cin >> num8;
        cout << "I= "; cin >> num9;
        cout << "\nM.g = " << " Radical din ( " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " + " << num6 << " + " << num7 << " + " << num8 << " + " << num9 << " ) = " << sqrt(num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9) << endl << endl;
        return 0;
break;
     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in fuctiune!Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Ce ati cerut de la Calculator nu a putut sa fie pus in functiune!Incercati sa modificati ce ati scris\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);
/********Aici se scrie codul*******/
    return 0;
break;
        }


        }
        return 0;
break;
    }

     default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Operatorul scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Game Over.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Operatorl scris este gresit! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
    case 'W':
        system("cls");
        PlaySound(TEXT("Win.wav"),NULL, SND_SYNC);

    return 0;
break;
        }


        }
        return 0;
break;

    }
 default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";
        PlaySound(TEXT("Security.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Pinul scris nu exista! Incercati sa modificati ce ati scris!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie sau apasati tasta W pentru mai departe\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
        }


        }
        return 0;
break;
    }
    return 0;
break;
        }


        }
        return 0;
break;
    }
    return 0;
break;
        }


        }
        return 0;
break;

    }
 default :
    system("cls");
  system("color 4");
        cout << "\n\aErorr!!Pinul scris nu exista! Trebuie sa redeschizi aplicatia pentru ca ai gresit pinul mai mult de 2 ori!\a!\a!\n\n";
        PlaySound(TEXT("Security.wav"),NULL, SND_SYNC);
        int n = 1;
           while(n){
    Sleep(1);
      system("cls");
    cout << "\n\aErorr!!Pinul scris nu exista! Trebuie sa redeschizi aplicatia pentru ca ai gresit pinul mai mult de 2 ori!\a!\a!\n\n";

            cout << "\a\nApasati tasta Q pentru a iesi din aplicatie, aceasta este ultima sansa sa mai poti deschide aplicatia\n\n";
    char mai_departe;
    cin >> mai_departe;
       switch(mai_departe){

    case 'Q':
cout << "\n\aApasati enter pentru a iesi din aplicatie\a\n\n";

       return 0;
break;
        }


        }
        return 0;
break;
    }
    return 0;
break;
        }

        }
        return 0;
break;
    }
    cout << "Apasati enter pentru mai departe daca nu apasati X pentru a iesi afara!\n\n";
system("pause");
}
  return 0;
  }
