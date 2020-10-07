/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

decrypt.cpp contains code for functions from decrypt.h
*/
#include <iostream>
#include <string>
#include "decrypt.h"
#include "caesar.h"

std::string decryptCaesar(std::string cipher, int shift){
	std::string text;
	int size = cipher.size();
	for(int i = 0; i < size; i++){
		text += shiftChar(cipher[i], 26 - shift);
	}
	return text;
}
std::string decryptVigenere(std::string cipher, std::string keyword){
	std::string text;
	int size = cipher.size();
	int shift;
	int index = 0;
	for(int i = 0; i < size; i++){
		shift = (int)(keyword[index%keyword.size()]-97);
	    if((int)cipher[i] < 65 || ((int)cipher[i] > 90 && (int)cipher[i] < 97) || (int)cipher[i] > 122){
	      index--;
	    }
	    text += shiftChar(cipher[i], 26 - shift);
	    index++;
	}
	return text;
}
