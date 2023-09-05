// var ---> global or functional scope
//var can be redeclarred and also can be updated
var a = 5;
var a = 1; 
function solve(){  
    var f = 12; //can be accessible within the function
    console.log(f);   //prints 12
    console.log(a);   //prints 1
}
solve();
console.log(a); //prints 1 because a is updated from 5 to 1


//let -----> block scope
//let cannot be redeclarred but can update
let b = 5;
// let b = 12; adding this will give error as already been declared
function sol(){
    let b = 3;   //can be declared with same name in different blocks
    // let b = 14; adding this will give error for redeclaration
    console.log(b);
}
sol();

//const -----> block scoped
//const cannot be updated or redeclared
const c = 10;
function soln(){
    const c = 9;
    // const c = 8; adding this will give error as already been declared
    console.log(c);
}
soln();
console.log(c);