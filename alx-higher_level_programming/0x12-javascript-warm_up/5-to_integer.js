#!/usr/bin/node
first_arg = process.argv[2];
if (isNaN(first_arg)) {
    console.log('Not a number');
} else {
    console.log('My number: ' + parseInt(first_arg));
}