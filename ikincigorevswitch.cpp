#include <iostream>
#include <vector>
#include <string>
//C++ varsay�lan ayarda T�rk�e karakter yazd�rm�yor. Destekleyen standart k�t�phaneyi eklememiz gerekiyor.

#include <locale.h> // veya C++ i�in <clocale>

int main(){
	setlocale(LC_ALL, "Turkish");

	std::vector<std::string> onlar = {"on","yirmi","otuz","k�rk","elli","altm��","yetmi�","seksen","doksan"};
	std::vector<std::string> birler = {"bir","iki","��","d�rt","be�","alt�","yedi","sekiz","dokuz"};

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
			transcript += "y�z";
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
