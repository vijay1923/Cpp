#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int> v(5);  // Initializes a vector of size 5 with default values (0)
    cout << "Size before insertions: " << v.size() << endl;

    v.insert(v.begin(), 10);    // Insert 10 at the beginning
    v.insert(v.begin() + 2, 20); // Insert 20 at index 2
    v.insert(v.end(), 30);      // Insert 30 at the end
    v.insert(v.end() - 1, 40);  // Insert 40 before the last element

    // Iterate and print elements
    cout << "Vector contents are :\n";
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++) 
     cout << *i << " ";
   
    cout << endl;
    cout << "Size after insertions: " << v.size() << endl;
    cout << endl;
}

