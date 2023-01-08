#include <iostream>
#include <fstream>

int main(){
	std::ofstream FILE;
	int i;
	FILE.open("output.txt",std::ios::out);
	if (FILE.is_open()){
		FILE << "George Orwell's 1984?\nWhat about George Orwell's 1?";
		for (i=2;i<1984;i++){
			FILE << "And George Orwell's " << i << "\n"; 
		}
	}
	else {
		std::cout << "Error";
		return 0;
	}
	FILE.close();
	std::cout << "Banger Complete (check output.txt)";
	return 0;
}
