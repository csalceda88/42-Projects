var content = [];

function cookie(name, content)
{
	document.cookie= name + "=" + content + ";" + "expires=Thu, 15 Dec 2100 12:00:00 PST;";
}
function listdiv(message)
{
	var parent_list = document.getElementById('ft_list');
	var new_div = document.createElement('div');
	new_div.style.height = '25px';
    new_div.style.width = '200px';
    new_div.style.border = '1px solid black';
	new_div.style.paddingLeft = '10px';
	new_div.style.background = 'gray';
	new_div.style.color = 'blue';
	var text = document.createTextNode(message);
	new_div.appendChild(text);
	new_div.setAttribute("onclick", "listdelete(this)");
	parent_list.insertBefore(new_div, parent_list.firstChild);
	content.push(message);
	var json_content = JSON.stringify(content);
	cookie("divs", json_content);
}

function savedcookie(name)
{
	var text = document.cookie;

	var content_cookie = text.split(';');
	for(var i in content_cookie)
	{
		if (content_cookie[i].substring(0,4) == "divs")
		{

			var content = content_cookie[i].substring(5);
			content = JSON.parse(content);
			for(var c in content)
				listdiv(content[c]);
		}
	}
}
savedcookie("divs");

function newitem (){
	var message = window.prompt();
	if (message != "" && message != null)
		listdiv(message);
}
function listdelete (id){
	if (window.confirm("Do you really want to delete this note?"))
	{
		var search = id.firstChild;
		search = search['data'];
		var index = content.indexOf(search);
		if (index != -1)
		{
			content.splice(index, 1 );
			var json_content = JSON.stringify(content);
			cookie("divs", json_content);
		}
		id.parentNode.removeChild(id);
	}
}