console.log("Lets discuss about arrays and objects.");

let marks = [34,23,45,7,654,656];
const fruits = ['Orange', 'Apple', 'Mango'];
const mixed = ['str', 89, [3,5]];

const arr = new Array(34,45,65, 'Orange');
// console.log(marks);
// console.log(mixed);
// console.log(fruits[0]);

// console.log(arr.length);         // Property of array
// console.log(Array.isArray(mixed)); // Method

arr[0] = 'yash';
let arrelement = arr[0];
// console.log('element : ', arrelement);
// console.log(arr);

let value = marks.indexOf(45);
// console.log(value);
// Mutating or modifying arrays

// marks.push(34);  // Add the element at the end of the array
// marks.unshift(43);  // add the element in the starting of the array
// marks.pop();    // removes the element from the end of the array
// marks.shift();  // removes the element from the starting of the array
marks.splice(1,2, "hello");
// marks.reverse();
// let marks2 = [1,3,4,567,78,98];
// marks = marks.concat(marks2);
console.log(marks);

let myobj = {
    'name': "yash",
    id: "yashcodes",
    isActive: true,
    marks: [1,2,4,5],
}

// console.log(myobj);
// console.log(myobj.isActive);
// console.log(myobj['id']);