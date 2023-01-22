let input=document.querySelector("[name='username']");
console.log(input);
input.addEventListener("keyup",function(){
console.log(input.value);
let div=document.querySelector("[name='box1']");
if(input.value.length<=5){
 div.innerHTML="密码太短辣！";   
}
else{
    div.innerHTML="";
}
}
)
