import java.util.Scanner;

public class LinkedList {
    public LinkedList next;
    public int value;
    public static LinkedList firstNode;
    public static LinkedList finalNode=null;

    public LinkedList(int data, LinkedList point) {
        value = data;
        next = point;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter amount of nodes: ");
        int number_of_nodes = sc.nextInt();
        int node;

        for (int i = 0; i < number_of_nodes; i++) {
            System.out.printf("Node at %d:", i);
            node = sc.nextInt();
            LinkedList n = new LinkedList(node, null);
            if (finalNode != null) {
                finalNode.next = n;
                finalNode = n;
            } else {
                firstNode = n;
                finalNode = n;
            }
        }

        System.out.print("Values: ");
        LinkedList n = firstNode;
        while (n != null) {
            System.out.print(" " + n.value);
            n = n.next;
        }
    }
}
