console.log("Welcome to this website");

let cont = document.querySelector(".no");
cont = document.querySelector(".container");
// cont=cont.childNodes;
// cont=cont.children;
// console.log(cont);

let nodeName = cont.childNodes[3].nodeName;
// nodeName = cont.children[3].nodeName;
let nodeType = cont.childNodes[0].nodeType;
// console.log(nodeName);

// Node types

// 1 is for Element.
// 2 is for Attribute.
// 3 is for Text.
// 8 is for Comment.
// 9 is for Document.
// 10 is for Doctype.

let container= document.querySelector(".container");
// console.log(container.children);
// console.log(container.children[1].children[0].children[0]);

// console.log(container.firstChild)
// console.log(container.firstElementChild)

// console.log(container.lastChild)
// console.log(container.lastElementChild)

// console.log(container.childElementCount);       // Count of child elements

// console.log(container.firstElementChild.parentNode)
// console.log(container.firstElementChild.nextSibling);
// console.log(container.firstElementChild.nextElementSibling.nextElementSibling.nextElementSibling);