//
// Created by Ben X on 8/2/22.
//
// hash example
#include <iostream>
#include <functional>
#include <string>
#include <bitset>

// functional header
// for hash<class template> class
#include <functional>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// To demonstrate String Hashing
void stringHashing()
{

    // Get the string
    // to get its hash value
    string hashing1 = "Geeks";

    // Instantiation of Object
    hash<string> mystdhash;

    // Using operator() to get hash value
    cout << "String hash values: "
         << mystdhash(hashing1)
         << endl;
}

// To demonstrate BITSET Hashing
void bitsetHashing()
{

    // Get the BITSET
    // to get its hash value
    bitset<5> h_bitset("10101");

    // Instantiation of Object
    hash<bitset<5> > hash_bitset;

    // Using operator() to get hash value
    cout << "\nBitset 10101 hash value: "
         << hash_bitset(h_bitset) << endl;
}

// To demonstrate Vector<bool> Hashing
void vectorHashing()
{

    // Get the Vector<bool>
    // to get its hash value
    vector<bool> h_vecbool{ true, false,
                       true, false };

    // Instantiation of Object
    hash<vector<bool> > hash_vector_bool;

    // Using operator() to get hash value
    cout << "\nVector<bool> hash value: "
         << hash_vector_bool(h_vecbool)
         << endl;
}

// To demonstrate Char Hashing
void charHashing()
{

    // Get the char
    // to get its hash value
    char ch = 'a';

    // Instantiation of Object
    hash<char> hash_char;

    // Using operator() to get hash value
    cout << "\nChar hash values: "
         << hash_char(ch)
         << endl;
}

// Driver Code



int main ()
{
    char nts1[] = "Test";
    char nts2[] = "Test";
    std::string str1 (nts1);
    std::string str2 (nts2);

    std::hash<char*> ptr_hash;
    std::hash<std::string> str_hash;

    std::cout << "same hashes:\n" << std::boolalpha;
    std::cout << "nts1 and nts2: " << (ptr_hash(nts1)==ptr_hash(nts2)) << '\n';
    std::cout << "str1 and str2: " << (str_hash(str1)==str_hash(str2)) << '\n';



    stringHashing();
    bitsetHashing();
    vectorHashing();
    charHashing();


    return 0;
}

/*
 * https://cplusplus.com/reference/functional/hash/
 *
 */