<script src='dir.php'></script>

<?php require('../nav.inc'); ?>


<div id="description_text">
<p><section itemscope itemtype="http://schema.org/Person"><span itemprop="name"><b>JENNA XU</b></span><br>
<span itemprop="email">xujenna@gmail.com</span><br></p>
<span itemscope itemtype="http://schema.org/Organization"><br>
<p><a href="http://xujenna.com/itp_blog" itemprop="sameAs" target="new">@ ITP</a><br>
<a href="https://github.com/xujenna" itemprop="sameAs" target="new">@ github</a><br>
<a href="https://bl.ocks.org/xujenna" itemprop="sameAs" target="new">@ bl.ocks</a><br>
<a href="http://www.linkedin.com/pub/jenna-xu/31/782/149" itemprop="sameAs" target="new">@ LinkedIn</a><br>
<a href="https://vsco.co/xujenna/images/1" itemprop="sameAs" target="new">@ VSCO Cam</a><br>
<!-- <a href="http://www.pinterest.com/xujenna/" itemprop="sameAs" target="new">@ Pinterest</a><Br>
 --></p>
</span>

<p><br>Freelance <span itemprop="jobTitle">graphic designer</span> based in <span itemprop="address" itemscope itemtype="http://schema.org/PostalAddress"><span itemprop="addressLocality">NYC</span></span>;
</p>
<p><a href="http://xujenna.com/itp_blog" target="new">M.P.S. Candidate</a> at NYU ITP;
</p>
<p>
whose resume is available <a href="/jennaxu_resume.pdf" target="new">here</a>.
</p>
</section>


</div>

<script>
// console.log("jpgs", jpgs);
// console.log("pngs", pngs);

for (i=0; i<pngs.length; i++) {
	$('#img-container').append("<p><img class='img-responsive' max-width='400px' src='" + pngs[i] + ".png'> </p>");
}

for (i=0; i<jpgs.length; i++) {
	$('#img-container').append("<p><img class='img-responsive' max-width='400px' src='" + jpgs[i] + ".jpg'> </p>");

}


</script>




</div>

<!-- end text and image -->

   </div>
  </div>
</div>
</body>
