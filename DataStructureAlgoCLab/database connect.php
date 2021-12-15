
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
    $dbname = 'Discount';

    $con = new  mysqli($serverName,$userName,$pass,$dbname);

    if($con->connect_error){

        die("connect fail");
    }



?>