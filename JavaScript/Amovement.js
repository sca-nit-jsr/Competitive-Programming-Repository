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
    
    if(input%5===0){
        console.log(parseInt(input/5));
    }
    else
    {
        console.log(parseInt(input/5)+1);
    }
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
Language: JavaScript(Node.js)