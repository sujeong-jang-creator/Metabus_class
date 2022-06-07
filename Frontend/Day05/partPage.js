var xhr;
window.onload=function(){
    xhr = new XMLHttpRequest();
}

function startMethod(){
    var uid = document.getElementById("userid").value;
    var upwd = document.getElementById("userpwd").value;
    var url = ".jsp?userid="+uid+"&userpwd="+upwd;
    xhr.onreadystatechange = resultProcess;
    xhr.open("GET", url, true);
    // 비동기로 보낼 준비 완료
    xhr.setRequestHeader("Ccontent-type", "application/x-www-form-urlencoded");
    xhr.send(null);
}

function resultProcess(){
    if(xhr.readyState==4){
        if(xhr.status==200){
            var result = xhr.responseXML.getElementsByTagName("result")[0].firstChild.data;
            var name = xhr.responseXML.getElementByTagName("id")[0].firstChild.data;
            if (result==1){
                var output = "<table><tr><td align='center'><b>";
                    output += name + "</b>님 환영합니다.^^";
                    output += "</td></tr><tr><td align='center'>";
                    output += "<input type='button' id='logout' value='로그아웃'>";
                    output += "</td></tr></table>";
                document.getElementById("confirmed").innerHTML=output;
            }else if(result==0){
                alert('비밀번호가 맞지 않습니다. ');
                document.getElementById("userid").value = '';
                document.getElementById("userpwd").value = '';
                document.getElementById("userpwd").focus();
            }else{
                alert('비밀번호가 맞지 않습니다.');
                document.getElementById("userid").value = '';
                document.getElementById("userpwd").value = '';
                document.getElementById("userpwd").focus();
            }
        }
    }
}