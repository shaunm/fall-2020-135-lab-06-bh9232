/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 06

caesar.cpp contains code for functions from caesar.h
*/
#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"

char shiftChar(char c, int shift){ //helper method

  if(isalpha(c)){//if alphabet ASCII

    //if upper case letters
    if(isupper(c)){
      c = ((int)c + 26 + shift - 65) % 26 + 65; 
    } 

    //if lower case letters
    else if (islower(c)){
      c = ((int)c + 26 + shift - 97) % 26 + 97;  
    }
  }
  
  return c;
}

std::string encryptCaesar(std::string plaintext, int shift){

  std::string ciphertext;
  int size = plaintext.length();
  
  for(int i = 0; i < size; i++){
    ciphertext += shiftChar(plaintext[i], shift);
  }
  return ciphertext;
}
