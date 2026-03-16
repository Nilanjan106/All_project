// console.log("hello")
// let onumber = prompt("Guess the Number");
// let number = 67;
// let count = 0;
// while(onumber != number) {
//     count++;
//     onumber = prompt("guess again ")
// }
// console.log("You Guess it");
// for(let i = 1; i<=100; i++) {
//     if(i % 2 === 0) {
//         console.log(i)
//     }
// }
// let n = 0;
// let num,average;
// let marks = [85,97,89,93,86,75,45,23]
// for( i of marks) {
//     n+=i;
//     num = marks.length
//     average = (n/num);
// }

// console.log(average);
// console.log(n);
// console.log(num);
// let item = [245,600,562,356,896,875]
// let discount,price;
// for(let i of item) {
//     discount = i*0.1;
//     price = i - discount;
// }

// console.log(price);
// let companies = ["Bloomberg" , "google" , "Microsoft" , "Apple" , "TCS" , "IBM"]
// let newcompany = companies.shift();
// console.log(companies);
// companies.splice(2,0,"Ola")
// console.log(companies);
// companies.push("Amazon")
// console.log(companies);

// let ar = [2,5,6,9,8,7,4];
// ar.forEach(ar1 => {
//     console.log(ar1)
// });
// let squre = (num) => {
//     console.log(num*num)
// }
// ar.forEach(squre)

// let marks = [89,98,87,97,85,65,45]
// let output = marks.filter((val) => {
//     return val>90;
// });
// console.log(output);

// let n = prompt("Enter a Number");
// let array = [];
// for(let i = 1; i<=n; i++) {
//     array[i-1] = i;
// }
// console.log(array);
// let output = array.reduce((prev,curr) => {
//     return prev+curr;
// });
// console.log(output);
// let output1 = array.reduce((prev,curr) => {
//     return prev*curr;});
//     console.log(output1)
// console.log(window);

// let a = 6;
// let b = "6";
// if (a===b) {
//     console.log("correct");
// } else {
//     console.log("wrong");
// }
// let i = 0;
// while(i<=10) {
//     console.log(i);
// i++;
// }
// let arr = ["rajesh","nilanjan", "sukdev" , "aritra" ,"rajdeep", "amitabh"];
// for (const val of arr) {
//     console.log(val);
    
// }
// let input = prompt("enter a number : ");
// let num = 56;
// let count = 0;

// while(num != input) {
//     count++;
//     input = prompt("Let's try again");
    
// }
// console.log("you guessed it right");
// let str = "my name is nilanjan"

// console.log(str.length)
// console.log(str.toUpperCase(5,8))
// console.log(str.slice(5,9))
// console.log(str.replaceAll("a","m"))
// console.log(str.charAt(3))


// let Name = prompt("enter your name")
// let final = "@" + Name + Name.length
// console.log(final)


// let arr = [69,65,8,5,6,8,6,2,3,5,8,4,6,2,3,1]
// let n = 0;
// for(let val of arr) {
//     n+=val
// }
// console.log(n/arr.length);


// let item = [245,600,562,356,896,875]
// let discount,price;
// let i = 0;
// for(let val of item) {
//     discount = val*0.1
//     item[i] = item[i] - discount
//     console.log(item[i]);
//     i++;
// }


// let arr = ["nilanjan","aritra","rajesh"]
// arr.push("rajdeep")
// console.log(arr)
// arr.pop()
// console.log(arr)
// arr.slice(2,3)
// arr.splice(2,2,"sukdev","rajdeep")
// console.log(arr)


// let companies = ["Amazonn","Flipkart","Uber","Ola","Google","Microsoft"]
// companies.shift()
// companies.splice(2,0)
// console.log(companies)


// function sum (a,b) {
//     s = a+b
//     return s
// }
// sum(3,4)
// console.log(s)
// sum(9,9)
// console.log(s)


// const sum = (a,b) => {
//     console.log(a+b)
//     return a+b
// }
// sum(6,6)

