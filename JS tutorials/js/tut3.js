console.log("Hello world");

// Variables in javascript
// var, let, const

var name= "yash";
var channel;
var marks = 34;
marks =0;
// channel= 'codewithharry'
console.log(name,channel,marks);
// Rukes for creating js variables
/*
1. cannot start with numbers
2. can start with letter, numbers, _ or $
3. variable names are case sensitive
*/

var city= 'Delhi';
console.log(city);
const ownersName="yash";
// ownersName="harry";       // cannot overwrite the value of const variable
console.log(ownersName);
const fruit= "orange";

{
    let city = "Rampur";
    city= "kolkata";
    console.log(city);
}
console.log(city);

const arr1 = [12,24,5,36,4,74];
// arr1.pop();
// arr1.push(23);
console.log(arr1);

/* Most common programming case types

1. camelCase
2. kebab-case
3. snake_Case
4. PascalCase

*/