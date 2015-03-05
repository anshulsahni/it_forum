<?php 
 include("../include/misc.php");
 $reg_no=$_GET['reg_no'];
?>
<?php
	database::connect();
	$non_verify_result=mysql_query("select * from non_verified_member where reg_no='$reg_no'");
	database::disconnect();
	if(mysql_num_rows($non_verify_result)==1)
	{
		$non_verify_result=mysql_fetch_assoc($non_verify_result);
		$sec_key=$non_verify_result['secret_code'];
		$email=$non_verify_result['email'];
	}
?>

<html>
<head>
	<title>IT Forum-Email not verified</title>
	<script type="text/javascript" src="../js/size.js"></script>
	<script type="text/javascript" src="../js/error.js"></script>
	<link rel="stylesheet" type="text/css" href="./css/error.css">
</head>
<body>
	<div id='wrapper'>
		<?php include("../include/header.inc"); ?>
		<div id='container'>
			<div class='error_msg'>
				Your Email Verification is still pending please verify your mail id
				<br>
				Email id: <span class='email_msg'><?php echo $email; ?></span>
				<br>
				<div class='resend_link' onClick="resendMail('<?php echo $reg_no;?>')">Please click here to resend the verifiction link</div>
			</div>

		</div>
		<?php include("../include/footer.inc");?>
	</div>
</body>
</html>

