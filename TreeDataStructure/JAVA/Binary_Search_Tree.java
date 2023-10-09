import java.util.Scanner;

class Node {
    int key;
    Node left, right;

    public Node(int item) {
        key = item;
        left = right = null;
    }
}

class BinarySearchTree {
    Node root;

    BinarySearchTree() {
        root = null;
    }

    Node insert(Node node, int key) {
        if (node == null) {
            node = new Node(key);
            return node;
        }

        if (key < node.key)
            node.left = insert(node.left, key);
        else if (key > node.key)
            node.right = insert(node.right, key);

        return node;
    }

    Node search(Node root, int key) {
        if (root == null || root.key == key)
            return root;

        if (root.key < key)
            return search(root.right, key);

        return search(root.left, key);
    }

    public static void main(String[] args) {
        BinarySearchTree tree = new BinarySearchTree();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the root element of a tree : ");
        tree.root = tree.insert(tree.root, sc.nextInt());
        System.out.println("Enter the number of child nodes in the tree : ");
        int numberOFNodes = sc.nextInt();
        System.out.println("Enter child node values to insert in the tree: ");
        for(int i=0;i<numberOFNodes;i++){
            System.out.println("Enter the value of child node "+(i+1));
            tree.root = tree.insert(tree.root, sc.nextInt());
        }

        System.out.println("Enter the key to search in the tree : ");

        int key = sc.nextInt();

        if (tree.search(tree.root, key) == null)
            System.out.println(key + " not found");
        else
            System.out.println(key + " found");
    }
}