/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void insert(Node* temp,Node* &tail)
  {
      tail->next=temp;
      tail=tail->next;
      return;
  }
    Node* copyRandomList(Node* head) {
         //fristly we will make a clone(copy) node
        Node* clonehead=new Node(-1);
        Node* clonetail=clonehead;
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* newnode=new Node(temp->val);
            insert(newnode,clonetail);
            temp=temp->next;
        }
        //now we wil map the clone node to the original node
        Node* originalnode=head;
        Node* clonenode=clonehead->next;
       unordered_map<Node*,Node*>mapping;
        while(originalnode!=NULL)
        {
            mapping[originalnode]=clonenode;
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        }
        originalnode=head;
        clonenode=clonehead->next;
        while(clonenode!=NULL)
        {
          clonenode->random=mapping[originalnode->random];
          clonenode=clonenode->next;
          originalnode=originalnode->next;
        }
        return clonehead->next;
    }
    
};