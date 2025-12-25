#include <bits/stdc++.h>
using namespace std;

/* 
=====================
PAIR (utility)
=====================
*/
void explainPair() {
    cout << "---- Pair ----\n";

    pair<int, int> v = {1, 2};
    cout << v.first << " " << v.second << "\n";

    // Assigning a new value
    v = make_pair(10, 20);
    cout << v.first << " " << v.second << "\n";

    // Nested pair
    pair<int, pair<int, int>> p = {34, {1, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second << "\n";

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << "\n\n";
}

/* 
=====================
VECTOR
=====================
*/
void explainVector() {
    cout << "---- Vector ----\n";

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // constructs in place

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(10, 20);

    // Different ways of initialization
    vector<int> v1(5, 100);   // {100,100,100,100,100}
    vector<int> v2(5);        // {0,0,0,0,0}
    vector<int> v3(v1);       // copy of v1

    // Iterators
    cout << "Iterators:\n";
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";
    cout << "\n";

    // Range-based loop
    for (auto x : v1) cout << x << " ";
    cout << "\n";

    // Erase
    v1.erase(v1.begin() + 2);               // remove one element
    v1.erase(v1.begin(), v1.begin() + 2);   // remove range

    // Insert
    vector<int> copy(2, 50);
    v1.insert(v1.begin(), 300);
    v1.insert(v1.begin() + 1, 2, 10);
    v1.insert(v1.begin(), copy.begin(), copy.end());

    cout << "Size: " << v1.size() << "\n";
    v1.pop_back();

    v1.swap(v2);
    v1.clear();  // removes all elements
    cout << "Empty? " << v1.empty() << "\n\n";
}

/* 
=====================
LIST (doubly linked)
=====================
*/
void explainList() {
    cout << "---- List ----\n";

    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);

    // Remove
    ls.remove(2); // removes all '2'

    for (auto x : ls) cout << x << " ";
    cout << "\n\n";
}

/* 
=====================
DEQUE
=====================
*/
void explainDeque() {
    cout << "---- Deque ----\n";

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    cout << dq.front() << " " << dq.back() << "\n\n";
}

/* 
=====================
PRIORITY QUEUE (Heap)
=====================
*/
void explainPQ() {
    cout << "---- Priority Queue ----\n";

    // Max-heap (default)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout << "Max-heap top: " << pq.top() << "\n";

    // Min-heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(2);
    pq2.push(8);
    pq2.emplace(10);
    cout << "Min-heap top: " << pq2.top() << "\n\n";
}

/* 
=====================
SET (sorted unique)
=====================
*/
void explainSet() {
    cout << "---- Set ----\n";

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    cout << "Set contains: ";
    for (auto x : s) cout << x << " ";
    cout << "\n";

    auto it = s.find(3);
    if (it != s.end()) cout << "Found 3\n";

    s.erase(2);
    cout << "After erasing 2: ";
    for (auto x : s) cout << x << " ";
    cout << "\n\n";
}

/* 
=====================
MULTISET (sorted, allows duplicates)
=====================
*/
void explainMultiset() {
    cout << "---- Multiset ----\n";

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);

    cout << "Count of 1: " << ms.count(1) << "\n";

    ms.erase(ms.find(1)); // erase one '1'

    for (auto x : ms) cout << x << " ";
    cout << "\n\n";
}

/* 
=====================
UNORDERED SET
=====================
*/
void explainUnorderedSet() {
    cout << "---- Unordered Set ----\n";

    unordered_set<int> us;
    us.insert(5);
    us.insert(2);
    us.insert(3);

    for (auto x : us) cout << x << " "; // no particular order
    cout << "\n\n";
}

/* 
=====================
MAP (sorted unique keys)
=====================
*/
void explainMap() {
    cout << "---- Map ----\n";

    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    for (auto [key, value] : mpp)
        cout << key << " -> " << value << "\n";

    cout << "mpp[6] (not found): " << mpp[6] << "\n\n"; // default 0
}

/* 
=====================
MULTIMAP
=====================
*/
void explainMultiMap() {
    cout << "---- MultiMap ----\n";

    multimap<int, int> mpp;
    mpp.insert({1, 100});
    mpp.insert({1, 200}); // duplicate keys allowed

    for (auto [key, value] : mpp)
        cout << key << " -> " << value << "\n";

    cout << "\n";
}

/* 
=====================
UNORDERED MAP
=====================
*/
void explainUnorderedMap() {
    cout << "---- Unordered Map ----\n";

    unordered_map<int, string> ump;
    ump[1] = "One";
    ump[2] = "Two";

    for (auto [k, v] : ump)
        cout << k << " -> " << v << "\n";

    cout << "\n";
}

/* 
=====================
EXTRA UTILITIES
=====================
*/
void explainExtra() {
    cout << "---- Extras ----\n";

    // Sorting
    vector<int> a = {3, 1, 4, 1, 5};
    sort(a.begin(), a.end());
    sort(a.rbegin(), a.rend()); // descending

    // Count bits
    int num = 7;
    cout << "__builtin_popcount(7): " << __builtin_popcount(num) << "\n";
    long long big = 1LL << 40;
    cout << "__builtin_popcountll(big): " << __builtin_popcountll(big) << "\n";

    // Next permutation
    string s = "123";
    do {
        cout << s << " ";
    } while (next_permutation(s.begin(), s.end()));
    cout << "\n";

    // Max element
    cout << "Max element in a: " << *max_element(a.begin(), a.end()) << "\n\n";
}

int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainPQ();
    explainSet();
    explainMultiset();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}
