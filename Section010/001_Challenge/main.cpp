#include <iostream>
#include <string>
using namespace std;

int main(){
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string message {}, encrypted_message {}, decrypted_message {};
	size_t position {0};
	
	cout << "Enter your secret message: ";
	getline(cin, message);
	
	cout << "\n\nEncrypting message...";
	encrypted_message = message;
	//encrypt message
	for(size_t i {0}; i < encrypted_message.length(); i++){
		position = alphabet.find(encrypted_message.at(i));
		if(position != string::npos)
			encrypted_message.at(i) = key.at(position);
	}
	cout << "\n\nEncrypted message: " << encrypted_message;
	
	cout << "\n\nDecrypting message...";
	decrypted_message = message;
	//decrypt message
	for(size_t i {0}; i < decrypted_message.length(); i++){
		position = alphabet.find(decrypted_message.at(i));
		if(position != string::npos)
			decrypted_message.at(i) = alphabet.at(position);
	}
	cout << "\n\nDecrypted message: " << decrypted_message << endl;
	
	return 0;
}
