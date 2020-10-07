/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

viginere.cpp contains code for functions from viginere.h
 */
#include <iostream>
#include <string>
#include "viginere.h"

char shiftChar(char c, int rshift){ //helper method

  int displacement;//needed if c is close to 'A' or 'z'
  if(((int) c >= 65 && c <= 90) || ((int) c >= 97 && c <= 122)){//if alphabet ASCII
    //if UpperCase letters
    if(((int) c >= 65 && c <= 90) && (int) c + rshift > 90){
      displacement = 90-c;      
      c = 64 - displacement;
      
    //if LowerCase letters
    }else if (((int) c >= 97 && c <= 122) && (int) c + rshift > 122){
      displacement = 122-c;    
      c = 96 - displacement;
    }
    
    c +=  rshift;// shifts the character
  }
  
  return c;
}

std::string encryptViginere(std::string text, std::string keyword){//allowed to assume keyword is all lowercase letters
  std::string cipher;

  int size = text.length();
  int shift;
  for(int i = 0; i < size; i++){
    shift = 65 - keyword[i];
    cipher[i] = shiftChar(text[i],shift);
  }
  return cipher;
}
