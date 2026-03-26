import java.util.Stack;
class Node{
    int data;
    Node next;
    Node prev;

    public Node(int data1,Node next1,Node prev1){
        this.data=data1;
        this.next=next1;
        this.prev=prev1;
    }
    public Node(int data1){
        this.data=data1;
        this.next=null;
        this.prev=null;
    }
}
public class Main{

public static Node ConvertArrtoDll(int[] arr){
    if(arr.length==0) return null;
    Node head=new Node(arr[0]);
    Node prev=head;
    for(int i=1;i<arr.length;i++){
        Node temp=new Node(arr[i],null,prev);
        prev.next=temp;
        prev=prev.next;
    }
    return head;
}
public static void printDll(Node head){
    while (head!=null) {
        System.out.print(head.data+" ");
        head=head.next;
    }

}
public static Node DeleteHead(Node head){
    if(head==null|| head.next==null) return null;
    Node prev=head;
    head=head.next; 
    head.prev=null;
    prev.next=null;
    return head;
    
}

public static Node Deletetail(Node head){
    if(head==null||head.next==null) return null;
        Node tail=head;
        while(tail.next!=null){
            tail=tail.next;
        } 
       Node  prev=tail.prev;
       prev.next=null;
       tail.prev=null;

      
    return head;

}
public static Node reverseLinkedList(Node head){
    Node temp=head;
    Node prev=null;
    while(temp!=null){
   Node front= temp.next;
   temp.next=prev;
   prev=temp;
   temp=front;

}
return prev ;
}
public static Node  reverseLinkedListSt(Node head){
    Stack<Integer>st=new Stack<>();
    Node temp=head;
    while(temp!=null){
        st.push(temp.data);
        temp=temp.next;
    }
   temp=head;
    while(temp!=null){
        temp.data=st.pop();
        temp=temp.next;
    }
    return head;
}



public static void main(String args[]){
    int[] arr={32,42,534,333};
    Node head= ConvertArrtoDll(arr);
    //   head=DeleteHead(head);
    // head=Deletetail(head);
    head=reverseLinkedListSt(head);
    printDll(head);
}
}