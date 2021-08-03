const randomForm = document.querySelector("#random-form");
const randomNumber = document.querySelector("#random-number");
const userNumber = document.querySelector("#user-number");

const userNumberResult = document.querySelector("#userNum");
const autoNumberResult = document.querySelector("#autoNum");

const result = document.querySelector("#result");
const HIDDEN_CLASSNAME = "hidden";

function randomGame(event) {
  event.preventDefault();

  const randomNum = parseInt(randomNumber.value);
  const userNum = parseInt(userNumber.value);
  const autoNum = Math.floor(Math.random() * randomNum);

  userNumberResult.innerText = `You chose: ${userNum},`;
  autoNumberResult.innerText = `the machine chose: ${autoNum}.`;

  if (userNum === autoNum) {
    result.innerText = "You won!";
  } else {
    result.innerText = "you lost!";
  }
}

randomForm.addEventListener("submit", randomGame);
