#include <iostream>
#include "calculator.hpp"
using namespace std;

int main()
{
	double a, b;
	
	double summa(double a, double b);
	double sub(double a, double b); 
	double mult(double a, double b);
	double dev(double a, double b);
	double pow(double a, double b);
	double sqrt(double a);
    
    setlocale(LC_ALL,"rus");
    
    cout<< "Введите значение a\n ";
    cin >> a;
    cout<< "Введите значение b\n ";
    cin >> b;
    
    cout<<"\nCумма равна: " << summa(a,b);
    cout<<"\nРазность равна: "<< sub(a,b);
    cout<<"\nПроизведение равно: "<< pow(a,b);
    cout<<"\nЧастное равно: "<< dev(a,b);
    cout<<"\na в степени c равно: "<< mult(a,b);
    cout<<"\nквадратный корень из c равен: "<<sqrt(a) ;

  
 system("pause");
}
