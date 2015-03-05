<?php
	include('./include/form_elements.php');
	$first_login=new form_elements();
?>
<html>
<head>
	<title>IT Assoction Forum</title>
	<link rel="shortcut icon" href="./imgs/favicon.png">
	<link rel='stylesheet' type='text/css' href='./css/login.css'/>
	<script type="text/javascript" src='./js/jquery.js'></script>
	<script type="text/javascript" src='./js/size.js'></script>

	<script type="text/javascript">
		$(document).ready(function(){
			if(window.innerHeight>=250)
				$('#login_container').css("top",(window.innerHeight-375)/2+'px');
			else
				$('#login_container').css("top","0px");
		});
		$(window).resize(function(){
			if(window.innerHeight>=250)
				$('#login_container').css("top",(window.innerHeight-375)/2+'px');
			else
				$('#login_container').css("top","0px");
		});
	</script>
</head>
<body>
	<div id='wrapper'>
		<?php require_once('./include/header.inc');?>
		<div id='container'>
			<div id='login_container'>
				<span id='sign_span'>Sign In...</span>
				<div id='form_container'>
					<form id='first_login_form' class='form login_form' name='first_login_form' method='POST' action='lgin_verify.php'>
						<table border=0>
							<tr>
								<td>
									<?php if(isset($_SERVER['HTTP_REFERER']) && $_SERVER['HTTP_REFERER']=='http://localhost/it.in/new/forum/login.php'){echo "<span style='color:red; font-size:12px;'>Wrong Username or Password</span>";}?>
									<?php $first_login->drawTextBox('register','register_text','input login_inputs','Enter Register Number','10');?>
								</td>
							</tr>
							<tr>
								<td><?php $first_login->drawPassword('user1','user1_text','input login_inputs password','Enter Password',15)?></td>
							</tr>
						</table>
						<span id='access_a'><a href='./register'>Register to become a member</a></span>
						<div id='first_login_submit_wrapper' class='btn_wrapper'>
							<?php $first_login->drawSubmit('first_login_submit','Log In','first_login_submit_text','login_submit btn');?>
						</div>
					</form>
				</div>
			</div>

		</div>
		<?php require_once('./include/footer.inc');?>

	</div>
</body>
</html>