/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 06

decrypt.h contains heads for functions to be used in decrypt.cpp
*/

#pragma once
#include <string>

std::string decryptCaesar(std::string, int);
std::string decryptVigenere(std::string, std::string);
