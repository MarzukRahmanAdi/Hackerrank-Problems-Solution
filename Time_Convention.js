'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}


function timeConversion(s) {
    var arr = s.split(':')
    console.log(arr)
    console.log(arr[0] + ':' + arr[1] + ':' + arr[2][0] + arr[2][1])
    if(arr[2][2] == 'A'){
        if(arr[0] == 12){
            return '00' + ':' + arr[1] + ':' + arr[2][0] + arr[2][1]
        }
        return arr[0] + ':' + arr[1] + ':' + arr[2][0] + arr[2][1]
    } else {
        let firstNumber = parseInt(arr[0])
        if(firstNumber < 12){
            firstNumber = firstNumber + 12
        }
        return firstNumber + ':' + arr[1] + ':' + arr[2][0] + arr[2][1]
    }
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = timeConversion(s);

    ws.write(result + "\n");

    ws.end();
}
