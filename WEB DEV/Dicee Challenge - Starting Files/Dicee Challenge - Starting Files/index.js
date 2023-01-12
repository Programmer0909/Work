var randomNumber1 = Math.ceil(Math.random() * 6);
var randomNumber2 = Math.ceil(Math.random() * 6);
// alert(randomNumber1);

var c1 = document.getElementsByClassName("img1")[0];
var c2 = document.getElementsByClassName("img2")[0];

if(     randomNumber1==1){c1.setAttribute("src" , "dice1.png");}
else if(randomNumber1==2){c1.setAttribute("src" , "dice2.png");}
else if(randomNumber1==3){c1.setAttribute("src" , "dice3.png");}
else if(randomNumber1==4){c1.setAttribute("src" , "dice4.png");}
else if(randomNumber1==5){c1.setAttribute("src" , "dice5.png");}
else if(randomNumber1==6){c1.setAttribute("src" , "dice6.png");}

if(     randomNumber2==1){c2.setAttribute("src" , "dice1.png");}
else if(randomNumber2==2){c2.setAttribute("src" , "dice2.png");}
else if(randomNumber2==3){c2.setAttribute("src" , "dice3.png");}
else if(randomNumber2==4){c2.setAttribute("src" , "dice4.png");}
else if(randomNumber2==5){c2.setAttribute("src" , "dice5.png");}
else if(randomNumber2==6){c2.setAttribute("src" , "dice6.png");}

if (randomNumber1 > randomNumber2) {
    document.querySelector("h1").textContent = "🚩Player 1 Wins!"
}
else if (randomNumber2 > randomNumber1) {
    document.querySelector("h1").textContent = "Player 2 Wins!🚩"
}
else{
    document.querySelector("h1").textContent = "Draw!"
}