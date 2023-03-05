#include <iostream>
#include <cstdlib> // needed for the system() function

using namespace std;

int main() {
    string query;

    // Prompt the user to enter their search query
    cout << "Enter your search query: ";
    getline(cin, query);

    // Use youtube-dl to search for videos on YouTube
    string command = "youtube-dl \"ytsearch:" + query + "\"";
    system(command.c_str());

    return 0;
}
