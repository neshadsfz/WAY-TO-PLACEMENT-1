class Stack {
  constructor() {
    this.items = [];
  }

  push = (item) => {
    this.items.push(item);
  };

  pop = () => {
    return this.isEmpty() == false
      ? this.items.pop()
      : console.error("Stack underflow");
  };

  isEmpty = () => {
    return this.items.length == 0;
  };

  peek = () => {
    return this.isEmpty() == false
      ? this.items[this.items.length - 1]
      : "Stack underflow";
  };

  size = () => {
    return this.items.length;
  };

  getStack = () => {
    return this.items;
  };
}

// **********Use of the class**********
const stack = new Stack()

// Pushing elements in the stack
stack.push('T1')
stack.push('T2')

// Popping elements from the stack
stack.pop()
stack.pop()

// Fetching the last element of the stack
console.log(stack.peek())

// Checking if the stack is empty
console.log(stack.isEmpty())

// Getting the size of the stack
console.log(stack.size())

// Get the whole stack
console.log(stack.getStack())
