//encryption code
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	fstream file;
	char word;
	char a[66] = {'0','1','2','3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9' ,'A' ,'B' ,'C' ,'D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z' ,'a' ,'b' ,'c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' ,' ' ,',' ,'\n' ,'.' };
	int k;
	//cout << "\nenter the shift:";
	//cin >> k;
	// opening file 
	file.open("output.txt");
	ofstream myfile("doutput.txt");
	// extracting words from the file
	file>>k;
	int i=0;
	bool first=true;
	while (file .get(word))
	{
		if(first)
		{
			first=false;
			continue;
		}
		
		file>>std::noskipws;
		for (int i = 0; i<66; i++) {
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
					
					int x;
					x=(i-k);
					if(x<0)
					x+=66;
					
					x=x%66;
					myfile<<a[x];
				break;					
					}
					
				
					//}
						
			
				}
			
			
			}
	file.close();
	myfile.close();
	
	}

	

