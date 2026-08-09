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
    void insert(Node* newnode,Node* &clonehead,Node* &clonetail)
    {
        if(clonehead==NULL)
        {
            clonehead=newnode;
            clonetail=clonehead;
            return;
        }
        clonetail->next=newnode;
        clonetail=clonetail->next;
        return;
    }
    Node* copyRandomList(Node* head) {
        //CONCEPT:
        // step 1:make a clone linked list
        // step 2:insert the clone linked list in the original list
        // step 3:copy the random pointer
        // step 4:reverse the changes done in the step 2
        // step 5:return the ans


        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* newnode = new Node(temp->val);
            insert(newnode,clonehead,clonetail);
            temp=temp->next;
        }
        Node* temphead=head;
        Node* tempclonehead=clonehead;
        Node* forward;
        Node* cloneforward;
        while(temphead!=NULL && tempclonehead!=NULL)
        {
            forward=temphead->next;
            cloneforward=tempclonehead->next;
            temphead->next=tempclonehead;
            temphead=forward;
            tempclonehead->next=temphead;
            tempclonehead=cloneforward;
        }
        temphead=head;
        tempclonehead=clonehead;
        while(temphead!=NULL)
        {
            if(temphead->random!=NULL)
            temphead->next->random=temphead->random->next;
            temphead=temphead->next;
            if(temphead!=NULL)
            {
                temphead=temphead->next;
            }
        }
        //now both clone and original shoud seperate
        temphead=head;
        tempclonehead=clonehead;
        while(temphead!=NULL && tempclonehead!=NULL)
        {
           if(temphead->next!=NULL)
            temphead->next=temphead->next->next;
            if(tempclonehead->next!=NULL)
            tempclonehead->next=temphead->next->next;
            temphead=temphead->next;
            tempclonehead=tempclonehead->next;
        }
        return clonehead;
    }
};