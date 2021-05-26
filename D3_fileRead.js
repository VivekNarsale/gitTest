var fs = require("fs");
var data = fs.readFileSync('input.txt');
console.log(data.toString());
console.log("Program Ended");

var count=78;
count++;
if(count<100){
    console.log("less than 100");

}
else{
    console.log("value is greater than 100");
}