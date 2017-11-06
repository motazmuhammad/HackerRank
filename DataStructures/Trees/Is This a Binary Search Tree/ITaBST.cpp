/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool check(Node* root, int mn, int mx)
{
    if(root==NULL) return true;

    if(root->data<=mn||root->data>=mx) return false;
    return check(root->left,mn,min(root->data,mx))&&check(root->right,max(mn,root->data),mx);

    
}
   bool checkBST(Node* root) {
       
       int mn=-100000;
       int mx=100000;
       return check(root,mn,mx);
      
   }
