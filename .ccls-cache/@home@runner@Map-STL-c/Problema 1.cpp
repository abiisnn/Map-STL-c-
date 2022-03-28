#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, vector<string>> storage; // <T key, T value>
 
  int names; cin >> names;

  for(int i = 0; i < names; i++) {
    string name; cin >> name;
    int amount = getAmount(name);
    storage[amount].push_back(name);
  }

  for(auto &element: storage) {
    cout << element.first << ": (";
    for(int i = 0; i < element.second.size(); i++) {
      cout << element.second[i] << " ";
    }
    cout << endl;
  }
}