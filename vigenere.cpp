/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

viginere.cpp contains code for functions from viginere.h
 */
#include <iostream>
#include <string>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string text, std::string keyword){//allowed to assume keyword is all lowercase letters
  std::string cipher;

  int size = text.length();
  int shift;
  int index = 0;
  for(int i = 0; i < size; i++){
    shift = 65 - (int)keyword[index];
    if((int)text[i] < 65 || ((int)text[i] > 90 && (int)text[i] < 97) || (int)text[i] > 122){
      index--;
    }
    cipher += shiftChar(text[i],(int)keyword[index%keyword.size()]-97);
    index++;
  }
  return cipher;
}
