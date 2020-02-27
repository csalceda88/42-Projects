#!/usr/bin/php
<?php  
	function ft_split($str)
	{
		$phrase = explode(" ", $str);
		$split = array_values(array_filter($phrase));
		sort($split);
		return ($split);
	}
?>