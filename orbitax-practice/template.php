<?php

// Function to read a single line of input and trim whitespace
function readInput() {
    return trim(fgets(STDIN));
}

// Function to read a line of input and split it into an array of integers
function readInts() {
    return array_map('intval', explode(' ', readInput()));
}

// Function to read a line of input and split it into an array of strings
function readStrings() {
    return explode(' ', readInput());
}

// Function to print output
function output($message) {
    echo $message . PHP_EOL;
}

// Main function where your solution logic will go
function solve() {
    // Example of reading an integer
    $n = intval(readInput());

    // Example of reading a line of integers
    $arr = readInts();

    // Example of reading a line of strings
    // $strings = readStrings();

    // TODO: Add your logic here
    // For demonstration, let's find the sum of the array
    $sum = array_sum($arr);

    // Output the result
    output("Sum of array: " . $sum);
}

// Call the solve function to execute your solution
solve();
