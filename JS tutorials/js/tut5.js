// type conversion 

console.log("Welcome to tut5");

let myVar;
myVar= String(34);
// console.log(myVar, typeof myVar);

let booleanVar= String(true);
// console.log(booleanVar, typeof booleanVar);

let date= String(new Date());
// console.log(date, typeof date);

let arr  = String([1,2,34,5,6,6]);
// console.log(arr.length, typeof arr);

let i = 8;
// console.log(i.toString(), typeof i.toString());

let stri = Number("3443");
stri = Number("344d3");
stri = Number(true);
stri = Number([1,2,3,4,5,6,7,8,9]);
// console.log(stri, typeof stri);

// let number = Number('34.098');
let number = parseInt('34.098');
// let number = parseFloat('34.7594');
console.log(number.toFixed(3), typeof number);

// type coercion

// let mystr =  "698";
let mystr =  Number("698");
let mynum =34;

console.log(mystr+mynum);