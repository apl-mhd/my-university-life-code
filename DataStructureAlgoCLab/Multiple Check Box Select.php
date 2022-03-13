$jobArray =  $_GET['job'];  //checkbox


foreach ($jobArray as  $key => $val) // convert to arry
    $arr2[$key] = $val;

$in = join("','", $arr2); // join array


$con =  new  mysqli($serverName,$uName,$pass,$dbName);

if($con->connect_error)
    die("aaa".$con->connect_error);


$sql  = "SELECT * FROM employees where  job_id in('$in')";