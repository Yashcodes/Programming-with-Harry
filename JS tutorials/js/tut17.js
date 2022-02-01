console.log("This is tutorial 17 on events");

// // ******************CLICK EVENT*********************

// document.getElementById("heading").addEventListener('click', function(e){
//     let variable;
//     console.log("You have clicked the heading!!");
//     // console.log(e);
//     variable = e.target;
//     variable= e.target.className;
//     variable= e.target.id;
//     variable= e.target.classList;

//     // let arr =Array.from(variable);
//     // console.log(arr);

//     variable= e.offsetX;
//     variable= e.offsetY;
//     variable= e.clientX;
//     variable= e.clientY;
//     console.log(variable);
//     // location.href= "//codekaro.in";
// });

// ******************MOUSEOVER and MOUSEOUT EVENT *********************

document.getElementById("heading").addEventListener('click', function(e){
    let variable;
    console.log("You have clicked the heading!!");
    // console.log(e);
    variable = e.target;
    // variable= e.target.className;
    // variable= e.target.id;
    variable= e.target.getAttribute("class");
    // variable= e.target.classList;

    // // let arr =Array.from(variable);
    // // console.log(arr);

    // variable= e.offsetX;
    // variable= e.offsetY;
    // variable= e.clientX;
    // variable= e.clientY;
    console.log(variable);
    // location.href= "//codekaro.in";
});