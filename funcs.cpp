/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

funcs.cpp contains code for functions from funcs.h
 */

#include <iostream>
#include <string>
#include "funcs.h"

// add functions here
void test_ascii(std::string msg){

  int size = msg.size();

  for(int i = 0; i < size; i++){
    std::cout << msg[i]  << " " << (int) msg[i]  << "\n";
  }
  
}
