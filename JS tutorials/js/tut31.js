console.log("This is tutorial 31.");

class Employee {
	constructor(givenName, givenExperience, givenDivision) {
		this.name = givenName;
		this.experience = givenExperience;
		this.division = givenDivision;
	}

	slogan() {
		return `I am ${this.name} and this company is the best.`;
	}

	joiningYear() {
		return 2022 - this.experience;
	}

	static add(a, b) {
		return a + b;
	}
}

// Yash = new Employee("Yash", 3, "IT");
// console.log(Yash);
// console.log(Yash.slogan());
// console.log(Yash.joiningYear());

// Since there is no element needed for add() method from the constructor so it can be called from the class name itself

// console.log(Employee.add(10, 20));

//   *******************INHERITANCE*********************

// Syntax:-
// class New-Class-Name extends Base-class-Name

class Programmer extends Employee {
	constructor(givenName, givenExperience, givenDivision, language, gitHub) {
		super(givenName, givenExperience, givenDivision);
		this.language = language;
		this.gitHub = gitHub;
	}

	favlang() {
		if (this.language == "python") {
			return python;
		} else {
			return "JavaScript";
		}
	}

	static multiply(a, b) {
		return a * b;
	}
}

rohit = new Programmer("Rohit", 3, "IT", "JavaScript", "Yashcodes");
console.log(rohit);
console.log(rohit.favlang());
console.log(Programmer.multiply(2,3));