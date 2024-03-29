class MyHashSet {
 public:
  MyHashSet() : set(1000001) {}
  void add(int key) {
    set[key] = true;
  }

  void remove(int key) {
    set[key] = false;
  }

  /** Returns true if this set contains the specified element */
  bool contains(int key) {
    return set[key];
  }

 private:
  vector<bool> set;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */