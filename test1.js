function findEquilibriumIndex(arr) {
    let totalSum = arr.reduce((acc, num) => acc + num, 0);
    let leftSum = 0;

    for (let i = 0; i < arr.length; i++) {
        totalSum -= arr[i];  // Right sum = total sum - current element

        if (leftSum === totalSum) {  // If left sum == right sum
            return i;
        }

        leftSum += arr[i];  // Update left sum
    }

    return -1;  // No equilibrium index found
}

let arr = [1, 3, 5, 2, 2];
let index = findEquilibriumIndex(arr);
if (index !== -1) {
    console.log("Equilibrium Index: " + index);
} else {
    console.log("No Equilibrium Index found");
}