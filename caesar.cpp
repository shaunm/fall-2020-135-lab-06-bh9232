/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

caesar.cpp contains code for functions from caesar
 */
#include <iostream>
#include <string>
#include "caesar.h"

char shiftChar(char c, int rshift){
  c += rshift;
  return c;
}

std::string encryptCaesar(std::string plaintext, int rshift){

  int size = plaintext.length();
  
  for(int i = 0; i < size; i++){
    plaintext[i] += rshift;
  }

  return plaintext;
}
