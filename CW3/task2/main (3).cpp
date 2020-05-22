#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector <string> readFile(string fileName);

int main() {
    vector <string> programming = readFile("../task2/in1.txt");
    vector <string> history = readFile("../task2/in2.txt");
    vector <string> algebra = readFile("../task2/in3.txt");

    //programming - спільний вектор
    for (size_t i = 0; i < history.size(); i++)
    {
        programming.push_back(history[i]);
    }

    for (size_t i = 0; i < history.size(); i++)
    {
        programming.push_back(history[i]);
    }

    ofstream myFile("out.txt");
    for (size_t i = 0; i < programming.size(); i++)
    {
        int occur = count(programming.begin(), programming.end(), programming[i]);
        if (occur > 1)
        {
            myFile << programming[i];
        }
    }
    myFile.close();
    return 0;
}

vector <string> readFile(string fileName)
{
    vector <string> result;
    string line;
    ifstream myFile(fileName);
    while (getline(myFile, line)) {
        result.push_back(line);
    }
    return result;
}