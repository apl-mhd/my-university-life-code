<?php
/*
SELECT post.postdesc, location.locationname,category.categoryname FROM post 
JOIN location ON location.id = post.locationid
JOIN category ON post.categoryid = category.id
WHERE postid = 41; */


/**
 * Created by PhpStorm.
 * User: apelmahmud
 * Date: 02/04/2017
 * Time: 3:24 PM
 */
include('connect.php');
include('uploadscript.php');
include ('debug.php');
session_start();


$category = $_POST['category'];
$discountrate = $_POST['discount'];
$expire = $_POST['expire'];
$postdesc = $_POST['postinfo'];
$location = $_POST['location'];
$category = $_POST['category'];


$userid =  $_SESSION['userid'];
$date = date('Y-m-d');



/*query for locationid in location table*/
$sqlLocation = "SELECT * FROM  location where  locationname = '$location' ";

$queryLocation = $con->query($sqlLocation);

$rowLocation = $queryLocation->fetch_assoc();

/*Query for category id in category table*/


$sqlCategory = "SELECT * FROM  category where  subcategory = '$category' ";

$queryCategory = $con->query($sqlCategory);
$rowCategory = $queryCategory->fetch_assoc();

if($con->query($sqlCategory) === false)
    echo  $con->error;


if($queryCategory->num_rows > 0)
    echo  $rowCategory['id']."<br>";


 else
    show($category);







$sql = "INSERT INTO post(userid, locationid , categoryid, postdesc, expire, discountrate,postdate,imglink)

                             values (' ". $userid. " ' , ' ".$rowLocation['id'] ."' , ' ".$rowCategory['id']." ' ,' ".$postdesc."', ' ".$expire."', ' ".$discountrate." ', '".$date ."', ' " . $fileNameNew . " ' )";



if ($con->query($sql) === true)

    echo  "insert success";
else

    show($category['category']);


?>

<?php
$con->close();


?>