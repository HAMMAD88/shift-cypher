#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream file;
	char word;



	// opening file 
	file.open("plaintext.txt");

	// extracting words from the file 
	while (file >> word)
	{
		// displaying content
		if (file.peek() == '\n') {
			//cout << word;
			//cout << "\n";
			cout << "\nascii of next line:";
			cout << int(file.peek());
			cout << endl;
		}
		else if (file.peek() == ' ') {
			//cout << word;
			//cout << " ";
			cout << "ascii of space:";
			cout << int(file.peek());
		}
		else {
			//cout << word;
		}
	}
}