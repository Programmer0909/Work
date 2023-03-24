const express = require("express");

const bodyParser = require("body-parser");

const app = express();

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));
var items =["Buy Food" , "Cook Food" , "Eat Food"];



app.set("view engine", "ejs");

app.get("/", function (req, res) {

  // res.send("GET REQUEST SUCCESSFUL");

  var today  = new Date();

  var options = {
    weekday : "long" ,
    day : "numeric" , 
    month : "long" ,
    // year : "numeric"
  };

  var day = today.toLocaleDateString("en-us" , options);

  res.render("list" , {kindOfDay : day , newitem : items});

});

app.post("/" , function (req,res) {
  var item = req.body.newitem;
  items.push(item);

  res.redirect("/");
})


app.listen(3000, function () {

  console.log("Server started at port 3000");

});
