#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void encode_character(char ch, ofstream& outStream) {
    switch(ch) {
        case 't': case 'T':
            outStream << "1Y";
            break;
        case 'h': case 'H':
            outStream << "1O";
            break;
        case 'j': case 'J':
            outStream << "1X";
            break;
        case 'd': case 'D':
            outStream << "1B";
            break;
        case 'a': case 'A':
            outStream << "1S";
            break;
        case 'p': case 'P':
            outStream << "1M";
            break;
        case 'I':
            outStream << "1Q";
            break;
        default:
            outStream << ch;
            break;
    }
}

int main() {
    ifstream inStream("/Users/okuhlemadondo/repos/Cpp_Course_Work/COS1512/Assignment_2/letter.txt");
    if (inStream.fail()) {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    
    ofstream outStream("encode.txt");
    if (outStream.fail()) {
        cout << "Output file opening failed.\n";
        exit(1);
    }

    char ch;
    while (inStream.get(ch)) {
        encode_character(ch, outStream);
    }

    inStream.close();
    outStream.close();

    return 0;
}
