/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 06

viginere.h contains heads for functions to be used in viginere.cpp
*/

#pragma once
#include <string>

char shiftChar(char,int);
std::string encryptVigenere(std::string text, std::string keyword);
