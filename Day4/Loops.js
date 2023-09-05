// Loops


// for loop ----> the code inside the loop executes number of times as mentioned
var a = 4;
for(let i=0; i<3; i++){
    console.log(i,a);
}

//for in loop ------> this loop iterates over an object
const person = {
    firstname : "John",
    lastname : "Doe",
    age : "21"
};
for(let a in person){             
   console.log(person[a]); //key a is used to access the value in person object
}

// for of loop ----> this loop oterates over the values of iterables
const fruits = ["apple","orange","papaya"];
for(let i of fruits){
    console.log(i);
}


// forEach loop ----> this loop iterates over the elements through function call
const chocolates =["KitKat","5Star","DairyMilk"];
chocolates.forEach(function(chocolate){
    console.log(chocolate);
})