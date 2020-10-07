/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

caesar.cpp contains code for functions from caesar.h
*/
#include <iostream>
#include <string>
#include "caesar.h"

char shiftChar(char c, int rshift){ //helper method

  if(((int) c >= 65 && c <= 90) || ((int) c >= 97 && c <= 122)){//if alphabet ASCII

    //if UpperCase letters
    if((int) c >= 65 && (int)c <= 90){
      c = ((int)c + rshift - 65) % 26 + 65; 
    } 

    //if LowerCase letters
    else if ((int) c >= 97 && (int)c <= 122){
      c = ((int)c + rshift - 97) % 26 + 97;  
    }
  }
  
  return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){

  std::string ciphertext;
  int size = plaintext.length();
  
  for(int i = 0; i < size; i++){
    ciphertext += shiftChar(plaintext[i], rshift);
  }
  return ciphertext;
}
