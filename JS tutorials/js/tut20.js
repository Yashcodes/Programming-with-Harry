console.log("This is tut 20")

// Sets a key-value pair to the local storage
// localStorage.setItem("Name", "Yash");
// localStorage.setItem("Name2", "Rohit");

// localStorage.clear();        // Clears the entire local storage

// Clear a particular key-value pair
localStorage.removeItem("Name");

// Retrieve an item from localStorage
let name= localStorage.getItem("Name");
let name2= localStorage.getItem("Name2");
console.log(name, name2);

// Adding an array to the local storage

// let impArray= ['adrak', 'pyaz', 'bhindi'];
// localStorage.setItem('Sabji', JSON.stringify(impArray));

let getSabji= JSON.parse(localStorage.getItem('Sabji'));
console.log(getSabji);


// ******************Session Storage********************


sessionStorage.setItem("Name", "Yash");
sessionStorage.setItem("Name2", "Rohit");
let impArray= ['adrak', 'pyaz', 'bhindi'];
sessionStorage.setItem('Sabji', JSON.stringify(impArray));