#!/usr/bin/node
arg_list = process.argv.slice(2);
if (arg_list.length <= 2 ) {
    console.log(0);
} else {
    let max_num = parseInt(arg_list[2]);
    arg_list.forEach(element => {
        val = parseInt(element);
        if (val > max_num) {
            max_num = val;
        }
    });
    console.log(max_num);
}