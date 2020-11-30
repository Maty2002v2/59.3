#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
class liczba_zad
{
    int liczba;

  public:
    int odwroc_liczbe(); //na wyniku odwrocona liczba
    bool czy_suma_jest_palindromem(); //glowna funkcja liczaca wyliczaj¹ca czy liczba i jej odwrotnosc jest palindromem
  
  private:
  //wewnêtrzne metody tylko dla tej klasy do u¿ycja w funkcjach np. public
    string zamien_liczbe_na_string();
    string odwroc_liczbe_str(string liczbastr); // z tej funkcji korzysta funkcja odwroc_liczbe()
    bool czy_palindrom_string(string liczbastr); //od konca znak = od poczatku
};

class plik {
  public:
  	ifstream plik1;
    ofstream plik2;
    
    plik();
    ~plik();
};

int liczba_zad::odwroc_liczbe()
{
   int wynik;
   int suma;
   string odw = odwroc_liczbe_str(zamien_liczbe_na_string());
   wynik = stoi(odw); //zamiana na int.
   suma = liczba + odw;//suma = liczba+liczba_odwrotna;
   
   return suma;
}

string liczba_zad::zamien_liczbe_na_string(){
	return to_string(liczba);
}

string liczba_zad::odwroc_liczbe_str(string s){
	string Rstr;
    int len=s.length();
    
    for(int i=len-1;i>=0;i--)
		Rstr+=s[i];
		
    return Rstr;
}

bool liczba_zad::czy_suma_jest_palindromem() {
	string suma = to_string(odwroc_liczbe())
	for (int i=0; i<suma.length()/2 && isPalindrome; i++) {
		if (polacz[i] != polacz[end--]) 
            return false;
	}
	
	return true;
}

plik::plik(){ 
    plik1.open("c:\\palindromy.txt");
    plik2.open("c:\\wynikJSON.txt");
}

plik::~plik(){
    plik1.close();
    plik2.close();
}

int main(int argc, char** argv) {
	liczba_zad liczba;
	return 0;
}
