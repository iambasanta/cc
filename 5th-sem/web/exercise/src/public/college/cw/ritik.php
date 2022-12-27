<?php 
    $errorname =$errorphone = $erroremail = $errorgender = $errorhobby= '';
    // print_r($_SERVER);
    if($_SERVER['REQUEST_METHOD'] == 'POST'){
        dd($_POST);
        $name = $_POST['name'];
        $phone = $_POST['phone'];
        $email= $_POST['email'];
        if($name == ""){
            $errorname = "Name cannot be blank";
            
        }
        // this checks if the prefix of the username starts with prime number or not
        if($name != "" && (!preg_match("/^[prime]\w[0-9]*/i", $name))){
            $errorname = "Name must start with prefix prime";
        }
        if($phone == ""){
            $errorphone = "Phone cannot be blank";
        }
        // this is use to check if the phone number starts with 97 or 98 and must be 10 digits
        if($phone != "" && (!preg_match("/^[9][7-8][0-9]{5,15}$/", $phone))){
            $errorphone = "Phone must start be 97 or 98. and must be exactly 10 digits";
        }
        
        if($email == ""){
            $erroremail = "Email cannot be blank";
        }
        // validate email
        if(!filter_var($email , FILTER_VALIDATE_EMAIL)){
            $erroremail = "Invalid Email";
        }
        if(empty($_POST['Gender'])){
            $errorgender = "Gender is required";
        }
        if(empty($_POST['code'])){
            $errorhobby = "Hobby is required";
        }
    }

    function dd($value){
        echo "<pre>";
        var_dump($value);
        echo "</pre>";
        die();
    }
?>

<!-- <?php $_SERVER['PHP_SELF'];?> -->


<form action="<?php $_SERVER['PHP_SELF'];?>" method="POST">
    <label for="name">Name</label><br>
    <input type="text" name="name" id="name" ><br><span style="color:red;font-size:10px;"><?php echo $errorname; ?></span><br>
    <label for="phone">Phone</label><br>
    <input type="number" name="phone"><br><span style="color:red;font-size:10px;"><?php echo $errorphone; ?></span><br>
    <label for="email">Email</label><br>
    <input type="email" name="email"><br><span style="color:red;font-size:10px;"><?php echo $erroremail; ?></span><br>
    <label for="gender">Gender</label>
    <input type="radio" value="Male" name="Gender"> Male &nbsp; <input type="radio" value="Female" name="Gender">Female<br><span style="color:red;font-size:10px;"><?php echo $errorgender; ?></span>
    
    <br><label for="code">Hobies</label>
    <input type="checkbox" name="code" value="Coding"> Coding &nbsp; <input type="checkbox" value="Dance" name="code"> Dance<br><span style="color:red;font-size:10px;"><?php echo $errorhobby; ?></span>
			
    <br><input type="submit">

</form>
