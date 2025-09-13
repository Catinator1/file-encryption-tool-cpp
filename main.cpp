#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void xorInPlace(const string &fileName, char key) {
    // Read in to memory
    ifstream inFile(fileName, ios::in | ios::binary);
    if (!inFile.is_open()) {
        cerr << "File could not be opened!" << endl;
    }

    vector<char> buffer((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
    inFile.close();

    // apply XOR encyption
    for (char &c : buffer) {
        c = c ^ key;
    }

    // Writing over the same file
    ofstream outFile(fileName, ios::out | ios::binary | ios::trunc);
    if (!outFile.is_open()) {
        cerr << "File could not open(for write)!" << endl;
    }

    outFile.write(buffer.data(), buffer.size());
    outFile.close();
}

int main() {
    string fileName;
    char key;

    cout << "Enter the file name to encrypt/decrypt(Please enter the file with the location): ";
    getline(cin, fileName);
    cout << "Enter a key (must be a char): ";
    cin>>key;

    xorInPlace(fileName, key);

    cout << "Process completed! " << endl;
    return 0;
}
