<?php
	include ($_SERVER['DOCUMENT_ROOT']."/itforum/include/php_const.php");
?>
<?php
	$file = $_SERVER['PHP_SELF'];

	if($file==file_constant."/login.php" || $file==file_constant."/register/index.php" || $file==file_constant."/regsiter/email_verify.php" || $file==file_constant."/error/email_not_verified.php" || $file==file_constant."/error/account_disabled.php")
	{
		echo "<head>";
		echo "	<style type=\"text/css\">";
		echo "		#footer{position: relative; height: 50px;	margin:0px auto; background-color:#2c3747;}";
		echo "		.footer_elements{position: relative; color:#fff; display: table;}";
		echo "		#fb{top:10px; margin-left:15px; margin-right:auto;}";
		echo "		#fb a{text-decoration:none; color: #fff;}";
		echo "		#copywright{margin-left:auto; margin-right:15px; top:-5px;}";
		echo "	</style>";
		echo "	</head>";
		echo "	<div id='footer'>";
		echo "	<div id='fb' class='footer_elements'><a href='https://www.facebook.com/'>Share The Link On facebook</a></div>";
		echo "	<div id='copywright' class='footer_elements'>&copy; IT Association</div>";
		echo "	</div>";
	}
	else if ($file==file_constant."/member/index.php")
	{
		echo "		<head>";
		echo "		<style type=\"text/css\">";
		echo "			#footer{position: relative; height: 50px;	margin:0px auto; background-color:#2c3747;}";
		echo "			.footer_elements{position: relative; color:#fff; display: table;}";
		echo "			#links_wrapper{margin:0px auto;}";
		echo "			#links_wrapper ul{list-style-type: none; display: inline-block;}";
		echo "			#links_wrapper ul li{list-style-type: none; display: inline-block;  padding: 0px 15px;}";
		echo "			#links_wrapper ul li a{text-decoration: none; color:#fff;}";
		echo "			#links_wrapper ul li a:hover{text-decoration: underline;}";
		echo "			#fb{top:10px; margin-left:15px; margin-right:auto;}";
		echo "			#fb a{text-decoration:none; color: #fff;}";
		echo "			#copywright{margin-left:auto; margin-right:15px; top:-25px}";
		echo "		</style>";
		echo "		</head>";

		echo "		<div id='footer'>";
		echo "			<div id='fb' class='footer_elements'><a href='https://www.facebook.com/'>Share The Link On facebook</a></div>";
		echo "			<div id='links_wrapper' class='footer_elements'>";
		echo "				<ul>";
		echo "					<li><a href=\"../member\">HOME</a></li>";
		echo "					<li><a href=\"./profile_settings\">SETTINGS</a></li>";
		echo "					<li><a href=\"./policy.php\">POLICY</a> </li>";
		echo "					<li><a href=\"./feedback\">FEEDBACK</a></li>";
		echo "					<li><a href=\"./complaint\">COMPLAINT</a></li>";
		echo "					<li><a href=\"./contact\">CONTACT</a></li>";
		echo "				</ul>";
		echo "			</div>";
		echo "			<div id='copywright' class='footer_elements'>&copy; IT Association</div>";
		echo "		</div>";
	}

	else if($file==file_constant."/member/feedback/index.php" || $file==file_constant."/member/complaint/index.php" || $file==file_constant."./member/profile_settings/index.php")
	{
		echo "		<head>";
		echo "		<style type=\"text/css\">";
		echo "			#footer{position: relative; height: 50px;	margin:0px auto; background-color:#2c3747;}";
		echo "			.footer_elements{position: relative; color:#fff; display: table;}";
		echo "			#links_wrapper{margin:0px auto;}";
		echo "			#links_wrapper ul{list-style-type: none; display: inline-block;}";
		echo "			#links_wrapper ul li{list-style-type: none; display: inline-block;  padding: 0px 15px;}";
		echo "			#links_wrapper ul li a{text-decoration: none; color:#fff;}";
		echo "			#links_wrapper ul li a:hover{text-decoration: underline;}";
		echo "			#fb{top:10px; margin-left:15px; margin-right:auto;}";
		echo "			#fb a{text-decoration:none; color: #fff;}";
		echo "			#copywright{margin-left:auto; margin-right:15px; top:-25px}";
		echo "		</style>";
		echo "		</head>";

		echo "		<div id='footer'>";
		echo "			<div id='fb' class='footer_elements'><a href='https://www.facebook.com/'>Share The Link On facebook</a></div>";
		echo "			<div id='links_wrapper' class='footer_elements'>";
		echo "				<ul>";
		echo "					<li><a href=\"../../member\">HOME</a></li>";
		echo "					<li><a href=\"../profile_settings\">SETTINGS</a></li>";
		echo "					<li><a href=\"../policy.php\">POLICY</a> </li>";
		echo "					<li><a href=\"../feedback\">FEEDBACK</a></li>";
		echo "					<li><a href=\"../complaint\">COMPLAINT</a></li>";
		echo "					<li><a href=\"../contact\">CONTACT</a></li>";
		echo "				</ul>";
		echo "			</div>";
		echo "			<div id='copywright' class='footer_elements'>&copy; IT Association</div>";
		echo "		</div>";
	}
?>


