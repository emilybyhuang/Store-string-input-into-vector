#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	string command, line, nextInput, bookauthor;
	vector<string> original;
	vector<string> desired;
	int index1 = 0, index2 = 0, ogcount = 0, ficount = 0;
	int ognum, finum;
	fstream file(argv[1]);
		//file.open("/Users/emilyhuang/Documents/projects/utek/src/input.txt");
		// if (!file) {
		// 	cerr << "Unable to open file listSites.txt" << endl;
		// 	exit(1); 
		// }else{cd
		// 	//cout << "open" << endl;
		// }
	if (!file.is_open()) cout<< "Could not open file\n";
	while(!file.eof()){
		file >> ws;
		file >> command;
		cout << "command: " << command << endl;
			if(command == "Original:"){
				//while(nextInput != "Desired"){
				file >> ws;
				file >> ognum;
				cout << "ognum: " << ognum << endl;
				while(!file.eof()){
					file >> ws;
					//file >> bookauthor; for part2
					getline(file, bookauthor);
					cout << "inserting bookauthor: " << bookauthor << endl;
					original.push_back(bookauthor);		
					ogcount++;
					if(ogcount == ognum)break;				
				}
			}else if(command == "Desired:"){
				//while(nextInput != "Desired"){
				file >> ws;
				file >> finum;
				cout << "finum: " << finum << endl;
				while(!file.eof()){
					file >> ws;
					//file >> bookauthor; for part2
					getline(file, bookauthor);
					cout << "inserting bookauthor: " << bookauthor << endl;
					original.push_back(bookauthor);		
					ficount++;
					if(ficount == finum)break;				
				}
			}
	}	
}