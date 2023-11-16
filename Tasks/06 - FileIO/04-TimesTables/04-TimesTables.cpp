#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	
	ofstream file;

	file.open("tables.txt");
	
	if (!file.is_open())
	{
		cerr << "No file could be created" << endl;
		return -1;
	}

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			file << r * c << "\t";
		}
		file << endl;
	}
	file << endl;


	file.close();

	return 0;
}