
Contributor:Dipin R[github.com/kingaa2k9]

 
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
 

Language: JavaScript(Node.js)


