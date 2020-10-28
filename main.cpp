#include <iostream>
#include <string>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "decode.h"


int main()
{
  test_ascii("Hello");
  std::cout << "\n";
  test_ascii("Rawr");

  decode(encryptCaesar("Hello", 10));
  return 0;
}
