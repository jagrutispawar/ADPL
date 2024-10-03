<!DOCTYPE html>
<html>
<body>

<h1> Cyber Security Department</h1>
<h2> student Infromation Form </h2>

<form action="/action_page.php" style="text-align:center">
  <label for="fname">First name:</label>
  <input type="text" id="fname" name="fname" value="John"><br>
  <label for="lname">Last name:</label>
  <input type="text" id="lname" name="lname" value="Doe"><br>
  <label for="prn">PRN Number:</label>
  <input type="text" id="prn" name="prn"><br>
</form>

<form style="text-align:center">
<p> studying in year:</p>
  <input type="radio">
  <label for="html">1st Year</label><br>
  <input type="radio">
  <label for="css">2nd Year</label><br>
  <input type="radio">
  <label for="javascript">3rd Year</label><br>
  <input type="radio">
  <label for="javascript">4thYear</label><br>
  
  <input type="submit" value="Submit">


<p>If you click the "Submit" button, the form-data will be sent to a page called "/action_page.php".</p>

</body>
</html>