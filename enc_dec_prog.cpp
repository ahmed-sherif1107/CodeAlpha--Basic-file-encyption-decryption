#include <iostream>
#include <fstream>
#include <string>

using namespace std;



// create a Function to encrypt a character using Caesar cipher
char encryptChar(char ch, int shift) {
    if (isalpha(ch)) {                                 // isalpha() function is to check if the given character is alphabet or not
        char base = islower(ch) ? 'a' : 'A';           // islower () function checks if the given character is a lowercase character or not.
        return ((ch - base + shift) % 26) + base;      // this expression calculates the new character value after applying the Caesar cipher encryption with the specified shift.
    }
    return ch;
}




// create a Function to decrypt a character using Caesar cipher
char decryptChar(char ch, int shift) {
    if (isalpha(ch)) {
        char base = islower(ch) ? 'a' : 'A';
        return ((ch - base - shift + 26) % 26) + base; //this expression calculates the original character value before applying the Caesar cipher encryption with the specified shift.
    }
    return ch;
}





//  create a Function to encrypt a file using Caesar cipher
void encryptFile(const string& inputFile, const string& outputFile, int shift) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cerr << "Error: Unable to open input file." << endl;        // this will print "Error: Unable to open input file." in the error window
        return;
    }
    if (!outFile) {
        cerr << "Error: Unable to open output file." << endl;       // this will print "Error: Unable to open output file." in the error window
        return;
    }

    char ch;
    while (inFile.get(ch)) {                       // The get () function reads a single character from the associated stream and puts that value in ch ,his value will be null if the end of the file is reached
        outFile.put(encryptChar(ch, shift));       //The put () function writes the encrypted code to the stream and returns a reference to the output file.
    }

    inFile.close();
    outFile.close();

    cout << "Encryption completed." << endl;
}





// Function to decrypt a file using Caesar cipher
void decryptFile(const string& inputFile, const string& outputFile, int shift) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cerr << "Error: Unable to open input file." << endl;   // this will print "Error: Unable to open input file." in the error window
        return;
    }
    if (!outFile) {
        cerr << "Error: Unable to open output file." << endl;  // this will print "Error: Unable to open output file." in the error window
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(decryptChar(ch, shift));
    }

    inFile.close();
    outFile.close();

    cout << "Decryption completed." << endl;
}


int main()
{
    while(1){
        string enc_inputFile; //  your input file name
        string dec_inputFile; //  your encrypted file name
        int shift = 3; // Change this to your desired shift value
        int operation_type;
        cout<<"do you to want to encrypt or decrypt ?? \n";
        cout<<"to encrypt - 1\n" << " to decrypt - 0 \n";
        cin>>operation_type;


        if (operation_type == 1){
            cout<<"enter the name of the file to be encrypted !! \n ";
            cin >>enc_inputFile;
            string enc_outputFile = "encrypted_test_file.txt"; // Change this to your output file name
            encryptFile(enc_inputFile, enc_outputFile, shift);
        }else if(operation_type == 0){
            cout<<"enter the name of the file to be decrypted !! \n";
            cin >>dec_inputFile;
            string dec_outputFile = "decrypted_test_file.txt"; // Change this to your decrypted file name
            decryptFile(dec_inputFile, dec_outputFile, shift);
        }

    }
    return 0;
}
