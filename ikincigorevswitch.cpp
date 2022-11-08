#include <iostream>
#include <vector>
#include <string>
//C++ varsayýlan ayarda Türkçe karakter yazdýrmýyor. Destekleyen standart kütüphaneyi eklememiz gerekiyor.

#include <locale.h> // veya C++ için <clocale>

int main(){
	setlocale(LC_ALL, "Turkish");

	std::vector<std::string> onlar = {"on","yirmi","otuz","kýrk","elli","altmýþ","yetmiþ","seksen","doksan"};
	std::vector<std::string> birler = {"bir","iki","üç","dört","beþ","altý","yedi","sekiz","dokuz"};

	std::string transcript = "";
	std::string sayi;
	std::cin >> sayi;
	int len = sayi.length();
	int index = int(sayi[0] -'0');
	
	switch(len){
		
		case 3:
			if(index != 1){
				transcript += birler[index-1];
			}
			transcript += "yüz";
			index = int(sayi[1] - '0');
			if(index != 0){
				transcript += onlar[index-1];
			}
			index = int(sayi[2] - '0');
			if(index != 0){
				transcript += birler[index-1];
			}
			break;
		case 2:
			index = int(sayi[0] - '0');
			if(index != 0){
				transcript += onlar[index-1];
			}
			index = int(sayi[1] - '0');
			if(index != 0){
				transcript += birler[index-1];
			}
			break;
		default:
			index = int(sayi[0] - '0');
			if(index != 0){
				transcript += birler[index-1];
			}
			
	}
	std::cout << transcript << std::endl;
		
}
