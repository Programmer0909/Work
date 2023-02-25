const express = require("express");

const bodyParser = require("body-parser");

const app = express();

app.use(bodyParser.urlencoded({extended:true}));

app.get("/bmicalculator" , function (req, res) {
    res.send("<h1>BMI CALCULATOR </h1>")
    res.sendFile(__dirname + "/bmiCalculator.html");
})

app.post("/bmicalculator" , function (req, res) {
    // console.log(req.body);
    // res.status(200).send(Number(req.body.num1) + Number(req.body.num2));
    // res.send(Number(req.body.num1) + Number(req.body.num2));
    var weight = Number(req.body.weight);
    var height = Number(req.body.height);
    var result = weight / (height*height);
    res.send("The BMI is: " + result);
})

// app.get("/xy" , function (req,res) {
//     res.send("Recieved");
// })

app.listen(3000,function () {
    console.log("Server started");
})