// function countvowels (str){
//     let count = 0;
//     for(let i of str) {
//         if(i === "a" || i ===  "e" || i ===  "i" || i ===  "o" || i === "u") {
//             count++;
//         }
//     }
//     console.log(count);
//     }


// let arr = [1,2,3,4,5,6,7,8,9]
// arr.forEach((val) => {
//     console.log(val*val)

// })


// let marks = [96,89,90,86,95,94,92,57,68,93,92]
// let count = 0;
// let topper = marks.filter((val) => {
//     return val > 90
// })
// console.log(topper)


// let num = prompt ("enter a number")
// let arr = [];
// for(let i = 1; i <= num; i++) {
//     arr[i-1] = i;
// }
// let outputsum = arr.reduce((prev,curr) => {
//     return prev+curr

// })
// console.log(outputsum)
// let outputmul = arr.reduce((prev,curr) => {
//     return prev*curr

// })
// console.log(outputmul)


// let h2 = document.querySelector("h2");
// h2.innerText = h2.innerText + "FROM NILANJAN SAU"
// let box = document.querySelectorAll(".box")
// let count = 0;
// for (divs of div) {
//     divs.innerText = "this is box "

// }
// box[0].innerText = "hi this is box 1"
// box[1].innerText = "hi this is box 2"
// box[2].innerText = "hi this is box 3"
// let para = document.querySelector("div")
// // console.dir(para)
// console.dir(para.getAttribute("p"))

// console.dir(para.getAttribute("class"))
// let pa = document.querySelector("p")
// console.dir(pa.getAttribute("class"))


// let newbut = document.createElement("button")
// newbut.innerText = "click me!"
// newbut.style.backgroundColor = "red"
// newbut.style.color = "white"
// // console.dir(newbut)
// let but = document.querySelector("body")
// but.prepend(newbut)



// let but1 = document.querySelector("div")
// console.dir(but1.getAttribute("id"))
// but1.style.backgroundColor = "green"

// let h1 = document.createElement("h1")
// h1.innerHTML = "<h1> This is new Heading</h1>"
// document.querySelector("body").prepend(h1);


// let par = document.querySelector("p")

// let but = document.querySelector("#but")
// but.onclick = () => {
//     console.log("times clicked")
// }
// let div = document.querySelector(".box")
// div.onmouseover  =  () => {
//     console.log("you entered in a div")
// }
// let st1 = "java";
// let str2 = new ("java");
// console.log(st1==str2);
// let arr = [2,6,9,7,8];
// let arr1 = arr.map((x) => x*x);
// console.log(arr1);


// let arr = [2,9,7,6,1,2,7,6];
// let arr2 = arr.filter((item,index) => arr.indexOf(item)===index);
// console.log(arr2);

// function duplicate(arr)  {
//     let seen = new Set();
//     return arr.filter((item) => {
//         if(seen.has(item)) {
//             return false;
//         } else {
//             seen.add(item);
//             return true;
//         }
//     })

//     }
//     console.log(duplicate(arr));

// for(var i = 0;i < 3;i++) {
    
//     setTimeout(function() {
//         console.log("hello");
//         console.log(i);
//     },3000);
// }
// for(let i = 0;i < 3;i++) {
//     console.log("hello");
//     setTimeout(function() {
//         console.log(i);
//     },10000);
// }


// var createHelloWorld = function() {
   
//    return function(...args) {
//        console.log("Hello World");
//    }
// };
// createHelloWorld();
// var createHelloWorld = function() {
//     return function(...args) {
//         console.log("Hello World");
//     }
// };

// // Usage
// const helloWorld = createHelloWorld();
// helloWorld(); // Outputs: Hello World

/**
//  * @param {number} n
//  * @return {Function} counter
 */
// var createCounter = function(n) {
    
//     return function(n) {
//         return "hello world";
        
        
//     };
// };
// const counter = createCounter(10)
//   counter() // 10
//   counter() // 11
//   counter() // 12
console.log("Hello World");


