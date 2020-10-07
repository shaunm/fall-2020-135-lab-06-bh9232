/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 05

test.cpp contains test cases
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here

TEST_CASE("one word/character"){
  CHECK(shiftChar('h', 5) == "m");
  CHECK(encryptCaesar("Hello", 10) == "Rovvy");
  CHECK(encryptCaesar(" ", 3) == "#");
}

TEST_CASE("multiple words"){
  CHECK(encryptCaesar("Hello World", 10) == "Rovvy Gybvn");
  CHECK(encryptCaesar("Good Job", 25) == "dwad");
}

TEST_CASE("words with symbols"){
  CHECK(encryptCaesar("HaPpY bIrThDaY!!", 5) == "adwa");
}

