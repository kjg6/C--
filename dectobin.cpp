#include <iostream>
#include <string>
#include <algorithm>

int dec,bin,x1,x2,xr,i,licz,a;
int main (){
  
  
  
  
  std::cout<<"UWAGA!! czytaj od prawej do lewej!!!";
  std::cout<<"podaj liczbe dec:";
    std:: cin>>dec;
    std::cout<<"podaj liczbę cyfr";
    std:: cin>>a;
    


        for(int i=a; i>=1; i--)
        {
                x1=dec%2;
                dec=dec/2;
                std:: cout<<x1;//ostatnia cyfra
        }

         


 return 0;       
}