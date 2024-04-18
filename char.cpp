#include <iostream>
	
	void revers(char word[]){
	int length = 0;
	while(word[length] != '\0'){
	++length;
}
	for(int i  = 0; i < length / 2; ++i){
	word[i] ^= word[length - 1 - i];
	word[length  - 1 - i ] ^= word[i];
	word[i] ^= word[length - 1 - i ];
	
	
	}
}
int main(){
	
	char word[100];

	std::cout << "Enter word: ";
	std::cin >> word;
	std::cout << std::endl;

	revers(word);
	
	std::cout << "Reversed word is: " << word << std::endl ;
	return 0;
}
