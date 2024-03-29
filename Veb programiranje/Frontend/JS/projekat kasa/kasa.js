let output = document.getElementById("output");
let currentInput = "0";
let operator = null;
let memory = null;
let result = 0;

function appendNumber(number) {
  if (currentInput === "0") {
    currentInput = number;
  } else {
    currentInput += number;
  }
  output.innerText = currentInput;
}

function appendOperator(op) {
  if (operator !== null) {
    calculate();
  }
  operator = op;
  memory = currentInput;
  currentInput = "0";
}

function clearOutput() {
  currentInput = "0";
  operator = null;
  memory = null;
  output.innerText = currentInput;
}

function calculate() {
  if (operator === null || memory === null) return;
  // let result;
  switch (operator) {
    case "+":
      result = parseFloat(memory) + parseFloat(currentInput);
      break;
    case "-":
      result = parseFloat(memory) - parseFloat(currentInput);
      break;
    case "*":
      result = parseFloat(memory) * parseFloat(currentInput);
      break;
    case "/":
      result = parseFloat(memory) / parseFloat(currentInput);
      break;
  }
  output.innerText = result;
  currentInput = result;
  memory = null;
  operator = null;
}

function kusur() {
  let dat_novac = parseInt(document.getElementById("dat_novac").value);
  let kusur = dat_novac - parseInt(result);
  let ispiskusura = "Iznos vaseg kusura je " + kusur;
  document.getElementById("kusur").innerText = ispiskusura;

  let bn5k, bn2k, bn1k, bn500, bn200, bn100, bn50, bn20, bn10, bn5, bn2, bn1;

  bn5k = Math.floor(kusur / 5000);
  kusur = kusur % 5000;

  bn2k = Math.floor(kusur / 2000);
  kusur = kusur % 2000;

  bn1k = Math.floor(kusur / 1000);
  kusur = kusur % 1000;

  bn500 = Math.floor(kusur / 500);
  kusur = kusur % 500;

  bn200 = Math.floor(kusur / 200);
  kusur = kusur % 200;

  bn100 = Math.floor(kusur / 100);
  kusur = kusur % 100;

  bn50 = Math.floor(kusur / 50);
  kusur = kusur % 50;

  bn20 = Math.floor(kusur / 20);
  kusur = kusur % 20;

  bn10 = Math.floor(kusur / 10);
  kusur = kusur % 10;

  bn5 = Math.floor(kusur / 5);
  kusur = kusur % 5;

  bn2 = Math.floor(kusur / 2);
  kusur = kusur % 2;

  bn1 = Math.floor(kusur / 1);
  kusur = kusur % 1;

  if (bn1 == 0) document.getElementById("div1rsd").style.display = "none";
  else document.getElementById("bn1").innerText = bn1;
  if (bn2 == 0) document.getElementById("div2rsd").style.display = "none";
  else document.getElementById("bn2").innerText = bn2;
  if (bn5 == 0) document.getElementById("div5rsd").style.display = "none";
  else document.getElementById("bn5").innerText = bn5;
  if (bn10 == 0) document.getElementById("div10rsd").style.display = "none";
  else document.getElementById("bn10").innerText = bn10;
  if (bn20 == 0) document.getElementById("div20rsd").style.display = "none";
  else document.getElementById("bn20").innerText = bn20;
  if (bn50 == 0) document.getElementById("div50rsd").style.display = "none";
  else document.getElementById("bn50").innerText = bn50;
  if (bn100 == 0) document.getElementById("div100rsd").style.display = "none";
  else document.getElementById("bn100").innerText = bn100;
  if (bn200 == 0) document.getElementById("div200rsd").style.display = "none";
  else document.getElementById("bn200").innerText = bn200;
  if (bn500 == 0) document.getElementById("div500rsd").style.display = "none";
  else document.getElementById("bn500").innerText = bn500;
  if (bn1k == 0) document.getElementById("div1000rsd").style.display = "none";
  else document.getElementById("bn1k").innerText = bn1k;
  if (bn2k == 0) document.getElementById("div2000rsd").style.display = "none";
  else document.getElementById("bn2k").innerText = bn2k;
  if (bn5k == 0) document.getElementById("div5000rsd").style.display = "none";
  else document.getElementById("bn5k").innerText = bn5k;
}
