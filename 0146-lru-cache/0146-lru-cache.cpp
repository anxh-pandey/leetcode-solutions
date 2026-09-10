class LRUCache {
public:
class Node{
    public:
    int val;
    int key;
    Node* next;
    Node* prev;
    Node(int a,int b){
        key=a;
        val=b;
        next=NULL;
        prev=NULL;
    }
};
int capacity;
unordered_map<int,Node*> mp;
Node* head;
Node* tail;
    LRUCache(int capacity) {
        this->capacity=capacity;
        head = new Node(-1,-1);
        tail= new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    void add(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }
    void del(Node* node){
        node->next->prev=node->prev;
        node->prev->next=node->next;
    }
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        Node* node = mp[key];
        del(node);
        add(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* node=mp[key];
            del(node);
            node->val=value;
            add(node);
            return;
        }
        Node* node=new Node(key,value);
        add(node);
        mp[key]=node;
        if(mp.size()>capacity){
            Node* lru=tail->prev;
            del(lru);
            mp.erase(lru->key);
            delete lru;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */