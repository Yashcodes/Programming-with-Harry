console.log("This is tutorial 27.");

// Objects literals for creating ojects
let car = {
	maruti: "Maruti 800",
	topSpeed: 120,
	run: function run() {
		console.log("Car is running");
	},
};

// We have already seen constructors like this
// new date();

// Creating a constructor for cars
function generalCar(givenName, givenSpeed) {
	this.name = givenName;
	this.topSpeed = givenSpeed;
	this.run = function () {
		console.log(`${this.name} is running`);
	};
	this.analyze = function () {
		console.log(
			`This car is slower by ${200 - this.topSpeed} kmph than Mercedes.`
		);
	};
}

// Here, we are creating objects and passing parameters to the constructor
car1 = new generalCar("Nissan", 120);
car2 = new generalCar("Mercedes", 150);
car3 = new generalCar("Ferrari", 180);

console.log(car1, car2, car3);
