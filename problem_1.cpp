/*
Write a function that takes a string parameter, and returns a 
Boolean value indicating whether or not all vowels (a,e,i,o,u) 
are present somewhere in the string. For example, if the input 
is "hello world", the return value should be false, and on input 
" programming is super fun!" the answer should be true.
*/

#include <iostream>
#include <string.h>
using namespace std;

// Declaring functions
bool vowels_available(string param);

int main()
{
    string test_case_1 = "Hello world.";
    string test_case_2 = "Programming is super fun!";

    cout << "Results for test case 1 is " << (vowels_available(test_case_1) == 0 ? "false" : "true")  << endl;
    cout << "Results for test case 2 is " << (vowels_available(test_case_2) == 0 ? "false" : "true") << endl;
}

bool vowels_available(string param)
{
    // Have 5 variables set to false to show that we haven't encountered any vowels yet
    bool a_avail = false, e_avail = false, i_avail = false,
         o_avail = false, u_avail = false;
    
    // Loop through the string
    for (int i = 0; i < param.length(); i++)
    {
        // Use a switch-case expression instead of having a lot of if-else statements
        switch(tolower(param[i])) // Evaluate an expression
        {
            case 'a':
                a_avail = true;
                break;
            case 'e':
                e_avail = true;
                break;
            case 'i':
                i_avail = true;
                break;
            case 'o':
                o_avail = true;
                break;
            case 'u':
                u_avail = true;
                break;
        }
    }

    // All vowels must be set to true for the function to return true
    return a_avail && e_avail && i_avail && o_avail && u_avail;
}