#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <queue>

using namespace std;
ifstream fin("phrase.in");

int token(string rez[100], const string& linie) {
    int index = 0;
    for (int i = 0; i < linie.size(); i++)
    {
        string word;
        while (i < linie.size() && linie[i] != ' ' && linie[i] != '!' && linie[i] != '?' && linie[i] != '.' && linie[i] != ',')
        {
            if (linie[i] >= 'A' && linie[i] <= 'Z')
            {
                word += linie[i] + 32;
            } else {
                word += linie[i];
            }
            i++;
        }
        if (!word.empty()) {
            rez[++index] = word;
        }
    }
    return index;
}


struct WordComparator {
    bool operator()(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) const {
        if (a.second == b.second) {
            return a.first > b.first; // Sort lexicographically
        }
        return a.second < b.second; // Sort by frequency
    }
};

int main() {
    string linie;
    string rez[100];

    if (!getline(fin, linie)) {
        std::cout << "Eroare la citirea din fisier!";
        return 0;
    }
    int index = token(rez, linie);

    map<string, int> m;

    for (int i = 1; i <= index; i++)
    {
        if (rez[i] != "")
            m[rez[i]]++;
    }

    priority_queue<pair<string, int>, vector<pair<string, int>>, WordComparator> sortedWords;
    for (const auto& pair : m) {
        sortedWords.emplace(pair.first, pair.second);
    }

    std::cout << "Elementele din map nesortate (dupa frecventa):" << std::endl;
    while (!sortedWords.empty())
    {
        const auto& wordCount = sortedWords.top();
        cout << wordCount.first << " => " << wordCount.second << endl;
        sortedWords.pop();
    }

    return 0;
}
