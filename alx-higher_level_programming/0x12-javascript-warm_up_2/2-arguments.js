#!/usr/bin/node

const arg_length = process.argv.length;
if (arg_length == 2) {
  console.log("No argument");
} else if (arg_length == 3) {
  console.log("Argument found");
} else {
  console.log("Arguments found")
}