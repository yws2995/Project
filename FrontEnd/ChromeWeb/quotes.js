const quotes = [{
    quote: "The way to get started is quit talking and begin",
    author: "Walt Disney",
},
{
    quote: "Hi",
    author: "Hello",
},
{
    quote: "Bye",
    author: "Bye!",
},
]


const quote = document.querySelector("#quote span:first-child");
const author = document.querySelector("#quote span:last-child");

const todaysQuote = quotes[Math.floor(Math.random() * quotes.length)];

quote.innerText = todaysQuote.quote;
author.innerText = todaysQuote.author;