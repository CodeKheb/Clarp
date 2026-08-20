class LinkedList:
    def __init__(self, val, next):
        self.val = val
        self.next = next

class Main:
    list = LinkedList(None, None)
    amount_of_nodes = int(input("How many nodes: "))

    for i in range(amount_of_nodes):
        value = int(input(f"Value at {i}: "))
        list = LinkedList(value, list)

    ptr = list
    while ptr.next is not None:
        print(f" {ptr.val}")
        ptr = ptr.next
