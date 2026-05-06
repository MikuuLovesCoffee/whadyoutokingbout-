#include <vector>
#include <cstdio>

using namespace std;


class Hash{
private:

static const int SIZE = 1009;

struct Node{
    int val;
    Node* next;
    Node(int v, Node* n) : val(v), next(n) {}
} ;

Node* table[SIZE];

int hash(int key){
    if ( key < 0) key = -key;
    return (key % SIZE + SIZE) % SIZE;
}

public:

    Hash(){
        for(int i = 0; i < SIZE; i++){
            table[i] = nullptr; 
        }
    }

    bool contains(int key){
        int idx = hash(key);
        Node* curr = table[idx] ;

        while (curr != nullptr){
            if (curr->val == key) return true;
            curr = curr->next;
        }
        return false; 
    }

    void add(int key){
        if (contains(key)) return;
        int idx = hash(key) ;
        Node* node = new Node(key, table[idx]);
        table[idx] = node ;
    }

}  ; 

class Solution{

public:

    bool containsDuplicate(vector<int>& nums) {
         Hash set;
        for(int n : nums){
            if(set.contains(n)) return true;
        set.add(n);
        }   
        return false;
    } 

} ;

int main(){
    Solution s;
    vector<int> nums = {1,2,3,5,1};
    bool res = s.containsDuplicate(nums);
    if(res) {
        printf("Contains duplicate\n");
    } else {
        printf("Does not contain duplicate\n");
    }
    return 0;
}