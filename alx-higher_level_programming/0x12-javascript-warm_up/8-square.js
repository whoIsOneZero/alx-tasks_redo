#!/usr/bin/node
const charac = 'X';
if (isNaN(process.argv[2])) {
    console.log('Missing size');
} else {
    const num = parseInt(process.argv[2]);
    for (let i = 0; i < num; i++) {
        console.log(charac.repeat(num));
    }
}