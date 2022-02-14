console.log("Welcome to tut 24");

let today = new Date();
console.log(typeof today);

let otherDate = new Date("6-28-2002 05:45:02");
// otherDate = new Date("February 24, 2002 08:23:45");
// otherDate = new Date("05/06/2003");

console.log(otherDate);
let a;
a = otherDate.getDay();
a = otherDate.getDate();
a = otherDate.getMinutes();
a = otherDate.getSeconds();
a = otherDate.getHours();
a = otherDate.getTime();
a = otherDate.getMilliseconds();
a = otherDate.getMonth();
// console.log(a);

otherDate.setDate(23);
otherDate.setMonth(4);
otherDate.setFullYear(2030);
otherDate.setMinutes(2);
otherDate.setSeconds(3);
otherDate.setHours(1);
console.log(otherDate);
