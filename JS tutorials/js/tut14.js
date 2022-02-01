console.log("Welcome to this tutorial");

/*

element selector:

1. single element selector
2. multiple element selector

*/

// 1. single element selector

let element = document.getElementById("first");
// element= element.className;
// element= element.childNodes;
// element=element.parentNode;
// element.style.color="red";
// element.innerText="yash is a good boy";
// element.innerHTML="<b>yash is a good boy</b>";
console.log(element);
// console.log(element.innerHTML);
// console.log(element.innerText);

// let sel=document.querySelector("#first");
// sel=document.querySelector(".red");
// sel=document.querySelector("h1");
// sel=document.querySelector("div");
// sel.style.color="green"
// console.log(sel);

// multiple element selector

let elems = document.getElementsByClassName("child");
// elems = document.getElementsByClassName("container");
// console.log(elems[3]);
// console.log(elems[0].getElementsByClassName("child"));
// elems=document.getElementsByTagName("div");
// console.log(elems);

// for (let index = 0; index < elems.length; index++) {
//     const element = elems[index];
//     console.log(element);
//     element.style.color="orange";
// }
// Array.from(elems).forEach(function(element){
//     console.log(element);
//     element.style.color="orange";
// });

// let heading =  document.getElementById("heading");
// console.log(heading);

// heading.style.fontSize = "50px";