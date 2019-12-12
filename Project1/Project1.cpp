//encryption code
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream file;
	char word;
	string a = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z' ,'a' ,'b' ,'c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' ,' ',',','\n' ,'.' };
	int k;
	cout << "\nenter the shift:";
	cin >> k;
	// opening file 
	file.open("plaintext.txt");
	ofstream myfile("output.txt");
	myfile << k;
	myfile << "\n";
	// extracting words from the file
	int i=0;
	while (file .get(word))
	{
		for (int i = 0; i<a.length(); i++) {
			if (a[i] == word) {
				/*if (i==62) {
					//cout << a[i];
					////i = (i + k) % 65;
					//cout << " ";
			
				}
				else if (i == 64)
				{
					//cout << a[i];
					//cout << "\n";
		
				}*/
				//else {
					//myfile << a[i];
					i = (i + k) % 66;
					myfile << a[i];
				//}
				break;
			}
			}
	
			//i = (i + k)%65;
			//if (i >= 65) {
				//i = i - 65;
			//}
			//cout <<a[i];
	}
	file.close();
	myfile.close();
	
	
}