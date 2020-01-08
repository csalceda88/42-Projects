<?PHP
    if ($_GET["action"])
    {
        if ($_GET["action"] == "set" && $_GET["name"] != '' && $_GET["value"] != '')
            setcookie($_GET["name"], $_GET["value"]);
        if ($_GET["action"] == "get" && $_GET["name"] != '' && !$_GET["value"])
        {
            $name = $_GET["name"];
            if ($_COOKIE[$name])
                echo "$_COOKIE[$name]\n";
        }
        if ($_GET["action"] == "del" && $_GET["name"] != '' && !$_GET["value"])
            setcookie($_GET["name"], '', time() - 3600);
    }    
?>