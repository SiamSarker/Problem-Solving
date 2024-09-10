<?php

class Stack {
    private $stack;
    private $size;

    public function __construct() {
        $this->stack = [];
        $this->size = 0;
    }

    // Push element onto stack
    public function push($value) {
        array_push($this->stack, $value);
        $this->size++;
        echo "Pushed: $value\n";
    }

    // Pop element from stack
    public function pop() {
        if ($this->isEmpty()) {
            echo "Stack is empty.\n";
            return null;
        }
        $this->size--;
        $popped = array_pop($this->stack);
        echo "Popped: $popped\n";
        return $popped;
    }

    // Peek at the top element
    public function peek() {
        if ($this->isEmpty()) {
            echo "Stack is empty.\n";
            return null;
        }
        echo "Top element is: " . $this->stack[$this->size - 1] . "\n";
        return $this->stack[$this->size - 1];
    }

    // Check if the stack is empty
    public function isEmpty() {
        return $this->size === 0;
    }
}

// Function to take user input from the terminal
function getUserInput($prompt) {
    echo $prompt;
    return trim(fgets(STDIN));
}

// Create a stack instance
$stack = new Stack();

// Menu for user interaction
do {
    echo "\nStack Operations:\n";
    echo "1. Push\n";
    echo "2. Pop\n";
    echo "3. Peek\n";
    echo "4. Check if Empty\n";
    echo "5. Exit\n";

    $choice = getUserInput("Enter your choice: ");

    switch ($choice) {
        case 1:
            $value = getUserInput("Enter value to push: ");
            $stack->push($value);
            break;
        case 2:
            $stack->pop();
            break;
        case 3:
            $stack->peek();
            break;
        case 4:
            echo "Stack is empty: " . ($stack->isEmpty() ? 'Yes' : 'No') . "\n";
            break;
        case 5:
            echo "Exiting...\n";
            break;
        default:
            echo "Invalid choice. Please try again.\n";
    }
} while ($choice != 5);

?>
