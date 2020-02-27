#!/usr/bin/php
<?PHP
if ($argc > 1)
{
	$string = $argv[1];
	while ((strpos($string, "  ")) == TRUE)
		$string = str_replace("  ", " ", $string);
	$tab = explode(" ", $string);
	$word = count($tab);
	
	$i = 1;
	while ($i < $word)
		echo $tab[$i++]." ";
	echo $tab[0]."\n";
}
?>