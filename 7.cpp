#include <iostream>
using namespace std;

int main()
{
    char roman_Numeral;
    int arabic_Numeral=0,sum=0;
    while(cin.get(roman_Numeral))
    {
        if(roman_Numeral=='+')
        {
            sum=sum+arabic_Numeral;
            arabic_Numeral=0;
        }
        else{
                             if (roman_Numeral == 'M') arabic_Numeral=arabic_Numeral+1000;

                             else if (roman_Numeral == 'D')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M'){ arabic_Numeral=arabic_Numeral-500; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+500; continue;}
                             }

                             else if (roman_Numeral == 'C')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M' || roman_Numeral == 'D'){ arabic_Numeral=arabic_Numeral-100; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+100; continue;}
                             }

                             else if (roman_Numeral == 'L')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M' || roman_Numeral == 'D' || roman_Numeral == 'C'){ arabic_Numeral=arabic_Numeral-50; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+50; continue;}
                             }

                             else if (roman_Numeral == 'X')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M' || roman_Numeral == 'D' || roman_Numeral == 'C' || roman_Numeral == 'L'){ arabic_Numeral=arabic_Numeral-10; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+10; continue;}
                             }

                             else if (roman_Numeral == 'V')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M' || roman_Numeral == 'D' || roman_Numeral == 'C' || roman_Numeral == 'L' || roman_Numeral == 'X'){ arabic_Numeral=arabic_Numeral-5; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+5; continue;}
                             }

                             else if (roman_Numeral == 'I')
                             {
                                                    roman_Numeral = cin.peek();
                                                    if(roman_Numeral == 'M' || roman_Numeral == 'D' || roman_Numeral == 'C' || roman_Numeral == 'L' || roman_Numeral == 'X' || roman_Numeral == 'V'){ arabic_Numeral=arabic_Numeral-1; continue;}
                                                    else{ arabic_Numeral=arabic_Numeral+1; continue;}
                             }
                             else break;
        }
    }
    sum=sum+arabic_Numeral;
     for(int m = 1000;sum >= m; sum -= 1000)
           {cout<<"M";}
      for(int cm = 900; sum >= cm; sum -= 900)
          {cout<< "CM";}
       for(int d = 500;sum >= d; sum -= 500)
           {cout<<"D";}
       if(sum >= 400){ cout<<"CD"; sum -= 400; }
       else {
               for(int c = 100;sum >= c; sum -= 100)
                   {cout<<"C";}
           }
      for(int xc = 90; sum >= xc; sum -= 90)
          {cout<< "XC";}
       for(int l = 50;sum >= l; sum -= 50)
           {cout<<"L";}
       if(sum >= 40){ cout<<"XL"; sum -= 40; }
       else {
                for(int x = 10;sum >= x; sum -= 10)
                   {cout<<"X";}
           }
      for(int ix = 9; sum >= ix; sum -= 9)
          {cout<< "IX";}
       for(int v = 5;sum >= v; sum -= 5)
           {cout<<"V";}
       if(sum >= 4){ cout<<"IV"; sum -= 4; }
       else {
                for(int i = 1;sum >= i; sum -= 1)
                   {cout<<"I";}
            }
cout<<endl;

return 0;
}
