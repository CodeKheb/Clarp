import readline from 'readline/promises'
import { stdin as input, stdout as output } from 'process';

class LinkedList {
    constructor(value, next) {
        this.value = value;
        this.next = next;
    }
}

const sc = readline.createInterface({ input, output})
const amount_of_nodes = await sc.question("Enter amount of nodes: ")

let list = null

for (let i = 0; i < amount_of_nodes; i++) {
    const value = await sc.question(`Enter value at ${i}: `)
    list = new LinkedList(value, list)
}

sc.close();

for (let ptr = list; ptr != null; ptr = ptr.next) {
    console.log(` ${ptr.value}`)
}

