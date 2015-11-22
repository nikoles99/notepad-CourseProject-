#include <iostream>
#include <string>
#include <fstream>
#include "FileEditor.h"
using namespace System;

FileEditor::FileEditor(){
}
void FileEditor::write(string text){}

string FileEditor::read(){
	ifstream ifs("D:\\MEL\\Проект2\\8.txt");
	ifs.unsetf(ios_base::skipws);
	string str( (istream_iterator<char>( ifs )), istream_iterator<char>() );
	return str;
}
