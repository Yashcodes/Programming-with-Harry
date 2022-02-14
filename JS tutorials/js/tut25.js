// Creating an element and inserting setAttribute

let divElem = document.createElement("div");
divElem.setAttribute("id", "elem");
divElem.setAttribute("class", "elem");
divElem.setAttribute(
	"style",
	"border:2px solid black; width:180px; margin:44px; padding:22px"
);

// A text node for divElem and inserting this text node into the divElem
let val = localStorage.getItem('text');
let text;
if(val==null){
    text = document.createTextNode("This is an editable div");
}
else {
    text = document.createTextNode(val);
}
divElem.appendChild(text);

// Grab the element into which the created node to be inserted and append it
let container = document.querySelector(".container");
let first = document.getElementById("first");

container.insertBefore(divElem, first);
// console.log(divElem, container, first)

divElem.addEventListener("click", function () {
    let noTextArea = document.getElementsByClassName("textarea").length;
    if(noTextArea==0){
        let html = elem.innerHTML;
        divElem.innerHTML = `<textarea class= "textarea" id="textarea">${html}</textarea>`;
    }
    let textarea = document.getElementById("textarea");
    textarea.addEventListener("blur", function(){
        elem.innerHTML = textarea.value;
        localStorage.setItem("text", textarea.value);
    })
});


