#include <iostream>

using namespace std;

int main()
{
    int option;
    char str[100];

    cout << "Enter a string to encrypt:\t";
    cin >> str;

    cout << "Please choose between the following options:\n";
    cout << "1 = Encrypt\n";
    cout << "2 = decrypt\n";

    cin >> option;

    switch (option)
    {
    case 1:
        // case for encrypting a string
        // '\0' is a null character and is treated to mark the end of the string
        for (int i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; // hard coded the key for encryption (3) and is added to the ASCII value
        cout << "\nEncrypted String: " << str << endl;
        break;

    case 2:
        // case for decrypting a string
        for (int i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; // hard coded the key for decryption (3) and is subtracted from the ASCII value
        cout << "\nDecrypted String: " << str << endl;
        break;
    default:
        cout << "Invalid string:" << endl;
        break;
    }

    return 0;
}