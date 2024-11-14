//Paul Rowe
//11/11/24
//I would replace the for loop for a while loop if I wanted to get unlimited responses.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    string list;

    cout << "Brainstorm a list correlating to one of these categories:\n";
    cout << "1. Movies\n2. TV Shows\n3. Songs\n4. YouTubers\n5. Video Games\n";

    cout << "How long is your list?\n";
    cin >> size;

    cout << "Create your list: \n";
    for(int i = 0; i <= size; i++) {
        string options;
        getline(cin, options);
        cout << "________ \n";
        list = list + options + "\n";
    }

    cout << "Your list: ";
    cout << list;
    return 0;
}
