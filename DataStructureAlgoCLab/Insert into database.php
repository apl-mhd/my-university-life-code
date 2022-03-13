<?php
/**
 * Created by PhpStorm.
 * User: apelmahmud
 * Date: 02/04/2017
 * Time: 3:24 PM
 */


    $serverName = 'localhost';
    $userName = 'root';
    $password = '';
    $dbname = 'Discount';


$con =  new  mysqli($serverName,$userName,$password, $dbname);

if($con->connect_error)
    die("connect fail".$con->connect_error);

/*    echo "connect success";*/

$fname = $_POST['fname'];
$lname = $_POST['lname'];
$email = $_POST['email'];
$pass = $_POST['pass'];
$phone = $_POST['phone'];



$date = date('Y-m-d');




$sql = "INSERT INTO userinfo(firstname, lastname, email, pass, phone,regdate)

                             values (' ".$fname."', ' ".$lname."','".$email."', '".$pass."', ' ".$phone." ' , ' ".$date." ')";
/*
$sql = "INSERT INTO userinfo(firstname, lastname, email, pass, phone)

                             values ('.aa.','aa','apl@gmail.com', 'aa','111')";*/



if ($con->query($sql) === true)

    echo  "insert success";
else
    echo "fail" . $sql . $con->error;

$con->close();

header("Location: index.php", true, 301);





/*$sql = "INSERT INTO userinfo ()"*/





/*
$sql = "INSERT INTO userinfo('firstname', 'lastname','email', 'pass', 'phone', 'usertype') VALUES
                            ($_GET['fname'],)
        ";*/
/*

INSERT INTO `userinfo`(`id`, `firstname`, `lastname`, `email`, `pass`, `phone`, `usertype`)
VALUES ([value-1],[value-2],[value-3],[value-4],[value-5],[value-6],[value-7])*/



?>

<?php
$conn->close();


?>