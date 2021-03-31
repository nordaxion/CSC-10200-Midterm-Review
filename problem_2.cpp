/* 
Write a function that takes a vector of integers
 V, returns void , and has the effect of reversing 
 the order of all the odd integers in V, while 
 keeping the even ones in-place. For example, if 
 V = [8,8,8,8,1,12,9,4,7,3,6,6,6,6], then after 
 calling your function on V, its new contents should 
 be V = [8,8,8,8,3,12,7,4,9,1,6,6,6,6].
*/

#include <vector>
#include <iostream>

using namespace std;

// Declaring necessary functions
void swap_odds(vector<int> &vect);
void print_vector(vector<int> &vect);

// Initializing test case vector
vector<int> V{8, 8, 8, 8, 1, 12, 9, 4, 7, 3, 6, 6, 6, 6};

int main()
{
    print_vector(V);
    cout << "Swapping..." << endl
         << endl;
    swap_odds(V);
    cout << "Here are the results!" << endl;
    print_vector(V);
}

void swap_odds(vector<int> &vect)
{
    // Kept track of the index at the front elements and back elements
    int front_index = 0, back_index = vect.size() - 1;

    // Loop through the vector and look for odds
    // Make sure that the indexes don't cross each other!
    while (front_index < back_index)
    {
        // Keep moving the front index forward until it finds an odd number
        while (vect[front_index] % 2 != 1 && front_index < back_index)
            front_index++;
        // Keep moving the back index backwards until it finds a
        while (vect[back_index] % 2 != 1 && front_index < back_index)
            back_index--;

        if (!(front_index <  back_index))
            break;

        // Swap the odds
        int temp = vect[front_index];
        vect[front_index] = vect[back_index];
        vect[back_index] = temp;

        // Increment the indexes to move onto the next pair of odd numbers
        front_index++;
        back_index--;
    }
}

// Function for printing out vectors
void print_vector(vector<int> &vect)
{
    int length = vect.size();

    for (int i = 0; i < length; i++)
    {
        if (i < length - 1)
            cout << vect[i] << ", ";
        else
            cout << vect[i] << endl;
    }
}