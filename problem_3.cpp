/*
Write a function that takes 2 vectors of sorted integers, 
and merges them into a third sorted vector which you can 
assume is initially empty. The prototype should look like this:
Void merge(const vector<int>& V1, const vector<int>& V2, 
vector<int>& result);
As an example, if the first two vectors contain [2,4,5,9] 
and [1,3,7,8,12,15,20] respectively, then the result vector 
should contain [1 2 3 4 5 7 8 9 12 15 20]. Note: do not use 
a sort function. You’ll not receive any credit for doing the 
problem this way.
*/

#include <iostream>
#include <vector>

using namespace std;

// Initialize the vectors used
vector<int> first{2, 4, 5, 9};
vector<int> second{1, 3, 7, 8, 12, 15, 20};
vector<int> result;

// Declaring Functions 
void merge(const vector<int> &V1, const vector<int> &V2, vector<int> &result);
void print_vector(vector<int> &vect);

int main()
{
    cout << "First vector: ";
    print_vector(first);
    cout << "Second vector: ";
    print_vector(second);
    merge(first, second, result);
    cout << "Result after merge: ";
    print_vector(result);
}

void merge(const vector<int> &V1, const vector<int> &V2, vector<int> &result)
{
    // Get the length for each of the vectors before merging
    int v1_length = V1.size();
    int v2_length = V2.size();

    // Have indexes that keep track of certain elements
    int v1_index = 0, v2_index = 0;

    // Loop through both vectors until one is exhausted
    while (v1_index < v1_length && v2_index < v2_length)
    {
        // Check if the element at V1 is larger than V2
        if (V1[v1_index] < V2[v2_index])
        {
            // Inserts the element at V1 to the result and increment the V1 index
            result.push_back(V1[v1_index]);
            v1_index++;
        }
        else
        {
            // Inserts the element at V2 to the result and increment the V2 index
            result.push_back(V2[v2_index]);
            v2_index++;
        }
    }

    // The next part just adds the remaining elements to the results if
    // they were not inserted in the previous while loop
    while (v1_index < v1_length)
    {
        result.push_back(V1[v1_index]);
        v1_index++;
    }

    while (v2_index < v2_length)
    {
        result.push_back(V2[v2_index]);
        v2_index++;
    }
}

// Function for printing a vector
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