package main

import "fmt"

type node struct {
	value int
	next *node
} 

var list *node
var amount_of_node int

func main() {
	fmt.Print("Enter amount of nodes: ")
	fmt.Scan(&amount_of_node)

	for i := 0; i < amount_of_node; i++ {
		var n = new(node)
		fmt.Print("Node at ", i, ": ")
		fmt.Scan(&n.value)
		n.next = list
		list = n
	}

	ptr := list
	for ptr != nil {
		fmt.Print(" ", ptr.value)
		ptr = ptr.next
	}


}
