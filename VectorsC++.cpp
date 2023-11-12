// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printIntVector(vector<int> v, string caption);

void addingVector(vector<int>& v, int addingItems);

int returnIndice(vector<int> v, int key);

void experiement01();
void experiement02();

int main()
{

    //experiement01();

    experiement02();


}
    
void experiement02()
{
    vector<int> v{ 22, 11, 33, 44 };

    vector<int> v1{ 22, 44, 55, 11 };

    vector<int> v2{};

    for (int i = 0; i < v.size(); i++)
    {
        int key = v[i];
        int pos = returnIndice(v1, key);
        int pos2 = returnIndice(v2, key);
        if (pos >= 0 && pos2 == -1)
        {
            v2.push_back(key);
        }
    }
    /*printIntVector(v, "this is v2");

    printIntVector(v1, "this is v3");*/

    printIntVector(v2, "this is v4 (common)");
;}
/*

void experiement01()
    {
    vector<int> v1{ 11, 22, 33, 44, 55 };

    int addingItems = 1;

    printIntVector(v1, "before modify");

    addingVector(v1, addingItems);

    printIntVector(v1, " after modify");

    int pos = returnIndice(v1, 2);
    if (pos == -1)
    {
        cout << "\nvalue not found\n";

    }
    else
        cout << "\nfirst occurence found at " << pos << endl;

    vector<int> v2{ 22, 11, 33, 44 };

    vector<int> v3{ 22, 44, 55, 11 };

    vector<int> v4{};

  


}
*/
void printIntVector(vector<int> v, string caption)
{
    cout << "\n" << caption << "\t";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }

    cout << endl;
}
void addingVector(vector<int>& v1, int addingItems)
{
    for (int i = 0; i < v1.size(); i++)
    {
        v1[i] = v1[i] + addingItems;

    }

}
int returnIndice(vector<int> v, int key)
{

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
        {
            return i;
        }   
    }
    return -1;
}


