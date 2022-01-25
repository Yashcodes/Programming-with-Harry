console.log("Lets discuss about arrays and objects.");

const marks = [34,23,45,7,654,656];
const fruits = ['Orange', 'Apple', 'Mango'];
const mixed = ['str', 89, [3,5]];

const arr = new Array(34,45,65, 'Orange');
console.log(arr);
// console.log(mixed);
// console.log(fruits[0]);

// console.log(arr.length);         // Property of array
// console.log(Array.isArray(mixed)); // Method

arr[0] = 'yash';
let arrelement = arr[0];
console.log('element : ', arrelement);
console.log(arr);