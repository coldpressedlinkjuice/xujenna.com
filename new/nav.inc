<html>
<head>
	<!-- Latest compiled and minified CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">

<!-- Optional theme -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">

<link href="../../navbar-fixed-side.css" rel="stylesheet" />


<link href="../../style.css" rel="stylesheet">
<script src="../../jquery-3.3.1.js"></script>
<!-- Latest compiled and minified JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>

<script type='text/javascript'>

// Jenna is looking at the wrong code what are you talking about i'm looking at this!!!!!!
// look at the code on 53964.org, it is not the same oka y let me try again
$(document).ready(function() {
	$(document.getElementById(sessionStorage.activeItem)).collapse('show');

	//when a group is shown, save it as the active accordion group
	$("#accordion2")
	.on('click', '.collapse a', function() {
		sessionStorage.activeItem = $(this).closest(".collapse")[0].id;
	});
});
</script>

<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>+/- the portfolio of jenna xu</title>

</head>
<body>
<div class="container-fluid">
  <div class="row">
    <div class="col-sm-3 col-lg-2">
      <nav class="navbar navbar-default navbar-fixed-side">
  <div class="container-fluid">
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="/ABOUT/index.php"><i>+/- jenna xu</i></a>
    </div>
       <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
<!--       <ul class="nav navbar-nav">
 -->
<br>
<div class="accordion" id="accordion2">
	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#ITP-nav" data-toggle="collapse" data-parent="#accordion2"><div id="section-title">@ NYU ITP</div></a>
	<ul style="list-style:none;" class="collapse" id="ITP-nav">
		<li><a href="http://xujenna.com/ig_analyzer/" target="new">Instagrammed Markers of Depression</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/9e391d656fc95eb1dea4bc330cd34cc7/" target="new">Mindwandering Study #2</a></li>
		<li><a href="http://xujenna.com/ITP/PupilTracker/index.php">Mindwandering Study #1</a></li>
		<li><a href="/ITP/GoodVibes/index.php" onclick="do_click();">Good Vibrations</a></li>
		<li><a href="/ITP/Jukebox/index.php" onclick="do_click();">Photo Jukebox</a></li>

	</ul>
	</li>

	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#dataviz-nav" data-toggle="collapse" data-parent="#accordion2"><div id="section-title">DATA VISUALIZATION</div></a>
	<ul style="list-style:none;" class="collapse" id="dataviz-nav">
		<li><a href="https://xujenna.github.io/sometimesbeautiful/" target="new">CPH Air Pollution Data: July 28, 2016</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/117f1f06a14f4d5cd473a2ed408c3f93/" target="new">Authentication is Required.</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/32b4b11f1b25a5cf3493fd9308e1e735/" target="new">Deaths by Firearms, 2014</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/25db2af0bf59950d7390ceeba187df42/" target="new">U.S. Mass Shootings, 1982-2016</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/84a86dec213930ef8948448242977254/" target="new">Leading Causes of Death in NYC, 2011</a></li>
		<li><a href="http://bl.ocks.org/xujenna/raw/b792f42955a94ec2712e26fcfa032bbf/" target="new">Chicago Gun Traces</a></li>
<!-- 		<li><a href="http://www.53964.org/index.php?/info/of-21-million-ongoing/" onclick="do_click();">Of 2.1 Million</a></li> -->
	<!-- <li><a href="http://www.53964.org/index.php?/info/all-work-and-no-pay/" onclick="do_click();">All Work and No Pay</a></li>
	 --></ul>
	</li>


	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#ASH-nav" data-toggle="collapse" data-parent="#accordion2" id="section-title"><div id="section-title">@ AMBASSADORS FOR SUSTAINED HEALTH</div></a>
	<ul style="list-style:none;" class="collapse" id="ASH-nav">
		<li><a href="/ASH/DonutDash/index.php" onclick="do_click();">Donut Dash 2017</a></li>
		<li><a href="/ASH/Rebrand/index.php" onclick="do_click();">ASH Rebrand</a></li>
		<li><a href="/ASH/WebRedesign/index.php" onclick="do_click();">ASH Website Redesign</a></li>
<!-- 		<li><a href="http://www.53964.org/index.php?/info/ASH-Annual-Report/"  onclick="do_click();">ASH Annual Report</a></li> -->
	</ul>
	</li>

