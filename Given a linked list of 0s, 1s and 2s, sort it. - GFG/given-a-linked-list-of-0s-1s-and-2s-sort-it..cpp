// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int one =0;
        int zero=0;
        int two=0;
        Node *cut=new Node(0);
        Node *put=cut;
        while(head){
            if(head->data==0){
                zero++;
            }   
            else if(head->data==1){
                one++;
            }
            else{
                two++;
            }
            head=head->next;
        }
        int i=0;
        while(i<zero){
            Node *n=new Node(0);
            cut->next=n;
            cut=cut->next;
            i++;
        }
        int j=0;
         while(j<one){
            Node *n=new Node(1);
            cut->next=n;
            cut=cut->next;
            j++;
        }
        int k=0;
           while(k<two){
            Node *n=new Node(2);
            cut->next=n;
            cut=cut->next;
            k++;
        }
        return put->next;
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends