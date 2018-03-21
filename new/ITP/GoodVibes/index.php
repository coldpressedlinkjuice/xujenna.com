<script src='dir.php'></script>

<?php require('../../nav.inc'); ?>


<div id="description_text">
<p>Our brain-entrainment dome was an immersion into in a four-minute, pan-sensory experience that (theoretically) reproduced the brain activity found in buddhist monks. Users wore a headset that measured their brain activity during the session, which visualized how the experience affected them in real time.
</p><p>
A collaboration with <a href="https://www.barakchamo.com" target="new">Barak Chamo</a>. More documentation to come.</p>
</div>

<script>
// console.log("jpgs", jpgs);
// console.log("pngs", pngs);

for (i=0; i<mp4s.length; i++) {
	$('#img-container').append("<div class='embed-responsive embed-responsive-16by9 video'> <video class='embed-responsive-item' controls> <source src='" + mp4s[i] + ".mp4' type='video/mp4'>Your browser does not support HTML5 video.</video></div>");
} 

for (i=0; i<pngs.length; i++) {
	$('#img-container').append("<p><img class='img-responsive' src='" + pngs[i] + ".png'> </p>");
}

for (i=0; i<jpgs.length; i++) {
	$('#img-container').append("<p><img class='img-responsive' src='" + jpgs[i] + ".jpg'> </p>");

}


</script>




</div>

<!-- end text and image -->

   </div>
  </div>
</div>
</body>