<!-- 	<ul class="accordion-group">
	<li><a href="http://www.53964.org/index.php?/bloomies/campaigns/" id="section-title"><div id="section-title">@ BLOOMINGDALE'S</div></a>
	<ul style="list-style:none;" class="collapse" id="bloomies-nav">
		<li></li>
	</li>
	</ul> -->

	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#NYM-nav" data-toggle="collapse" data-parent="#accordion2" id="section-title"><div id="section-title">@ NEW YORK MAGAZINE</div></a>
		<ul style="list-style:none;" class="collapse" id="NYM-nav">
			<li><a href="/NYMAG/SS2016/index.php" onclick="do_click();">Spring/Summer Weddings 2016</a></li>
			<li><a href="/NYMAG/WW2016/index.php" onclick="do_click();">Winter Weddings 2016</a></li>
	</ul>
	</li>

	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#EH-nav" data-toggle="collapse" data-parent="#accordion2" id="section-title"><div id="section-title">@ ESSENTIAL HOMME MAGAZINE</div></a>
		<ul style="list-style:none;" class="collapse" id="EH-nav">
			<li><a href="/EHM/Redesign/index.php" onclick="do_click();">Redesign (April/May 2015)</a></li>
	</ul>
	</li>

	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#EDG-nav" data-toggle="collapse" data-parent="#accordion2" id="section-title"><div id="section-title">@ CONDÉ NAST EDG/SIP</div></a>
		<ul style="list-style:none;" class="collapse" id="EDG-nav">
	<!-- 		<li><a href="http://www.53964.org/index.php?/edgsip/gourmet-classics/" onclick="do_click();">Gourmet Classics (Prototype)</a></li> -->
			<li><a href="/EDG/A_LIST2/index.php" onclick="do_click();">A-List: Best Performances of 2014</a></li>
<!-- 			<li><a href="http://www.53964.org/index.php?/edgsip/epicurious-fresh/" onclick="do_click();">Epicurious: Fresh</a></li> -->
			<li><a href="/EDG/EPI_AMERICA/index.php" onclick="do_click();">Epicurious: America's Best Recipes</a></li>
			<li><a href="/EDG/A_LIST1/index.php" onclick="do_click();">A-List (Prototype)</a></li>
			<li><a href="/EDG/DOMINO/index.php" onclick="do_click();">Domino Color (Prototype)</a></li>
			<li><a href="/EDG/EPI_RUSH/index.php" onclick="do_click();">Epicurious: Dinner Rush</a></li>
	</ul>
	</li>


	<ul class="accordion-group">
	<li style="list-style:none;"><a href="#ETC-nav" data-toggle="collapse" data-parent="#accordion2" id="section-title"><div id="section-title">ET CETERA</div></a></li>
	<ul style="list-style:none;" class="collapse" id="ETC-nav">

		<script type="text/javascript">
		// // Popup window code
		// function newPopup(url) {
		//     popupWindow = window.open(
		//         url,'popUpWindow','height=650,width=385,resizable=no,scrollbars=yes,toolbar=no,menubar=no,location=no,directories=no,status=yes')
		// }

		function popupCenter(url, title, w, h) {
		var left = (screen.width/2)-(w/2);
		var top = (screen.height/2)-(h/2);
		return window.open(url, title, 'toolbar=no, location=no, directories=no, status=no, menubar=no, scrollbars=no, resizable=no, copyhistory=no, width='+w+', height='+h+', top='+top+', left='+left);
		}
		// </script>


		<li><a onclick="popupCenter('http://mbcox.github.io/sanderscanvas/', 'Berning Questions Mobile App',375,525);" href="javascript:void(0);">Berning Questions Mobile App</a></li>

<!-- 		<li><a href="http://www.53964.org/index.php?/uxui/pomodoro-app-prototype/" onclick="do_click();">Pomodoro App Prototype</a></li>
 -->
 		<li><a href="/ETC/WEDDING/" onclick="do_click();">A Wedding</a></li>
<!-- 		<li><a href="http://www.53964.org/index.php?/identity/the-donut-pub/" onclick="do_click();">The Donut Pub Rebrand</a></li>
 -->		<li><a href="/ETC/TATTOO" onclick="do_click();">A Tattoo</a></li>
<!-- 		<li><a href="http://www.53964.org/index.php?/edgsip/tandemodus-website-redesign/" onclick="do_click();">Tandemodus Website Redesign</a></li> -->

	</ul>
	</li>
</div>
</div>
      </nav>
    </div>

    <div class="col-sm-9 col-lg-10">
    	<!-- text and image -->

		<div class='cl'><!-- --></div>
		<div id='img-container'>
