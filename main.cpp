#include <iostream>
int dec,bin,x1,x2,xr,i,licz;
int main (){
        std::cout<<"podaj ile cyfr masz:";
        std::cin>>licz;
        std::cout<<"podaj ostatnia cyfra liczby bin:";
        std::cin>>bin;     
        if (bin=1)
        {
                x1=2;
        }
        if(bin=0)
        {
               licz=licz-1;
                x1=2;
        }


 
        std::cout<<x1;

         for (i = 0; i<licz-1; i++)
         {
                std::cout<<"podaj ostatnia cyfra liczby bin:";
                std::cin>>bin;
                x1=x1*2+bin;
                std::cout<<x1;
                bin=0;
         }
         


 return 0;       
}