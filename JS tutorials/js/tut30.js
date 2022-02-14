console.log("This is tut 30.")

const proto = {
    slogan: function (){
        return "This company is the best."
    },

    changeName: function (newName){
        this.name= newName;
    }
}

const yash = Object.create(proto);
yash.name = "Yash";
yash.role = "Programmer";
console.log(yash);
