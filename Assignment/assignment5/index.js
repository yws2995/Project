const body = document.querySelector("body");

body.backgroundColor = "blue";

function handleResize() {
  const bodyLength = window.innerWidth;
  if (bodyLength > 500) {
    body.style.backgroundColor = "yellow";
  } else if (bodyLength > 400) {
    body.style.backgroundColor = "purple";
  } else {
    body.style.backgroundColor = "blue";
  }
}

window.addEventListener("resize", handleResize);
