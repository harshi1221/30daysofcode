// Type casting -- conversion of one data type to other

//Implicit conversion  
let a = '3' + 2;    //converts to a string (+)
console.log(a);   

let b = '3' - 2;    //converts to a number (-)
console.log(b);

 b = '4' / 2;
console.log(b);      //converts to a number(/)

 b = '3' * '1';
 console.log(b);    //converts to a number(*)


//Explicit Conversion
let c = '123';
console.log(Number(c));   //Using Number() to convert into number from string
c = '10.2';
console.log(parseInt(c));  //parseInt() used to convert into integer
c = 10;
console.log(String(c));    //String() used to convert into string
