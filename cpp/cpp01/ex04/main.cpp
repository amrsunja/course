#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
		 	cerr << "Usage: ./runner <filename> <string_to_replace> <string_wich_replace>" << endl;
      return 1;
    }

    string filename = argv[1];
    string s1 = argv[2];
    string s2 = argv[3];

    ifstream input_file(filename);
    if (!input_file) {
			cout << "Error opening input file." << endl;
			return 1;
    }

    ofstream output_file(filename + ".replace");
    if (!output_file) {
        cout << "Error creating output file." << endl;
        return 1;
    }

    string line;
    size_t pos;

    while (getline(input_file, line)) {
        string new_line = "";
        while ((pos = line.find(s1)) != string::npos) {
            new_line += line.substr(0, pos) + s2;
            line = line.substr(pos + s1.length());
        }
        new_line += line;
        output_file << new_line << endl;
    }

    input_file.close();
    output_file.close();

    return 0;
}
