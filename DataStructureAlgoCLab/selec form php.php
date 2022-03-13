
<?php
/**
 * Created by PhpStorm.
 * User: apelmahmud
 * Date: 02/04/2017
 * Time: 3:24 PM
 */



    $serverName = 'localhost';
    $userName = 'root';
    $pass = '';
    $dbname = 'Fifa';

    $conn = new  mysqli($serverName,$userName,$pass,$dbname);

    if($conn->connect_error){

        die("aaa");
    }


$sql = "SELECT * FROM manager ";
$result = $conn->query($sql);
/*
while ($row = $result->fetch_assoc()){

        echo $row['manager_id']. " " .$row['manager_name']. "  ". $row['country'] . " ". $row['Date_of_Birth']. "<br>";
*/




echo "<table border='1px solid gray'>

        <tr> 
        <th> Empltgsfgsoyees_id </th>
        <th>First Name </th>
        <th>Country </th>
        <th>Phone Number </th>
        <th>Job ID </th>
        <th>Salary </th>
        
</tr>";

while ($row = $result->fetch_assoc()){


    echo "<tr> 

      <td>".$row['manager_id']."</td>
      <td>".$row['manager_name']."</td>
      <td>".$row['country']."</td>
      <td>".$row['Date_of_Birth']."</td>
      <td>no job</td>
        <td>0000</td>
      
      

    </tr>";
}


echo "</table>";












/*$serverName = 'localhost';
$userName = 'root';
$password = '';
$dbname = 'Discount';


$con =  new  mysqli($serverName,$userName,$password, $dbname);

if($con->connect_error)
    die("connect fail".$con->connect_error);

else
    echo "succeess"*/


?>