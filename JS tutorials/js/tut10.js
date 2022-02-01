console.log("hello");

// let i =234;
// if(1){
//     let i =234;
//     console.log(i)
// }

// console.log(i);

// function ui(name)
// {
//     let i = 9;
//     console.log(i);
//     return `This is a ${name} ui`;
// }

// console.log(ui("harry"), i)


// function greet(name, thank) {
// 	// console.log(`Happy Birthday ${name} how i wish I coult fly to you right now and be with you on this special day of yours. But remember, my good wishes are always with you. ${thank}!`);

// 	let greeting = `Happy Birthday ${name} how i wish I coult fly to you right now and be with you on this special day of yours. But remember, my good wishes are always with you. ${thank}!`;

// 	// return 1;
// 	return greeting;
// }

// if we want to return the value of function then we simply write return and assign the greet function in any variable

// Another syntax of function

// here we store the whole function inside a variable then that variable acts like a function

let mygreet = function (name, thank) {
	let greeting = `Happy Birthday ${name} how i wish I coult fly to you right now and be with you on this special day of yours. But remember, my good wishes are always with you. ${thank}!`;

	return greeting;
};

let name = "skillf";
let name2 = "rohan";

// let msg = greet(name, "Thanks a lot");
let msg = mygreet(name, "Thanks a lot");
console.log(msg);

const myobj = {
	name: "yash",
	game: function () {
		return "GTA";
	},
};

console.log(myobj.game());

arr = ["fruit", "vegetable", "furniture"];
arr.forEach(function (element, index, array) {
	console.log(element, index);
});

for(let key in myobj){
	console.log(key, myobj[key]);
}