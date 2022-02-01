console.log("Welcome to this website");

let a = document;
a=document.all;
// a= document.body;
// a=document.forms;
// a = document.forms[2];

// a=document.links;
// a=document.links[1].href;

Array.from(a).forEach(function(element) {
    console.log(element);
});
// QUIZ: use document.images and document.scripts and print the list of images and scripts on an html page
// console.log(a); 