#include <iostream>

//Author : Aakanksha Raika.
std::string getCustomString();
int countChars(std::string, char);
int countCharsCustom(char);


std::string getCustomString(){
	return "Aakanksha Raika is learning c++";
}


int countChars(std::string words, char character){
	int count = 0; 
	for (int i = 0; i < words.length(); i++) {
		if (words.at(i) == character) {
			count = count + 1;
		}
	}
	return count; 
}


int countCharsCustom(char character){
	return countChars(getCustomString(), character);
}
