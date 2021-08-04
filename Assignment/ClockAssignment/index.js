const clockTitle = document.querySelector(".js-clock");

function getDDay() {
  const setDate = new Date("2021-12-25");
  //d-day의 연,월,일
  const setDateYear = setDate.getFullYear();
  const setDateMonth = setDate.getMonth() + 1;
  const setDateDay = setDate.getDay();

  //현재 날짜
  const today = new Date();

  //D-day와 현재 날짜의 차이를 밀리초의 값으로 가져온다.
  const sub = setDate.getTime() - today.getTime();

  //Math.floor 함수를 사용해 근접한 정수값을 가져온다.
  //밀리초 값이기 때문에 1000을 곱한다.
  //1000*60 => 60초(1분) => 60분 * 24 = 24시간(1day)
  const days = String(Math.floor(sub / (1000 * 60 * 60 * 24))).padStart(3,"0");
  const hours = String(Math.floor((sub % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60))).padStart(2,"0");
  const minutes = String(Math.floor((sub % (1000 * 60 * 60)) / (1000 * 60))).padStart(2,"0");
  const seconds = String(Math.floor((sub % (1000 * 60)) / 1000)).padStart(2,"0");

  clockTitle.innerText = `${days}d${hours}h${minutes}m${seconds}s`
}

getDDay();
setInterval(getDDay, 1000);
