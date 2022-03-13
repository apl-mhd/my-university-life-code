
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
$dbname = 'am';

$conn = new  mysqli($serverName,$userName,$pass,$dbname);

if($conn->connect_error){

    die("aaa");
}

$name = $_GET['name'];
$insName = $_GET['insName'];
$address = $_GET['address'];



//$sql = "INSERT INTO info(name) values ( '1' )";


$sql = "INSERT INTO info(name,inst, add)

                             values (' ".$name." ',  ' ".$name." ' , ' ".$address." ') ";

/*$sql = "INSERT INTO info(name, inst, add)

                             values (' ".$name." ', ' ".$insName."', ' ".$address." ' ) ";*/


if ($conn->query($sql) == true)
    echo "insert success";

    else
        echo "Error: " . $sql . "<br>" . $conn->error;





?>