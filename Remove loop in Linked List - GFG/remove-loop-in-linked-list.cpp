//{ Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* commonPoint(Node* head)
     {
         Node *slow = head;
         Node *prev = NULL;
         Node *fast = head;
         while(fast != NULL && fast->next != NULL)
         {
             slow = slow->next;
             fast =fast->next->next;
             if(fast == slow)
                {
                    slow = head;
                    break;
                }
         }
         slow = head;
         if(slow  == fast )
         {
            while(slow ->next != fast)
            {
                slow = slow ->next;
            }
            return  slow;
         }
         while ( slow != fast && fast != NULL)
         {
             slow = slow->next;
             prev = fast;
             fast =fast->next;
         }
         return prev;
     }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* nextdel = commonPoint(head);
        if(nextdel != NULL)
            {
                nextdel->next  = NULL;
            }
    }
};
/*
bool loop(Node *head)
{
    unordered_set<Node *>s;
    for(Node *curr = head; curr != NULL ; curr =curr->next)
    {
        if(s.find(curr) != s.end())
            return true;
        s.insert(curr);
    }
    retuun false;
}
*/

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends