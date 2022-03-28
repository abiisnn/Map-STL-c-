#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> order; // <T key, T value>
 
  // Mapping values to keys
  order["Roxana"] = 48;
  order["Selene"] = 29;

  // First way to see map elements
  for (auto &element: order) { // element is a pair type
    cout << "(" << element.first << ", " << element.second << ")" << endl;
  }

  cout << "---------------------" << endl << endl;
  
  // Second way to see maps
  for (auto i = order.begin(); i != order.end(); i++) {
    std::cout << i->first << " : " << i->second << endl;
  }
}