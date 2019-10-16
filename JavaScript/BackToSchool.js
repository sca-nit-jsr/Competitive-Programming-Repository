// Sample code to perform I/O:
 
process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";
 
process.stdin.on("data", function (input) {
    stdin_input += input;                               // Reading input from STDIN
});
 
process.stdin.on("end", function () {
   main(stdin_input);
});
 
function main(input) {
    let s=input.split(' ');
    s.sort((a,b)=>a-b);
    process.stdout.write(s[s.length-1]);
    
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
Language: JavaScript(Node.js)


