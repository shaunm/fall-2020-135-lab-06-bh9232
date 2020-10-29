/*
Auhtor: Brian Hong
Course: CSCI 135
Instructor: Mike Zamansky
Assignment: Lab 06

test.cpp contains test cases
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"
#include <string>

// add your tests here

//Caesar Encryption
TEST_CASE("one word/character"){
	CHECK(shiftChar('h', 5) == 'm');
	CHECK(encryptCaesar("Hello", 10) == "Rovvy");
	CHECK(encryptCaesar("z", 3) == "c");
	CHECK(encryptCaesar("x", 3) == "a");
}

TEST_CASE("multiple words"){
	CHECK(encryptCaesar("Hello World", 10) == "Rovvy Gybvn");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");

}

TEST_CASE("words with symbols"){
	CHECK(encryptCaesar("HaPpY bIrThDaY!!", 5) == "MfUuD gNwYmIfD!!");
}

//Vigenere Encryption
TEST_CASE("One word/character"){
	CHECK(encryptVigenere("Hello", "cake") == "Jevpq");
	CHECK(encryptVigenere("H", "cake") == "J");
}

TEST_CASE("multiple words"){
	CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
	CHECK(encryptVigenere("Sublime-Text", "emacs") == "Wgbnaqq-Tgpx");
}

//decryption
TEST_CASE("Caesar"){
	CHECK(decryptCaesar("Rovvy Gybvn!", 10) == "Hello World!");
	CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");

}

TEST_CASE("Vigenere"){
	CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
	CHECK(decryptVigenere("Wgbnaqq-Tgpx", "emacs") == "Sublime-Text");
}

//decode
TEST_CASE("Decode"){
	CHECK(decode("N qnpj yt uqfd anijtlfrjx") == "I like to play videogames");
		CHECK(decode("S vsuo dy rkfo pex gsdr pbsoxnc") == "I like to have fun with friends");
}