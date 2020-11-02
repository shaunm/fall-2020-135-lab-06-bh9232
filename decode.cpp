#include <iostream>
#include <string>
#include <cmath>
#include "decode.h"
#include "caesar.h"

std::string decode(std::string cipher){

	double freq[] = {.082,.015,.028,.043,.13,.022,.02,.061,.07,.0015,.0077,.04,.024,.067,.075,.019,.00095,.06,.063,.091,.028,.0098,.024,.0015,.02,.00074};
	double app[26];//letter apperance in cipher
	std::string word;
	std::string result[26];
	double distance[26];
	double sum = 0, min;
	int count, index;

	for(int r = 0; r < 26; r++){
		word = encryptCaesar(cipher,r);
		result[r] = word;

		for(int l = 0; l < 26; l++){
	    	count = countChar(word, (char)97+l);
	    	app[l] = (count * 1.0)/cipher.length();
	   	}

	   	for(int i = 0; i < 26; i++){
	   		sum += pow(freq[i] - app[i],2);
	   	}

    	distance[r] = sqrt(sum);
    	sum = 0;
    	word = "";
	}	

	min = distance[0];
	index = 0;

	for(int i = 1; i < 26; i++){
		if(distance[i] < min){
			min = distance[i];
			index = i;
		}
	}

	return result[index];
}

int countChar(std::string cipher,char ch){

  int count = 0;
  for(int i = 0; i < cipher.length(); i++)
  {
    if(cipher[i] == ch || cipher[i] == ch-32)
      count++;
  }
  return count;

}