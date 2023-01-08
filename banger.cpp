#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string s;
	ofstream FILE;
	int i;
	FILE.open("output.txt",ios::out);
	if (FILE.is_open()){
		FILE << "George Orwell's 1984?\nWhat about George Orwell's 1?";
		for (i=2;i<1984;i++){
			FILE << "And George Orwell's " << i << "\n"; 
		}
	}
	else {
		cout << "Error";
		return 0;
	}
	FILE.close();
	cout << "Banger Complete";
	return 0;
}
