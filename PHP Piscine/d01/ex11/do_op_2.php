#!/usr/bin/php
<?PHP

function ft_current($string, $index)
{
    return substr($string, $index, 1);
}

function error()
{
    echo "Syntax Error\n";
    exit(1);
}

function operator($string)
{
    return ($string === "+"
            || $string === "-"
            || $string === "*"
            || $string === "/"
            || $string === "%");
}

if ($argc != 2)
{
    echo "Incorrect Parameters\n";
    exit(1);
}
$string = str_replace(' ', '', $argv[1]);
$string = str_replace("\t", '', $string);
$length = strlen($string);
$number = false;
$operator = false;
$i = 0;
if (ft_current($string, $i) === "-")
{
    $i++;
}
while ($i < $length && is_numeric(ft_current($string, $i)))
{
    $i++;
}
if ($i < 1 || $i == $length)
{
    error();
}

if (operator(ft_current($string, $i)))
{
    $i++;
}
else
{
    error();
}

if (ft_current($string, $i) === "-")
{
    $i++;
}
while ($i < $length && is_numeric(ft_current($string, $i)))
{
    $i++;
}
if ($i != $length)
{
    error();
}
eval("echo $argv[1];");
echo "\n";
?>