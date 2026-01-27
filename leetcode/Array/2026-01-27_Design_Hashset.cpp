/*
Problem: Design Hashset
Link: https://neetcode.io/problems/design-hashset/question?list=neetcode250
Date: 2026-01-27
*/

class MyHashSet {
public:
   vector<int> v;

    MyHashSet() {}

    void add(int key) {
        if (!contains(key)) {
            v.push_back(key);
        }
    }

    void remove(int key) {
        v.erase(std::remove(v.begin(), v.end(), key), v.end());
    }

    bool contains(int key) {
        return find(v.begin(), v.end(), key) != v.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
