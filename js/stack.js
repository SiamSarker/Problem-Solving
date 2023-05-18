class Stack {
    constructor(){
        this.items = [];
    }

    push(element){
        this.items.push(element);
    }

    pop(){
        if(this.items.length === 0){
            return false;
        }
        return this.items.pop();
    }
}

const stack = new Stack();
stack.push(10);
stack.push(20);
console.log(stack.pop());
console.log(stack);