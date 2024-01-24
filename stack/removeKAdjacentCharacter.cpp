#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string data;
    int k;

    cout << "Enter the data : " << endl;
    getline (cin , data);
    cout << "Enter the value of k : " << endl;
    cin >> k;

    vector <pair<char , int>> record;

    for (char current : data)
    {
        if (record.size() == 0 || record.back().first != current)
            record.push_back(make_pair(current , 1));
        else 
            record.back().second++;
        
        if (record.back().second == k) record.pop_back();
    }

    string res = "";
    for (pair <char, int> temp : record)
        res += string(temp.second , temp.first);

    cout<< "this is the result : " << res << endl;
}
