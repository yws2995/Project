const target = document.querySelector("#dynamic");
let stringArr = ["Learn to HTML", "Learn to CSS",
"Learn to Javascript", "Learn to Python", "Learn to Ruby"];
let selectString = stringArr[Math.floor(Math.random() * stringArr.length)];
let selectStringArr=selectString.split("");

function randomString() {
    let stringArr = ["Learn to HTML", "Learn to CSS",
    "Learn to Javascript", "Learn to Python", "Learn to Ruby"];
    let selectString = stringArr[Math.floor(Math.random() * stringArr.length)];
    let selectStringArr=selectString.split("");

    return selectStringArr;
}
//타이핑 리셋
function resetTyping() {
    target.textContent = "";
    dynamic(randomString());
}
//한 글자씩 텍스트 출력 함수
function dynamic(randomArr) {
    if(randomArr.length > 0) {
        target.textContent += randomArr.shift(); /*배열의 앞의 값부터 빼내서 출력 */
        setTimeout(function() {
            dynamic(randomArr);
        }, 80);
    } else {
        setTimeout(resetTyping, 3000);
    }
}

dynamic(randomString());
//커서 깜박임 효과
function blink() {
    target.classList.toggle("active"); /*active class가 추가되었다가 삭제되었다가를 반복하게 된다. 
    앞선 html의 #dynamic에 class=active를 추가하면 커서가 사라지는 것을 확인 */
}

setInterval(blink, 500);
