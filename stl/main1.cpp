#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> vec;
  vec.push_back(4);
  vec.push_back(8);
  vec.push_back(5);
  cout << vec.at(2);

  deque<int> deq = {1, 2, 3, 4};
  deq.push_back(12);
  deq.push_front(11);
  cout << deq[1];

  list<int> myList = {2, 8, 5, 4};
  myList.push_back(6);
  myList.push_front(4);

  list<int>::iterator itr = find(myList.begin(), myList.end(), 2);
  myList.insert(itr, 8);

  itr++;
  myList.erase(itr);
}

