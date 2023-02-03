//{ Driver Code Starts
import java.util.*;
import java.io.*;

public class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
    
}
class GFG{
	static void printList(Node node) 
	{ 
		while (node != null) 
		{ 
			System.out.print(node.data + " "); 
			node = node.next; 
		} 
		System.out.println(); 
	}
	
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t > 0){
        	int n = sc.nextInt();
            
            Node head = new Node(sc.nextInt());
            Node tail = head;
            HashMap<Node, Integer> mp = new HashMap<Node, Integer>();
            mp.put(head, head.data); 
            for(int i=0; i<n-1; i++)
            {
                tail.next = new Node(sc.nextInt());
                tail = tail.next;
                mp.put(tail, tail.data); 
            }
            
            Node failure = new Node(-1);
            
            Solution g = new Solution();
            head = g.pairwiseSwap(head);
            
            Node temp = head;
            int f = 0;
            while (temp != null) 
    		{ 
    			if(mp.get(temp) != temp.data){
    			    f = 1;
    			}
    			temp = temp.next; 
    		} 
            
            if(f==1){
                printList(failure); 
            }
            else{
                printList(head); 
            }
            t--;
        }
    } 
} 
   

// } Driver Code Ends


/* node class of the linked list

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

*/


class Solution {
    // Function to pairwise swap elements of a linked list.
    // It should returns head of the modified list
     public Node pairwiseSwap(Node head)
    {
        // code here
        if(head == null || head.next == null) return head;
        Node prev = head;
        Node curr =  head.next.next;
        head = head.next;
        head.next = prev;
        while(curr != null && curr.next != null)
        {
            prev.next = curr.next;
            prev = curr;
            Node next = curr.next.next;
            curr.next.next = curr;
            curr = next;
            
        }
        prev.next = curr;
        return head;
    }
    /*
    public Node pairwiseSwap(Node head)
    {
        // code here
        Node curr = head;
        while(curr != null && curr.next != null)
        {
            int temp;
            temp = curr.data;
            curr.data = curr.next.data;
            curr.next.data = temp;
            System.out.println(curr.data + " "  + curr.next.data);
            curr = curr.next.next;
        }
        return head;
    }
    */
}