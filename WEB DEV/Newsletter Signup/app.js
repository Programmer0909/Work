const express = require("express");
const bodyParser = require("body-parser");
const request = require("request");
const app = express();
app.use(bodyParser.urlencoded({extended:true}));

app.get("/" , function (req,res) {
    res.sendFile(__dirname+"/signup.html");
})

app.post("/" , function (req,res) {
    const fname = req.body.fname;
    const lname = req.body.lname;
    const email = req.body.email;

})








app.listen(3000,function () {
    console.log("Server started at port 3000")
})


































// id: facf0ddb974f6a5d8c5b1d69ab7c3678-us21

// list id : 10c118d5c0