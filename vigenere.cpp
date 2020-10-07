/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

viginere.cpp contains code for functions from viginere.h
 */
#include <iostream>
#include <cctype>
#include <string>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string text, std::string keyword){//allowed to assume keyword is all lowercase letters
  std::string cipher;

  int size = text.size();
  int shift;
  int index = 0;
  for(int i = 0; i < size; i++){
    shift = (int) (keyword[index%keyword.size()]-97);
    if(!isalpha(text[i])){
      index--;
    }
    cipher += shiftChar(text[i],shift);
    index++;
  }
  return cipher;
}
