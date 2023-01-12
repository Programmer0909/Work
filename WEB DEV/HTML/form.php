<?php 
if(isset($_POST['fname'])){


	$server = "localhost";

  $username = "root";

  $password = "";

  $con = mysqli_connect($server, $username, $password);
  $fname=$_POST['fname'];
  $lname=$_POST['lname'];

  $sql="INSERT INTO `test`.`table1` VALUES (`$fname`, `$lname`)";
  if ($con->query($sql)==true) {
		echo "Successfully Inserted ";
	}
	else {
		echo "ERROR $sql <br> . $con->error";
	}}
?>



<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Registration</title>
  <link rel="stylesheet" href="C:\Users\LENOVO\OneDrive\Desktop\c++\hhj\WEB DEV\CSS\styles.css">
  </head>



  <body>
    <form action="form.php" method="POST">
      First Name : <input type="text" required name="fname" /><br /><br />
      Last Name : <input type="text" required name="lname" /><br /><br />

      <input type="submit" value = "register!">
    </form>
  </body>
</html>
