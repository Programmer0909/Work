// var buttonColours = ["red", "blue", "green", "yellow"];
// var gamePattern =[];
// var userClickedPattern = [];

// function nextSequence() {
//     var randomNumber = Math.floor(Math.random() * 4);
//     var randomChosenColour = buttonColours[randomNumber];
//     gamePattern.push(randomChosenColour);

//     $("#" + randomChosenColour).fadeOut(100).fadeIn(100).fadeOut(100).fadeIn(100);
    
//     playSound(randomChosenColour);


// }

// $(".btn").on("click",function (){

//     var userChosenColour = $(this).attr("id");

//     userClickedPattern.push(userChosenColour);

//     playSound(userChosenColour);
    
// })

// function playSound(name) {
//     var audio = new Audio("sounds/" + name + ".mp3");
//     audio.play();
// }

// alert("h");