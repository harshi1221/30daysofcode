//Maps ---> store elements in a key-value pair


//creating a map
const fruits = new Map([
    ["apples",100],
    ["oranges",250],
    ["papaya",300]
]);

console.log(fruits.get("orange"));  //gets the value of key orange
console.log(fruits.has("papaya"));  //return true it key exists in map otherwise return false
console.log(fruits.delete("apples")); //deletes the element from the map
console.log(fruits.clear());          //removes all element in map
