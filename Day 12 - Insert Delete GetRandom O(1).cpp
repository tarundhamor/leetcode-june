class RandomizedSet {
public:
    /** Initialize your data structure here. */
  
            vector<int> vec;
    RandomizedSet() {

    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
         for(int e : vec)
            if(val==e)  return false;
        vec.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]==val)
            {
                vec.erase(vec.begin()+i);
                return true;
            }
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return vec[rand() % vec.size()];   
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */