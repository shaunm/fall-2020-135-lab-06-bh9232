/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

caesar.h contains headers for functions to be used in caesar.cpp
 */
#pragma once
#include <string>

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
