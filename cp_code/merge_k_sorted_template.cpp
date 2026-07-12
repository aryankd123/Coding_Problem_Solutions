#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Step 1: Data Struct (Ab iske andar koi ajeeb operator math nahi hai)
struct Node {
    int value;        // Element ki actual value
    int arrayIndex;   // Yeh kis array/line se aaya hai
    int elementIndex; // Us array mein iska position kya hai
};

// Step 1.5: Custom Comparator (Functor) Heap ke liye!
struct CompareNode {
    // Yehi tera logic hai: bool operator()(p1, p2)
    bool operator()(const Node& n1, const Node& n2) {
        // Yaad rahe: Heap ki duniya ulta chalti hai! 
        // '>' return karne se MIN-HEAP (chhota upar) banta hai.
        // '<' return karne se MAX-HEAP (bada upar) banta hai.
        return n1.value > n2.value; 
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
    int k = arrays.size();
    
    // Min-Heap declaration using hamara naya 'CompareNode' Functor
    priority_queue<Node, vector<Node>, CompareNode> minHeap;
    vector<int> result;
    
    // Step 2: "Get the Leaders" - Har array ka pehla element (index 0) daalo
    for (int i = 0; i < k; i++) {
        // Edge case: check kar lo ki array khali na ho
        if (!arrays[i].empty()) {
            minHeap.push({arrays[i][0], i, 0}); 
        }
    }
    
    // Step 3: "The Loop" (Nikalte jao, Naye daalte jao)
    while (!minHeap.empty()) {
        // Sabse chhota (Leader) pakdo
        Node curr = minHeap.top();
        minHeap.pop();
        
        // Us chhotu ko final result mein daal do
        result.push_back(curr.value);
        
        // Ab dhoondho agla banda! 
        int nextElementIndex = curr.elementIndex + 1;
        int arrIdx = curr.arrayIndex;
        
        // Agar us specific array mein aur bande bache hain, toh unko Heap mein bhejo
        if (nextElementIndex < arrays[arrIdx].size()) {
            minHeap.push({arrays[arrIdx][nextElementIndex], arrIdx, nextElementIndex});
        }
    }
    
    return result;
}