#include <iostream>
using namespace std;

int main()
{
    char Input_Alphabet;
    int Is_a_lower_case_vowel,Is_a_upper_case_vowel;

    cout << "Enter an alphabet: ";
    cin >> Input_Alphabet;

    // evaluates to 1 (true) if c is a lowercase vowel
    Is_a_lower_case_vowel = (Input_Alphabet == 'a' || Input_Alphabet == 'e' || Input_Alphabet == 'i' || Input_Alphabet == 'o' || Input_Alphabet == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    Is_a_upper_case_vowel = (Input_Alphabet == 'A' || Input_Alphabet == 'E' || Input_Alphabet == 'I' || Input_Alphabet == 'O' || Input_Alphabet == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        cout << Input_Alphabet << " is a vowel.";
    else
        cout << Input_Alphabet << " is a consonant.";

    return 0;
}
