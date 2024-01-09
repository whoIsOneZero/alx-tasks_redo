#!/usr/bin/node
function factorial (num) {
    if (num < 0){
        return (-1);
    } else if (num === 0 || isNaN(num)) {
        return (1);
    }
    return (num * factorial(num - 1));
}
val = process.argv[2];
console.log(factorial(parseInt(val)));