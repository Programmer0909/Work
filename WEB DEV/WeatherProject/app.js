const express = require("express");
const http = require("https");
const bodyParser = require("body-parser");
const app = express();
app.use(bodyParser.urlencoded({ extended: true }));
app.get("/", function (req, res) {
  res.sendFile(__dirname + "/index.html");
});
app.post("/", function (req, res) {
//   console.log();
  const city = req.body.city;
  const url ="https://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=e8f064c3b8a78085a12b329aec9faeb3&units=metric";

  http.get(url, function (response) {
    // console.log(response.statusCode);
    response.on("data", function (data) {
      // console.log(data)
      // console.log(JSON.parse(data));
      const weatherData = JSON.parse(data);

      const temp = weatherData.main.temp;
      const desc = weatherData.weather[0].description;
      const icon =
        "https://openweathermap.org/img/wn/" +
        weatherData.weather[0].icon +
        "@2x.png";

      // document.querySelector("img").setAttribute("src" , icon);

      // console.log(icon);

      // res.send("<h1>The weather is currently " + desc + "</h1> <h1> The weather at bhopal is " + temp + " degree celceus  </h1>")

      // We can also use res.write()

      res.write("<h1>The weather is currently " + desc + "</h1>");
      res.write(
        "<h1> The weather at " + city + " is " + temp + " degree celceus  </h1>"
      );
      res.write("<img src =" + icon + ">");
      res.send();
    });
  });
});

app.listen(3000, function () {
  console.log("Server is up and running");
});
