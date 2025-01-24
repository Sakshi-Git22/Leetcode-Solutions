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
void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=tail->next;
    return;
}
    Node* copyRandomList(Node* head) {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;

        //step1 - make a copy of the node

        while(temp!=NULL){
            insertAtTail(cloneHead, cloneTail , temp->val);
            temp=temp->next;
        }

        //step2 - add clones in the originalNode

        Node* temp1=head;
        Node* temp2=cloneHead;

        while(temp1!=NULL && temp2!=NULL){
            Node* aageKaNode = temp1->next;
            temp1->next=temp2;
            temp1=aageKaNode;
            aageKaNode = temp2->next;
            temp2->next=temp1;
            temp2=aageKaNode;
        }

        //step3 - locate the randmom pointers in the clone

        temp1=head;
        while(temp1!=NULL){
            if(temp1->next!=NULL){
                temp1->next->random = temp1->random ? temp1->random->next : NULL;
            }
            
                temp1=temp1->next->next;
            
        }

        //step4- revert the original list

        temp1=head;
        temp2=cloneHead;
        while(temp1!=NULL && temp2!=NULL){
            temp1->next=temp2->next;
            temp1=temp1->next;
            if(temp1!=NULL){
                temp2->next=temp1->next;
            }
            temp2=temp2->next;
        }

        //step5- return clonehead
        return cloneHead;
    }
};