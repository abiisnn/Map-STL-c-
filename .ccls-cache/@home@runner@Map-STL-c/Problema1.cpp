#include <bits/stdc++.h>
using namespace std;

int getAmount(string name) {
  int amount = 0;
  for(int i = 0; i < name.size(); i++) {
    amount += name[i];
  }
  return amount;
}

int main() {
  map<int, vector<string>> storage; // <T key, T value>
 
  int names; cin >> names;

  
  for(int i = 0; i < names; i++) {
    string name; cin >> name;
    int amount = getAmount(name);
    storage[amount].push_back(name);
  }

  // Printing map
  for(auto &element: storage) {
    cout << element.first << ": ";
    for(int i = 0; i < element.second.size(); i++) {
      cout << element.second[i] << " ";
    }
    cout << endl;
  }

  int queries; cin >> queries;
  for(int i = 0; i < queries; i++) {
    int amount; cin >> amount;
    for(int j = 0; j < storage[amount].size(); j++) {
      cout << storage[amount][j] << " ";
    }
    cout << endl;
  }
}