#include <iostream>
using namespace std;

// 1. Node ka Structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    TreeNode* root;

    // Helper function for Insertion
    TreeNode* insertHelper(TreeNode* node, int val) {
        // Base Case: Dead end mil gaya, naya node lagao
        if (node == nullptr) return new TreeNode(val); 
        
        // Routing and "Catch & Link"
        if (val < node->val) {
            node->left = insertHelper(node->left, val);   // Chhota hai toh left bhejo
        } else if (val > node->val) {
            node->right = insertHelper(node->right, val); // Bada hai toh right bhejo
        }
        
        return node; // Wapas chain connect karte jao
    }

    // Helper to find Minimum (Used in Deletion Case 3)
    TreeNode* findMin(TreeNode* node) {
        while (node && node->left != nullptr) {
            node = node->left; // Left left left jate raho!
        }
        return node;
    }

    // Helper function for Deletion
    TreeNode* deleteHelper(TreeNode* node, int key) {
        // Base Case: Node mila hi nahi
        if (node == nullptr) return nullptr; 

        // 1. Dhoondho (Search)
        if (key < node->val) {
            node->left = deleteHelper(node->left, key);
        } else if (key > node->val) {
            node->right = deleteHelper(node->right, key);
        } 
        // 2. Mil gaya! Ab Delete karo
        else {
            // Case 1 & 2: 0 ya 1 child
            if (node->left == nullptr) {
                TreeNode* temp = node->right; // Right bacha hai usko save karo
                delete node;                  // Delete current
                return temp;                  // Right wale ko upar pass kar do
            } else if (node->right == nullptr) {
                TreeNode* temp = node->left;  // Left bacha hai usko save karo
                delete node;                  // Delete current
                return temp;                  // Left wale ko upar pass kar do
            }

            // Case 3: 2 children (Dono zinda hain)
            TreeNode* successor = findMin(node->right);              // Right side ka sabse chhota node dhoondho
            node->val = successor->val;                              // Value copy karo (Overwrite)
            node->right = deleteHelper(node->right, successor->val); // Us original successor node ko uda do
        }
        return node;
    }

    // Helper function for Inorder Traversal
    void inorderHelper(TreeNode* node) {
        if (node == nullptr) return;
        inorderHelper(node->left);
        cout << node->val << " ";
        inorderHelper(node->right);
    }

public:
    BST() { root = nullptr; }

    void insert(int val) {
        root = insertHelper(root, val);
    }

    void deleteNode(int val) {
        root = deleteHelper(root, val);
    }

    void display() {
        inorderHelper(root);
        cout << "\n";
    }
};

int main() {
    BST tree;
    
    // BST banate hain
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder Traversal (Sorted order aayega): \n";
    tree.display();

    cout << "\nDeleting 50 (Root with 2 children case)...\n";
    tree.deleteNode(50);

    cout << "After Deletion (Still Sorted!): \n";
    tree.display();

    return 0;
}