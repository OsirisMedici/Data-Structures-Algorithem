#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    start = 0;
    end = v.size() - 1;

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // return v;
}

int main()
{
    vector<int> v;

    v.push_back(34);
    v.push_back(23);
    v.push_back(19);
    v.push_back(17);
    v.push_back(13);
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);

    vector<int> ans = reverse(v);

    cout << "Your Reverse Array is: " << endl;
    print(ans);

    return 0;
}