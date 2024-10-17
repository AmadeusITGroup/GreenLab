/* 
1/ Do not generate substrings. 
2/ Read from each character of the input.
3/ From each character, read left and right to assess a potential palindrome. Return size of palindrome.
4/ Even and odd palindrome sizes need to be handled. 
*/

#include <string>
#include <iostream>


using namespace std;

string findLongestPalindrome(string s) {
    string longestPalindrome= string(s);
    return longestPalindrome;
}


//##### DO NOT EDIT BELOW THIS LINE #####

int main(int argc, char* argv[]){
    cout << "RESPONSE: "+ findLongestPalindrome(argv[1]);
    return 0;
}
