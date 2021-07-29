// const longinForm = document.getElementById("login-form");
// const loginInput = longinForm.querySelector("input"); 
// const loginButton = longinForm.querySelector("button"); 

const loginForm = document.querySelector("#login-form")
const loginInput = document.querySelector("#login-form input"); 
const link = document.querySelector("a");
const greeting = document.querySelector("#greeting");

const HIDDEN_CLASSNAME = "hidden";

function onLoginSubmit(event) {
    event.preventDefault();
    loginForm.classList.add("HIDDEN_CLASSNAME");
    const username = loginInput.value;
    greeting.innerText = "Hello " + username;
    greeting.classList.remove("HIDDEN_CLASSNAME")
}
function handleLinkClick(event) {
    event.preventDefault();
}
loginForm.addEventListener("submit", onLoginSubmit);
link.addEventListener("click", handleLinkClick);

