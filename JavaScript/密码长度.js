let input = document.querySelector("[name='password']");
// console.log(input);
input.addEventListener("keyup", function (event) {
    // console.log(input.value);
    if (event.keyCode == 13) {
        document.getElementById("btn").click();
        let div = document.querySelector("[name='msg']");
        // console.log(div);
        let msg = "";
        if (input.value.length <= 5) {
            msg = "长度不可小于6位";
        }
        div.innerHTML = msg;
    }
    event.preventDefault();
});

btn.addEventListener("click", function () {
    // alert("success");
    console.log(input.value);
});