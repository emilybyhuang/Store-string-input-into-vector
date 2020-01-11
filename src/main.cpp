#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string command, line, token;
	int index1 = 0, index2 = 0;
	int ognum = 0, finum = 0;
	getline(cin, line);
	while(!cin.eof()){
		stringstream linestream(line);
		linestream >> command;
		if(command == "Command: "){
			linestream >> ognum;
			while(!cin.eof()){

			}	
		}else if(command == "Desired: "){
			linestream >> finum;
			while(!cin.eof()){

			}	
		}
	}
}