#include <iostream>
using namespace std;

class FileEditor{
public:
	string path;
public:
	FileEditor();
	void write(string text);
	string read();
};