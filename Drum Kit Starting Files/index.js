// alert("hh");
// document.querySelector("button").addEventListener("click" , re);
// var audio = new Audio("tom-1.mp3");
// audio.addEventListener("canplaythrough", function () {
//     console.log("Sound loaded!");
// });
// audio.play();

for (var i = 0; i < 7; i++) {
  document.querySelectorAll("button")[i].addEventListener("click", function () {
    var key = this.innerHTML;
    makesound(key);
    addAnimation(key);
  });
}

document.addEventListener("keypress" , function(event){
    makesound(event.key);
    addAnimation(event.key);
})


function makesound(key) {
  switch (key) {
    case "w":
      var tom1 = new Audio("tom-1.mp3");
      tom1.play();
      break;
    case "a":
      var tom2 = new Audio("tom-2.mp3");
      tom2.play();
      break;
    case "s":
      var tom3 = new Audio("tom-3.mp3");
      tom3.play();
      break;
    case "d":
      var tom4 = new Audio("tom-4.mp3");
      tom4.play();
      break;
    case "j":
      var crash = new Audio("crash.mp3");
      crash.play();
      break;
    case "k":
      var kick = new Audio("kick-bass.mp3");
      kick.play();
      break;
    case "l":
      var snare = new Audio("snare.mp3");
      snare.play();
      break;

    default:
      break;
  }
}

function addAnimation(key) {
    var active = document.querySelector("."+key);
    active.classList.toggle("pressed");

    setTimeout(function () {
        active.classList.remove("pressed");
    } , 100);
}