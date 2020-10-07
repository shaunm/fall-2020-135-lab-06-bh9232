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

std::string encryptCaesar(std::string plaintext, int rshift){

  std::string ciphertext;
  int size = plaintext.length();
  
  for(int i = 0; i < size; i++){
    ciphertext += shiftChar(plaintext[i], rshift);
  }
  return ciphertext;
}
