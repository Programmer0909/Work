// alert("h"); 

const express = require("express");

const app = express();

app.get("/" , function (req , res) {
    // console.log(req);
    res.send("<h1> chale </h1>")
})

app.get("/contact" , function (req,res) {
    res.send("contact me  prathampali2002@gmail.com");
})

app.get("/about" ,function (req,res) {
    res.send("i am an ");
})

app.listen(3000,function () {
    console.log("Server started at port 3000");
})