1class MyHashMap {
2public:
3    vector<int>v;
4    MyHashMap() {
5        for(int i=0;i<=1000000;i++)
6        {
7            v.push_back(-1);
8        }
9    }
10    
11    void put(int key, int value) {
12        v[key]=value;
13    }
14    
15    int get(int key) {
16        return v[key];
17    }
18    
19    void remove(int key) {
20        v[key]=-1;
21    }
22};
23
24/**
25 * Your MyHashMap object will be instantiated and called as such:
26 * MyHashMap* obj = new MyHashMap();
27 * obj->put(key,value);
28 * int param_2 = obj->get(key);
29 * obj->remove(key);
30 */