public class reverseLinkedList {
    public class ListNode {
        int value;
        ListNode next;

        public ListNode(int value) {
            this.value = value;
        }
    }
    ListNode head;
    ListNode tail;
    int size;

    public reverseLinkedList() {
        this.size = 0;
    }
      public void insertFirst(int value) {
        ListNode node = new ListNode(value);
        node.next = head;
        head = node;
        if (tail == null) {
            tail = head;
        }
        size += 1;
    }


    public void reverseEntire() { //function for reversing Entire LinkedList
        ListNode current = head;
        ListNode prev = null;
        ListNode next = null;

        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    public ListNode reverseBetween(ListNode head, int left, int right) { //function for reversing part of linkedlist in between
        if (left == right)
            return head;

        ListNode current = head;
        ListNode prev = null;

        for (int i = 0; current != null && i < left - 1; i++) {
            prev = current;
            current = current.next;
        }

        ListNode last = prev;
        ListNode newEnd = current;

        ListNode next = current.next;

        for (int i = 0; current != null && i < right - left + 1; i++) {
            current.next = prev;
            prev = current;
            current = next;
            if (next != null) {
                next = next.next;
            }
        }

        if (last != null) {
            last.next = prev;
        } else {
            head = prev;
        }

        newEnd.next = current;
        return head;
    }

  
    public void display() {
        ListNode temp = head;
        while (temp != null) {
            System.out.print(temp.value);
            if (temp.next != null) {
                System.out.print("--> ");
            }
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String args[]) {
        reverseLinkedList list = new reverseLinkedList();
        list.insertFirst(10);
        list.insertFirst(20);
        list.insertFirst(30);
        list.insertFirst(40);
        list.insertFirst(50);

        System.out.println("Original Linked List:");
        list.display();

        System.out.println("\nReversed Entire Linked List:");
        list.reverseEntire();
        list.display();

        System.out.println("\nReversed Linked List In between:");
        list.head = list.reverseBetween(list.head, 2, 4);
        list.display();
    }
}
