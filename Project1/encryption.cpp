//encryption code
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream file;
	char word;

	int k;
	cout << "\nenter the shift:";
	cin >> k;
	// opening file 
	file.open("plaintext.txt");
	ofstream myfile("output.txt");
	// extracting words from the file
	myfile<<k;
	myfile<<"\n"; 
	while (file >> word)
	{
		 
//		if (file.peek() == '\n') {
//			int x = 0;
//			x = int(file.peek());
//			if (x == 127) {
//				x = 0;
//			}
//			//cout << word;
//			//cout << "\n";
//			x = (x + k)%127;
//			myfile << char(10);
//		
//		}
//		else if (file.peek() == ' ') {
//			//cout << word;
//			//cout << " ";
//			int x = 0;
//			x = int(file.peek());
//			if (x == 127) {
//				x = 0;
//			}
//			//cout << word;
//			//cout << "\n";
//			x = (x + k) % 127;
//			myfile << char(32);
//		}
//		else {
			//cout << word;
			int x = 0;
			x = int(word);
			if (x==127) {
				x = 0;
			}
			
	
			//cout << word;
			//cout << "\n";
			x = (x + k) % 127;
			
			if(x>=127){
				x=x-127;
				x = (x + k) % 127;
			}
			myfile << char(x);
		//}
	}
	file.close();
	myfile.close();
	
}
