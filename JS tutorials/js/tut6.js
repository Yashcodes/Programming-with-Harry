console.log("Hello!");

const name = "yash";
const greeting = "Good Morning";
// console.log(greeting + " " + name);

let html;
html = "<h1> This is Heading </h1>" + "<p> This is my Para</p>";

html = html.concat("this", " str2");
// console.log(html);
// console.log(html.length);
// console.log(html.toLowerCase());
// console.log(html.toUpperCase());

// console.log(html[2]);
// console.log(html.indexOf('is'));
// console.log(html.lastIndexOf('<'));
// console.log(html.charAt('30'));
// console.log(html.charCodeAt('30'));
// console.log(html.endsWith('str2')); // Returns Boolean value
// console.log(html.includes('is'));   // Returns Boolean value
// console.log(html.substring(0,6));   // it doesnot accepts negative value and here, it gives the string with indexing starts with 0 and will go to (n-1) i.e., 6-1 = 5
// console.log(html.slice(-5));        // returns the last 5 string values
// console.log(html.slice(0,6));
// console.log(html.split("is"));  // find the position where "is" found and then split there and make the string an array
// console.log(html.replace('this','it'));
// console.log(html.search("this"));

// ***************Template Literals*****************
let fruit1 = "Orange\'";
let fruit2 = "Apple";
let myHtml = `Hello ${name}
             <h1> This is "my" heading</h1>
             <p> You like ${fruit1} and ${fruit2}

            `;

document.body.innerHTML = myHtml;
