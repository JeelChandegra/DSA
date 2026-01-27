/*
Problem: design hash map
Link: https://neetcode.io/problems/design-hashmap/history
Date: 2026-01-27
*/

class MyHashMap {
private:
    static const int SIZE = 1000;
    vector<pair<int, int>> buckets[SIZE];

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() {}

    void put(int key, int value) {
        int idx = hash(key);

        // Update value if key exists
        for (auto &p : buckets[idx]) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }

        // Otherwise insert new key-value
        buckets[idx].push_back({key, value});
    }

    int get(int key) {
        int idx = hash(key);

        for (auto &p : buckets[idx]) {
            if (p.first == key) {
                return p.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        int idx = hash(key);

        for (int i = 0; i < buckets[idx].size(); i++) {
            if (buckets[idx][i].first == key) {
                buckets[idx].erase(buckets[idx].begin() + i);
                return;
            }
        }
    }
};

