console.log("This is s tutorial 16");

let element = document.createElement("li");
// console.log(element);

element.className = "childul";
element.id = "created";
element.setAttribute("title", "mytitle");

let ul = document.querySelector("ul.this");
ul.appendChild(element);

// after inserting the node "li" inside the "ul", we have to include something like text into the li. For this,
//  we have two ways:-
//  1. by innerText or innerHTML
//  2. by creating another text node and then include(or append) into the element created

// first way:- By innerText or innerHTML

// element.innerText="This is inserted by innerText.";
// element.innerHTML="<b>This is created by innerHTML.</b>";

// second by :- creating another text node

let text = document.createTextNode("This is created li.");
element.appendChild(text);

// Now learn about how to replace an element with others, for this

let el2 = document.createElement("h3");
el2.className = "el2";
el2.id = "el2";
// console.log(el2);

let headNode = document.createTextNode("This is created heading.");
el2.appendChild(headNode);

element.replaceWith(el2);

// here is another way of replacing elements which are the child nodes of any parent node...............This is called replaceChild method

// firstly grab the parent node and then replace its childs

let myul = document.getElementById("myul");

// firstly pass the older element in replaceChild which was previously created

myul.replaceChild(element, document.getElementById("fui"));

myul.removeChild(document.getElementById("lui"));

el2.remove();

let gtA = el2.getAttribute("class");
gtA = el2.hasAttribute("class");
console.log(el2, gtA);

el2.removeAttribute("id");
el2.setAttribute("title", "myel2title");
console.log(el2);

// Quiz:-

// create a heading  element with text "go to CodeWithHarry" and create an "a" tag outside it with href = "https://www.codewithharry.com"