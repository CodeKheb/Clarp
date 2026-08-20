class LinkedList(int v, LinkedList n) {
    static LinkedList list = null;
    readonly int value = v;
    readonly LinkedList next = n;

    static void Main() {
        Console.Write("How many nodes: ");
        int amount_of_nodes = int.Parse(Console.ReadLine());

        for (int i = 0; i < amount_of_nodes; i++) {
            Console.Write($"Value at {i}: ");
            int value = int.Parse(Console.ReadLine());
            list = new(value, list);
        }

        Console.Write("List: ");
        for (LinkedList ptr = list; ptr != null; ptr = ptr.next) {
            Console.Write($" {ptr.value}");
        }
    }

}
