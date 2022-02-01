console.log("We are at tut 9");

// General loops: for, while, do while

// let a= 34;
// a+=1;
// a++;
// console.log(a);

// for (let i = 0; i < 100; i++) {
//   console.log(i);
// }

// let j = 0;
// while (j < 10) {
//   console.log(j + 1);
//   j++;
// }

// let k = 0;

// do {
//     if (k === 5) {
//         k+=1;
//         continue;
//     }
//     console.log(k + 1);
//   k++;
// } while (k < 10);

// let arr = [2,3,4,5,8,9];

// for (let i = 0; i < arr.length; i++) {
//     const element = arr[i];
//     console.log(element);
    
// }

// arr.forEach(function(element, index, array){
//     console.log(element,index,array);
// });

let obj={
    name : "yash",
    age : 19,
    type: "confused personality",
    OS : "ubuntu"
}

for(let key in obj){
    console.log(`The ${key} of object is ${obj[key]}`);
}