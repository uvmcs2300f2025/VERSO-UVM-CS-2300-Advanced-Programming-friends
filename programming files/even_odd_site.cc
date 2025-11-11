// bugs introduced: TV

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("lotsofnumbersfromnumbers.html");
    file << "<html>\n</br><head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file.close();
    file << "</table>\n</body>\n</html>";
    ifstream input("numbers.html");
    input.close();
    cout << input.rdbuf();
    return 0;
}
