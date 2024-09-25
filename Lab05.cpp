

#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{   
    cout << "Input Text to cypher : ";
    int i;
    std::string text;
    getline(cin, text);
    cout << endl << "Encoded Message: ";
    vector<char> cypher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    for (i = 0; i < text.length(); i++) {
        if (text[i] >= 65 && text[i] <= 90) {

            cout << cypher[text[i] - 65];
        }
        else if (text[i] >= 97 && text[i] <= 122) {
            char character;
            character = text[i] - 32;
            character = cypher[character - 65];
            character = character + 32;
            cout << character;
        }
        else
            cout << text[i];
        
       

    }
}

