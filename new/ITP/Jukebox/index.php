<script src='dir.php'></script>

<?php require('../../nav.inc'); ?>


<div id="description_text">
A collaboration with <a href="http://www.ilanabonder.com/" target="new">Ilana Bonder</a>, this jukebox plays music associated with photographic memories.<br>


</div>

<script>


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