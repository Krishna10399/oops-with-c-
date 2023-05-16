#include <iostream>

/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream>

using namespace std;


int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;
	fout.open("demo.txt");
	while (fout) {
	    // Read a Line from standard input
		getline(cin, line);
        // Press -1 to exit
		if (line == "-1")
			break;
     	// Write line in file
		fout << line << endl;
	}
	// Close the File
	fout.close();
	// Creation of ifstream class object to read the file
	ifstream fin;
	// by default open mode = ios::in mode
	fin.open("demo.txt");

	// Execute a loop until EOF (End of File)
	while (getline(fin, line)) {
	
		// Print line (read from file) in Console
		cout << line << endl;
	}
    // Close the file
	fin.close();

	return 0;
}
