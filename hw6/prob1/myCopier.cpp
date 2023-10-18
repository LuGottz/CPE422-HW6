// This C++ program is given two text files when invoked. The contents of the first file are output line-by-line, and then the contents are copied to the second file.
// Syntax: Program_name First_file.txt Second_file.txt
// Example Usage: ./myCopier file1.txt file2.txt

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"

int main() {
    fstream f1;
    fstream f2;
    string ch;

    // Opens files for read/write operation
    f1.open("file1.txt", ios::in);
    f2.open("file2.txt", ios::out);

    while (!f1.eof()) {
	// Reads contents of line from first file
        getline(f1, ch);
	// Outputs contents of the read line
	cout << ch << endl;
	// Copies contents of line to second file
        f2 << ch << endl;
    }

    // Closes both files
    f1.close();
    f2.close();
}
