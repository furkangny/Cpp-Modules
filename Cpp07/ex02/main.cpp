/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:03:42 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/24 23:03:43 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void) {
    // Array<int> oluşturuluyor
	Array<int> arrayInt(3);
	Array<int> arrayIntEmpty;
	Array<int> arrayIntEmpty2;
	Array<std::string> arrayString(4);

	// arrayInt elemanlarına değer atama
	arrayInt[0] = 32;
	arrayInt[1] = 33;
	arrayInt[2] = 34;

	// arrayString elemanlarına değer atama
	arrayString[0] = "Furkan";
	arrayString[1] = "Gunay";
	arrayString[2] = "Hello";
	arrayString[3] = "42";

	// Boş arrayIntEmpty dizisine, arrayInt'deki elemanları atıyoruz
	arrayIntEmpty = arrayInt;

	// arrayIntEmpty dizisini yazdır
	std::cout << "Kopyalanmış arrayIntEmpty: " << std::endl;
	for (unsigned int i = 0; i < arrayIntEmpty.size(); i++) {
		std::cout << i << ".index: " << arrayIntEmpty[i] << std::endl;
	}

	// arrayString dizisini yazdır
	std::cout << "\nString arrayString dizisi: " << std::endl;
	for (unsigned int i = 0; i < arrayString.size(); i++) {
		std::cout << i << ".index: " << arrayString[i] << std::endl;
	}

	// Try-catch bloğunda sınır aşımı denemeleri
	try {
		arrayInt[2] = 41;  // Geçerli bir indeks, başarılı olur
		std::cout << "\n41 başarıyla eklendi!\n" << std::endl;

		// Bu işlem sınır aşımına neden olacak
		arrayInt[3] = 42;
		std::cout << "42 başarıyla eklendi!" << std::endl;

	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;  // Sınır aşımında hata mesajı yazdırılır
	}

    // Alternatif bir sınır aşımı testi daha
    try {
        arrayIntEmpty2[0] = 50;  // Boş diziye eleman eklemeye çalışmak
    } catch(const std::exception& e) {
        std::cerr << "Boş diziye ekleme hatası: " << e.what() << std::endl;
    }

    return 0;
}
